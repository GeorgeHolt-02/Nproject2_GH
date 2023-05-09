// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_CrashBat.h"

#include "PlayerChar.h"
#include "Components/BoxComponent.h"

AEnemy_CrashBat::AEnemy_CrashBat()
{
	SetRootComponent(EnemyCollider);
	
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->SetupAttachment(RootComponent);
	WingMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingMeshL"));
	WingMeshL->SetupAttachment(RootComponent);
	WingMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingMeshR"));
	WingMeshR->SetupAttachment(RootComponent);

	FlapForce = 500.0f;
	Gravity = 43.75f;
	FallSpeed = 0.0f;
	FlapThreshold = 0.0f;
	bDiveModeActive = false;
}

void AEnemy_CrashBat::BeginPlay()
{
	Super::BeginPlay();
	
	FlapThreshold = GetActorLocation().Z;
}

void AEnemy_CrashBat::StartInvulnPeriod()
{
	Super::StartInvulnPeriod();
	
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	BaseMesh->SetVisibility(false);
	WingMeshL->SetVisibility(false);
	WingMeshR->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_CrashBat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}

void AEnemy_CrashBat::InvulnPeriod(float DeltaTime)
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
			if (!WingMeshL->IsVisible())
			{
				WingMeshL->SetVisibility(true);
			}
			if (!WingMeshR->IsVisible())
			{
				WingMeshR->SetVisibility(true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AEnemy_CrashBat::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				BaseMesh->SetVisibility(!BaseMesh->IsVisible());
				WingMeshL->SetVisibility(!WingMeshL->IsVisible());
				WingMeshR->SetVisibility(!WingMeshR->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AEnemy_CrashBat::MainBehaviour(float DeltaTime)
{
	
}

void AEnemy_CrashBat::DamageFunction(float Damage)
{
	Health_Current -= Damage;
	UpdateMultiplier();
	if(Player)
	{
		Player->MeterDecrementPauseTime = FlashTime_Max;
	}
	if (Health_Current <= 0.0f)
	{
		Death();
	}
	BaseMesh->SetVisibility(false);
	WingMeshL->SetVisibility(false);
	WingMeshR->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

// void AEnemy_CrashBat::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
// 	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
// {
// 	Super::OnOverlapStart(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
// 	
// }

