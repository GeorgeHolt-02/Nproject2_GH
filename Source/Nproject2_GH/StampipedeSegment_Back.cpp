// Fill out your copyright notice in the Description page of Project Settings.


#include "StampipedeSegment_Back.h"

#include "EnemyProjectile_Shockwave.h"
#include "EnemyProjectile_StampipedeOrb.h"
#include "PlayerChar.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

AStampipedeSegment_Back::AStampipedeSegment_Back()
{
	SetRootComponent(EnemyCollider);
	
	LegMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LegMeshL"));
	LegMeshL->SetupAttachment(BaseMesh);
	LegMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LegMeshR"));
	LegMeshR->SetupAttachment(BaseMesh);
	BackLegMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackLegMeshL"));
	BackLegMeshL->SetupAttachment(BaseMesh);
	BackLegMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackLegMeshR"));
	BackLegMeshR->SetupAttachment(BaseMesh);

	BackLegColliderL = CreateDefaultSubobject<UBoxComponent>(TEXT("BackLegColliderL"));
	BackLegColliderL->SetupAttachment(RootComponent);
	BackLegColliderR = CreateDefaultSubobject<UBoxComponent>(TEXT("BackLegColliderR"));
	BackLegColliderR->SetupAttachment(RootComponent);
	BackLegColliderL->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BackLegColliderL->SetCollisionObjectType(ECC_GameTraceChannel9);
	BackLegColliderR->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BackLegColliderR->SetCollisionObjectType(ECC_GameTraceChannel9);

	ShotOriginL = CreateDefaultSubobject<USceneComponent>(TEXT("ShotOriginL"));
	ShotOriginL->SetupAttachment(RootComponent);
	ShotOriginR = CreateDefaultSubobject<USceneComponent>(TEXT("ShotOriginR"));
	ShotOriginR->SetupAttachment(RootComponent);

	ShockwaveOriginL = CreateDefaultSubobject<USceneComponent>(TEXT("ShockwaveOriginL"));
	ShockwaveOriginL->SetupAttachment(LegMeshL);
	ShockwaveOriginR = CreateDefaultSubobject<USceneComponent>(TEXT("ShockwaveOriginR"));
	ShockwaveOriginR->SetupAttachment(LegMeshR);

	bCanStomp = true;

	bBackLegLHit = false;
	bBackLegRHit = false;
	bHit = false;

	bCanShoot = true;

	ShootTimer;
	
	Handle_StompL;
	Handle_StompR;
	Handle_StompDelay;
}

void AStampipedeSegment_Back::BeginPlay()
{
	Super::BeginPlay();
	
	//EnemyCollider->OnComponentBeginOverlap.RemoveDynamic(this, &ABaseEnemy::OnOverlapStart);
	BackLegColliderL->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnOverlapStart);
	BackLegColliderR->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnOverlapStart);

	LDefaultRot = LegMeshL->GetRelativeRotation();
	RDefaultRot = LegMeshR->GetRelativeRotation();
}

