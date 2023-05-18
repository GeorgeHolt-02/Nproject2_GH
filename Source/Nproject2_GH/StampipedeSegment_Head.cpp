// Fill out your copyright notice in the Description page of Project Settings.


#include "StampipedeSegment_Head.h"

#include "EnemyProjectile_StampipedeLsr.h"
#include "PlayerChar.h"
#include "StampipedeSegment_Back.h"
#include "StampipedeSegment_Body.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

AStampipedeSegment_Head::AStampipedeSegment_Head()
{
	SetRootComponent(EnemyCollider);
	
	BaseMesh->SetupAttachment(RootComponent);

	BoundVolume = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoundVolume"));
	BoundVolume->SetupAttachment(RootComponent);

	EyeMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EyeMeshL"));
	EyeMeshL->SetupAttachment(BaseMesh);
	EyeMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EyeMeshR"));
	EyeMeshR->SetupAttachment(BaseMesh);
	AntennaeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AntennaeMesh"));
	AntennaeMesh->SetupAttachment(BaseMesh);
	MandibleMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MandibleMeshL"));
	MandibleMeshL->SetupAttachment(BaseMesh);
	MandibleMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MandibleMeshR"));
	MandibleMeshR->SetupAttachment(BaseMesh);

	LaserOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("LaserOrigin"));
	LaserOrigin->SetupAttachment(RootComponent);
	
	MiddleSegmentNum = 3;

	MovementSpeed = 500.0f;
	RotationSpeed = 90.0f;
	SegmentOffset = 62.5f;
	SegmentInterpLag = 5.0f;

	Rotator = FRotator(0.0f, 0.0f, 0.0f);
	Direction = FVector(0.0f, 0.0f, 0.0f);

	bCanWalk = true;

	LaserActivateTimer;
	LaserShootTimer;
	LaserCancelTimer;
	AttackDelayTimer;
	
}

void AStampipedeSegment_Head::BeginPlay()
{
	Super::BeginPlay();

	EnemyCollider->OnComponentBeginOverlap.RemoveDynamic(this, &ABaseEnemy::OnOverlapStart);
	EnemyCollider->OnComponentBeginOverlap.AddDynamic(this, &AStampipedeSegment_Head::OnOverlapStart);
	
	Rotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
	Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);
	
	if(MiddleSegmentRef)
	{
		for(int i = 0; i < MiddleSegmentNum; i++)
		{
			const FRotator Rotation = GetActorRotation();
			FVector Location = GetActorLocation() - (SegmentOffset * Direction);
			if(i > 0)
			{
				if(MiddleSegments[i-1])
				{
					Location = MiddleSegments[i-1]->GetActorLocation() - (SegmentOffset * Direction);
				}
			}
			const FActorSpawnParameters SpawnParams;
			
			MiddleSegments.Add(GetWorld()->SpawnActor<AStampipedeSegment_Body>(MiddleSegmentRef, Location, Rotation, SpawnParams));
			if(MiddleSegments[i])
			{
				MiddleSegments[i]->EnemyCollider->OnComponentBeginOverlap.AddDynamic(this, &AStampipedeSegment_Head::OnOverlapStart_Body);
			}
		}

		if(BackRef)
		{
			if(MiddleSegments.Last())
			{
				const FRotator LastRotation = GetActorRotation();
				const FVector LastLocation = MiddleSegments.Last()->GetActorLocation() - (SegmentOffset * Direction);
				const FActorSpawnParameters LastSpawnParams;

				Back = GetWorld()->SpawnActor<AStampipedeSegment_Back>(BackRef, LastLocation, LastRotation, LastSpawnParams);
				if(Back)
				{
					Back->EnemyCollider->OnComponentBeginOverlap.AddDynamic(this, &AStampipedeSegment_Head::OnOverlapStart_Body);
					Back->BackLegColliderL->OnComponentBeginOverlap.AddDynamic(this, &AStampipedeSegment_Head::OnOverlapStart_Back);
					Back->BackLegColliderR->OnComponentBeginOverlap.AddDynamic(this, &AStampipedeSegment_Head::OnOverlapStart_Back);
				}
			}
		}
	}
}

void AStampipedeSegment_Head::StartInvulnPeriod()
{
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	BaseMesh->SetVisibility(false);
	EyeMeshL->SetVisibility(false);
	EyeMeshR->SetVisibility(false);
	AntennaeMesh->SetVisibility(false);
	MandibleMeshL->SetVisibility(false);
	MandibleMeshR->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AStampipedeSegment_Head::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	SegmentInterpolation();
}

