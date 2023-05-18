// Fill out your copyright notice in the Description page of Project Settings.


#include "StampipedeSegment_Body.h"

#include "EnemyProjectile_Shockwave.h"
#include "PlayerChar.h"
#include "Components/BoxComponent.h"

AStampipedeSegment_Body::AStampipedeSegment_Body()
{
	SetRootComponent(EnemyCollider);
	
	LegMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LegMeshL"));
	LegMeshL->SetupAttachment(BaseMesh);
	LegMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LegMeshR"));
	LegMeshR->SetupAttachment(BaseMesh);

	ShockwaveOriginL = CreateDefaultSubobject<USceneComponent>(TEXT("ShockwaveOriginL"));
	ShockwaveOriginL->SetupAttachment(LegMeshL);
	ShockwaveOriginR = CreateDefaultSubobject<USceneComponent>(TEXT("ShockwaveOriginR"));
	ShockwaveOriginR->SetupAttachment(LegMeshR);

	bCanStomp = true;

	Handle_StompL;
	Handle_StompR;
	Handle_StompDelay;
}

void AStampipedeSegment_Body::BeginPlay()
{
	Super::BeginPlay();

	LDefaultRot = LegMeshL->GetRelativeRotation();
	RDefaultRot = LegMeshR->GetRelativeRotation();
	//EnemyCollider->OnComponentBeginOverlap.RemoveDynamic(this, &ABaseEnemy::OnOverlapStart);
}

void AStampipedeSegment_Body::StartInvulnPeriod()
{
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	BaseMesh->SetVisibility(false);
	LegMeshL->SetVisibility(false);
	LegMeshR->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AStampipedeSegment_Body::InvulnPeriod(float DeltaTime)
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
			if (!LegMeshL->IsVisible())
			{
				LegMeshL->SetVisibility(true);
			}
			if (!LegMeshR->IsVisible())
			{
				LegMeshR->SetVisibility(true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AStampipedeSegment_Body::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				BaseMesh->SetVisibility(!BaseMesh->IsVisible());
				LegMeshL->SetVisibility(!LegMeshL->IsVisible());
				LegMeshR->SetVisibility(!LegMeshR->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AStampipedeSegment_Body::MainBehaviour(float DeltaTime)
{
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
					if(!(GetWorldTimerManager().TimerExists(Handle_StompR)))
					{
						GetWorldTimerManager().SetTimer(Handle_StompL, this, &AStampipedeSegment_Body::StompL, 0.5f, false);
					}
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
					if(!(GetWorldTimerManager().TimerExists(Handle_StompL)))
					{
						GetWorldTimerManager().SetTimer(Handle_StompR, this, &AStampipedeSegment_Body::StompR, 0.5f, false);
					}
				}
			}
		}
	}
}

void AStampipedeSegment_Body::DamageFunction(float Damage)
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
	BaseMesh->SetVisibility(false);
	LegMeshL->SetVisibility(false);
	LegMeshR->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AStampipedeSegment_Body::StompL()
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
		GetWorldTimerManager().SetTimer(Handle_StompDelay, this, &AStampipedeSegment_Body::AttackDelay, 1.0f, false);
	}
}

void AStampipedeSegment_Body::StompR()
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
		GetWorldTimerManager().SetTimer(Handle_StompDelay, this, &AStampipedeSegment_Body::AttackDelay, 1.0f, false);
	}
}

void AStampipedeSegment_Body::AttackDelay()
{
	
}