void AStampipedeSegment_Back::StartInvulnPeriod()
{
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	BackLegColliderL->SetCollisionObjectType(ECC_GameTraceChannel9);
	BackLegColliderR->SetCollisionObjectType(ECC_GameTraceChannel9);
	BaseMesh->SetVisibility(false);
	LegMeshL->SetVisibility(false);
	LegMeshR->SetVisibility(false);
	BackLegMeshL->SetVisibility(false);
	BackLegMeshR->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AStampipedeSegment_Back::InvulnPeriod(float DeltaTime)
{
	if (InvulnTime_Current > 0.0f)
	{
		if (FlashTime_Current <= 0.0f)
		{
			FlashTime_Current = FlashTime_Max;
			bShouldFlash = true;
		}
		InvulnTime_Current -= DeltaTime;
		
		if(InvulnTime_Current <= 0.0f)
		{
			bStopFlashing = true;
		}
	}
	else
	{
		if(EnemyCollider->GetCollisionObjectType() != ECC_GameTraceChannel7)
		{
			EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel7);
		}
		if(BackLegColliderL->GetCollisionObjectType() != ECC_GameTraceChannel7)
		{
			BackLegColliderL->SetCollisionObjectType(ECC_GameTraceChannel7);
		}
		if(BackLegColliderR->GetCollisionObjectType() != ECC_GameTraceChannel7)
		{
			BackLegColliderR->SetCollisionObjectType(ECC_GameTraceChannel7);
		}
		if(bStopFlashing)
		{
			if (!BaseMesh->IsVisible())
			{
				BaseMesh->SetVisibility(true);
			}
			if (!LegMeshL->IsVisible())
			{
				LegMeshL->SetVisibility(true);
			}
			if (!LegMeshR->IsVisible())
			{
				LegMeshR->SetVisibility(true);
			}
			if (!BackLegMeshL->IsVisible())
			{
				BackLegMeshL->SetVisibility(true);
			}
			if (!BackLegMeshR->IsVisible())
			{
				BackLegMeshR->SetVisibility(true);
			}
			if(!(GetWorldTimerManager().TimerExists(ShootTimer)))
			{
				Shoot();
				GetWorldTimerManager().SetTimer(ShootTimer, this, &AStampipedeSegment_Back::Shoot, 0.75f, true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AStampipedeSegment_Back::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				if(!(bHit))
				{
					BaseMesh->SetVisibility(!BaseMesh->IsVisible());
					LegMeshL->SetVisibility(!LegMeshL->IsVisible());
					LegMeshR->SetVisibility(!LegMeshR->IsVisible());
					BackLegMeshL->SetVisibility(!BackLegMeshL->IsVisible());
					BackLegMeshR->SetVisibility(!BackLegMeshR->IsVisible());
				}
				else
				{
					if(!(BackLegMeshL->IsVisible()))
					{
						BackLegMeshL->SetVisibility(true);
					}
					if(!(BackLegMeshR->IsVisible()))
					{
						BackLegMeshR->SetVisibility(true);
					}
					if (!BaseMesh->IsVisible())
					{
						BaseMesh->SetVisibility(true);
					}
					if (!LegMeshL->IsVisible())
					{
						LegMeshL->SetVisibility(true);
					}
					if (!LegMeshR->IsVisible())
					{
						LegMeshR->SetVisibility(true);
					}
					bHit = false;
				}
				
				bShouldFlash = false;
			}
		}
	}
}

void AStampipedeSegment_Back::MainBehaviour(float DeltaTime)
{
	if(InvulnTime_Current <= 0.0f)
	{
		if(bCanShoot)
		{
			if(!(GetWorldTimerManager().TimerExists(ShootTimer)))
			{
				Shoot();
				GetWorldTimerManager().SetTimer(ShootTimer, this, &AStampipedeSegment_Back::Shoot, 0.75f, true);
			}
		}
		else
		{
			if(GetWorldTimerManager().TimerExists(ShootTimer))
			{
				GetWorldTimerManager().ClearTimer(ShootTimer);
				ShootTimer.Invalidate();
			}
		}

		if((GetWorldTimerManager().TimerExists(Handle_StompL)) && (!(GetWorldTimerManager().TimerExists(Handle_StompDelay))))
		{
			LegMeshL->SetRelativeRotation(LegMeshL->GetRelativeRotation() + FRotator(0.0f, 0.0f, -80.0f * DeltaTime));
		}
		else
		{
			LegMeshL->SetRelativeRotation(LDefaultRot);
			if(InvulnTime_Current <= 0.0f)
			{
				if(Player)
				{
					if(FVector::Dist(LegMeshL->GetComponentLocation(), Player->GetActorLocation()) < 1000.0f)
					{
						GetWorldTimerManager().SetTimer(Handle_StompL, this, &AStampipedeSegment_Back::StompL, 0.5f, false);
					}
				}
			}
		
		}

		if((GetWorldTimerManager().TimerExists(Handle_StompR)) && (!(GetWorldTimerManager().TimerExists(Handle_StompDelay))))
		{
			LegMeshR->SetRelativeRotation(LegMeshR->GetRelativeRotation() + FRotator(0.0f, 0.0f, 80.0f * DeltaTime));
		}
		else
		{
			LegMeshR->SetRelativeRotation(RDefaultRot);
			if(InvulnTime_Current <= 0.0f)
			{
				if(Player)
				{
					if(FVector::Dist(LegMeshR->GetComponentLocation(), Player->GetActorLocation()) < 1000.0f)
					{
						GetWorldTimerManager().SetTimer(Handle_StompR, this, &AStampipedeSegment_Back::StompR, 0.5f, false);
					}
				}
			}
		}
	}
	else
	{
		if(GetWorldTimerManager().TimerExists(ShootTimer))
		{
			GetWorldTimerManager().ClearTimer(ShootTimer);
			ShootTimer.Invalidate();
		}
	}
}

void AStampipedeSegment_Back::DamageFunction(float Damage)
{
	// Health_Current -= Damage;
	// UpdateMultiplier();
	if(Player)
	{
		Player->MeterDecrementPauseTime = FlashTime_Max;
	}
	// if (Health_Current <= 0.0f)
	// {
	// 	Death();
	// }
	// if(bBackLegLHit)
	// {
	// 	BackLegMeshL->SetVisibility(false);
	// }
	// else if(bBackLegRHit)
	// {
	// 	BackLegMeshR->SetVisibility(false);
	// }
	// else if(!(bBackLegLHit) && !(bBackLegRHit))
	// {
	// 	BaseMesh->SetVisibility(false);
	// 	LegMeshL->SetVisibility(false);
	// 	LegMeshR->SetVisibility(false);
	// }
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AStampipedeSegment_Back::EnableCollision()
{
	Super::EnableCollision();
	
	if (BackLegColliderL->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		BackLegColliderL->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	if (BackLegColliderR->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		BackLegColliderR->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void AStampipedeSegment_Back::Shoot()
{
	if (OrbBP)
	{
		if(Player)
		{
			FRotator ShotRotation = FRotator(UKismetMathLibrary::FindLookAtRotation(ShotOriginL->GetComponentLocation(), Player->GetActorLocation()));
			FVector ShotLocation = ShotOriginL->GetComponentLocation();
		
			const FActorSpawnParameters SpawnParams;

			AEnemyProjectile_StampipedeOrb* ShotProjectile = (GetWorld()->SpawnActor<AEnemyProjectile_StampipedeOrb>(OrbBP, ShotLocation, ShotRotation, SpawnParams));

			ShotRotation = FRotator(UKismetMathLibrary::FindLookAtRotation(ShotOriginR->GetComponentLocation(), Player->GetActorLocation()));
			ShotLocation = ShotOriginR->GetComponentLocation();

			const FActorSpawnParameters SpawnParams2;

			AEnemyProjectile_StampipedeOrb* ShotProjectile2 = (GetWorld()->SpawnActor<AEnemyProjectile_StampipedeOrb>(OrbBP, ShotLocation, ShotRotation, SpawnParams2));
		}
	}
}

void AStampipedeSegment_Back::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APlayerChar* MyPlayer = Cast<APlayerChar>(OtherActor);
		if(MyPlayer)
		{
			if(bKillOnContact)
			{
				if(!MyPlayer->bPositioningSweep)
				{
					MyPlayer->PlayerDeath();
				}
			}
		}
		else
		{
			if((OverlappedComponent->GetCollisionObjectType() == ECC_GameTraceChannel7) || (OverlappedComponent->GetCollisionObjectType() == ECC_GameTraceChannel8))
			{
				APlayerShot* MyShot = Cast<APlayerShot>(OtherActor);
				if(MyShot)
				{
					bHit = true;
					DamageFunction(0.0f);
					if(OverlappedComponent)
					{
						if(OverlappedComponent == BackLegColliderL)
						{
							BackLegMeshL->SetVisibility(false);
						}
						else if(OverlappedComponent == BackLegColliderR)
						{
							BackLegMeshR->SetVisibility(false);
						}
						else
						{
							BaseMesh->SetVisibility(false);
							LegMeshL->SetVisibility(false);
							LegMeshR->SetVisibility(false);
						}
					}
				}
			}
		}
	}
}

void AStampipedeSegment_Back::StompL()
{
	LegMeshL->SetRelativeRotation(LDefaultRot);
	const FRotator ShotRotation = FRotator(0.0f, 0.0f, 0.0f);
	const FVector ShotLocation = ShockwaveOriginL->GetComponentLocation();
	
	if (ShockBP)
	{
		const FActorSpawnParameters SpawnParams;

		AEnemyProjectile_Shockwave* Shockwave = (GetWorld()->SpawnActor<AEnemyProjectile_Shockwave>(ShockBP, ShotLocation, ShotRotation, SpawnParams));
	}

	if(!(GetWorldTimerManager().TimerExists(Handle_StompDelay)))
	{
		GetWorldTimerManager().SetTimer(Handle_StompDelay, this, &AStampipedeSegment_Back::AttackDelay, 1.0f, false);
	}
}

void AStampipedeSegment_Back::StompR()
{
	LegMeshR->SetRelativeRotation(RDefaultRot);
	const FRotator ShotRotation = FRotator(0.0f, 0.0f, 0.0f);
	const FVector ShotLocation = ShockwaveOriginR->GetComponentLocation();
	
	if (ShockBP)
	{
		const FActorSpawnParameters SpawnParams;

		AEnemyProjectile_Shockwave* Shockwave = (GetWorld()->SpawnActor<AEnemyProjectile_Shockwave>(ShockBP, ShotLocation, ShotRotation, SpawnParams));
	}

	if(!(GetWorldTimerManager().TimerExists(Handle_StompDelay)))
	{
		GetWorldTimerManager().SetTimer(Handle_StompDelay, this, &AStampipedeSegment_Back::AttackDelay, 1.0f, false);
	}
}

void AStampipedeSegment_Back::AttackDelay()
{
	
}