void AStampipedeSegment_Head::SegmentInterpolation()
{
	for(int i = 0; i < MiddleSegments.Num(); i++)
	{
		if(MiddleSegments[i])
		{
			if (i <= 0)
			{
				if(FVector::Dist(GetActorLocation(), MiddleSegments[i]->GetActorLocation()) > SegmentOffset)
				{
					const FRotator Rotator2 = FRotator(UKismetMathLibrary::FindLookAtRotation(
					MiddleSegments[i]->GetActorLocation(), GetActorLocation()));
					const FVector Direction2 = FRotationMatrix(Rotator2).GetUnitAxis(EAxis::X);
		
					const FVector Location = MiddleSegments[i]->GetActorLocation();
			
					MiddleSegments[i]->SetActorLocation(MiddleSegments[i]->GetActorLocation() +
						(((GetActorLocation() - (SegmentOffset * Direction2)) - Location) / SegmentInterpLag));
					MiddleSegments[i]->SetActorRotation(Direction2.Rotation());
				}
			}
			else
			{
				if(MiddleSegments[i-1])
				{
					if(FVector::Dist(MiddleSegments[i-1]->GetActorLocation(), MiddleSegments[i]->GetActorLocation()) > SegmentOffset)
					{
						const FRotator Rotator2 = FRotator(UKismetMathLibrary::FindLookAtRotation(
						MiddleSegments[i]->GetActorLocation(), MiddleSegments[i-1]->GetActorLocation()));
						const FVector Direction2 = FRotationMatrix(Rotator2).GetUnitAxis(EAxis::X);
		
						const FVector Location = MiddleSegments[i]->GetActorLocation();
				
						MiddleSegments[i]->SetActorLocation(MiddleSegments[i]->GetActorLocation() +
							(((MiddleSegments[i-1]->GetActorLocation() - (SegmentOffset * Direction2)) - Location) / SegmentInterpLag));
						MiddleSegments[i]->SetActorRotation(Direction2.Rotation());
					}
				}
			}
		}
	}

	if(Back)
	{
		if(MiddleSegments.Last())
		{
			if(FVector::Dist(MiddleSegments.Last()->GetActorLocation(), Back->GetActorLocation()) > SegmentOffset)
			{
				const FRotator Rotator3 = FRotator(UKismetMathLibrary::FindLookAtRotation(
					Back->GetActorLocation(), MiddleSegments.Last()->GetActorLocation()));
				const FVector Direction3 = FRotationMatrix(Rotator3).GetUnitAxis(EAxis::X);
		
				const FVector Location2 = Back->GetActorLocation();
		
				Back->SetActorLocation(Back->GetActorLocation() +
					(((MiddleSegments.Last()->GetActorLocation() - (SegmentOffset * Direction3)) - Location2) / SegmentInterpLag));
				Back->SetActorRotation(Direction3.Rotation());
			}
		}
	}
}

void AStampipedeSegment_Head::InvulnPeriod(float DeltaTime)
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
		if(bStopFlashing)
		{
			if (!BaseMesh->IsVisible())
			{
				BaseMesh->SetVisibility(true);
			}
			if (!EyeMeshL->IsVisible())
			{
				EyeMeshL->SetVisibility(true);
			}
			if (!EyeMeshR->IsVisible())
			{
				EyeMeshR->SetVisibility(true);
			}
			if (!AntennaeMesh->IsVisible())
			{
				AntennaeMesh->SetVisibility(true);
			}
			if (!MandibleMeshL->IsVisible())
			{
				MandibleMeshL->SetVisibility(true);
			}
			if (!MandibleMeshR->IsVisible())
			{
				MandibleMeshR->SetVisibility(true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AStampipedeSegment_Head::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				BaseMesh->SetVisibility(!BaseMesh->IsVisible());
				EyeMeshL->SetVisibility(!EyeMeshL->IsVisible());
				EyeMeshR->SetVisibility(!EyeMeshR->IsVisible());
				AntennaeMesh->SetVisibility(!AntennaeMesh->IsVisible());
				MandibleMeshL->SetVisibility(!MandibleMeshL->IsVisible());
				MandibleMeshR->SetVisibility(!MandibleMeshR->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AStampipedeSegment_Head::MainBehaviour(float DeltaTime)
{
	if(bCanWalk)
	{
		SetActorLocation(GetActorLocation() + (MovementSpeed * Direction * DeltaTime));
		SetActorRotation(Direction.Rotation());
		Rotator = FRotator(GetActorRotation().Pitch, GetActorRotation().Yaw + (RotationSpeed * DeltaTime), GetActorRotation().Roll);
		Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);
	}

	if(InvulnTime_Current <= 0.0f)
	{
		if(!(GetWorldTimerManager().TimerExists(AttackDelayTimer)))
		{
			if(Player)
			{
				if(FVector::Dist(GetActorLocation(), Player->GetActorLocation()) < (SegmentOffset * 4))
				{
					bCanWalk = false;
					if(Back)
					{
						Back->bCanShoot = false;
					}
					SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()));
					if((!(GetWorldTimerManager().TimerExists(LaserActivateTimer))) && (!(GetWorldTimerManager().TimerExists(LaserCancelTimer))))
					{
						GetWorldTimerManager().SetTimer(LaserActivateTimer, this, &AStampipedeSegment_Head::LaserActivate, 1.0f, false);
					}

					for(int i = 0; i < MiddleSegments.Num(); i++)
					{
						if(MiddleSegments[i])
						{
							if(!(GetWorldTimerManager().TimerExists(MiddleSegments[i]->Handle_StompDelay)))
							{
								GetWorldTimerManager().SetTimer(MiddleSegments[i]->Handle_StompDelay, MiddleSegments[i], &AStampipedeSegment_Body::AttackDelay, 2.0f, false);
							}
						}
					}
					if(Back)
					{
						if(!(GetWorldTimerManager().TimerExists(Back->Handle_StompDelay)))
						{
							GetWorldTimerManager().SetTimer(Back->Handle_StompDelay, Back, &AStampipedeSegment_Back::AttackDelay, 2.0f, false);
						}
					}
				}
			}
		}
	}
}

void AStampipedeSegment_Head::DamageFunction(float Damage)
{
	Health_Current -= Damage;
	UpdateMultiplier();
	if(Player)
	{
		Player->MeterDecrementPauseTime = FlashTime_Max;
	}
	if (Health_Current <= 0.0f)
	{
		Back->Death();
		int i;
		float j = 1;
		for(i = (MiddleSegments.Num() - 1); i >= 0; i--)
		{
			FTimerHandle DeathTimer;

			GetWorldTimerManager().SetTimer(DeathTimer, MiddleSegments[i], &AStampipedeSegment_Body::Death, 0.25 * j, false);
			j += 1.0f;
		}
		FTimerHandle DeathTimer;
		GetWorldTimerManager().SetTimer(DeathTimer, this, &AStampipedeSegment_Head::Death, 0.25 * j, false);
	}
	if(bHeadHit)
	{
		BaseMesh->SetVisibility(false);
		EyeMeshL->SetVisibility(false);
		EyeMeshR->SetVisibility(false);
		AntennaeMesh->SetVisibility(false);
		MandibleMeshL->SetVisibility(false);
		MandibleMeshR->SetVisibility(false);
		FlashTime_Current = FlashTime_Max;
		bShouldFlash = true;
		bHeadHit = false;
	}
}

void AStampipedeSegment_Head::Death()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow,
		FString::Printf(TEXT("A WINNER IS YOU!!! KEEP GOING!!")));
	
	Super::Death();
}

void AStampipedeSegment_Head::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
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
					bHeadHit = true;
					DamageFunction(MyShot->Damage);
				}
			}
		}
	}
}

void AStampipedeSegment_Head::OnOverlapStart_Body(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
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
					DamageFunction(MyShot->Damage * 0.5f);
				}
			}
		}
	}
}

void AStampipedeSegment_Head::OnOverlapStart_Back(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
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
					DamageFunction(MyShot->Damage * 2.0f);
				}
			}
		}
	}
}

void AStampipedeSegment_Head::LaserActivate()
{
	if(!(GetWorldTimerManager().TimerExists(LaserShootTimer)))
	{
		LaserShoot();
		GetWorldTimerManager().SetTimer(LaserShootTimer, this, &AStampipedeSegment_Head::LaserShoot, 0.041667f, true);
	}
	if(!(GetWorldTimerManager().TimerExists(LaserCancelTimer)))
	{
		GetWorldTimerManager().SetTimer(LaserCancelTimer, this, &AStampipedeSegment_Head::LaserCancel, 1.0f, false);
	}
}

void AStampipedeSegment_Head::LaserShoot()
{
	if(LaserBP)
	{
		if(Player)
		{
			const FRotator ShotRotation = UKismetMathLibrary::FindLookAtRotation(LaserOrigin->GetComponentLocation(), Player->GetActorLocation());
			const FVector ShotLocation = LaserOrigin->GetComponentLocation();
		
			const FActorSpawnParameters SpawnParams;

			AEnemyProjectile_StampipedeLsr* Lsr = (GetWorld()->SpawnActor<AEnemyProjectile_StampipedeLsr>(LaserBP, ShotLocation, ShotRotation, SpawnParams));
		}
	}
}

void AStampipedeSegment_Head::LaserCancel()
{
	if(GetWorldTimerManager().TimerExists(LaserShootTimer))
	{
		GetWorldTimerManager().ClearTimer(LaserShootTimer);
		LaserShootTimer.Invalidate();
		bCanWalk = true;
		if(Back)
		{
			Back->bCanShoot = true;
		}
	}
	if(!(GetWorldTimerManager().TimerExists(AttackDelayTimer)))
	{
		GetWorldTimerManager().SetTimer(AttackDelayTimer, this, &AStampipedeSegment_Head::AttackDelay, 1.0f, false);
	}
}

void AStampipedeSegment_Head::AttackDelay()
{
	for(int i = 0; i < MiddleSegments.Num(); i++)
	{
		if(MiddleSegments[i])
		{
			MiddleSegments[i]->bCanStomp = false;
		}
	}
	if(Back)
	{
		Back->bCanStomp = false;
	}
}
