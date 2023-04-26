// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_ShieldShocker.h"

#include "EnemyProjectile_Shockwave.h"
#include "PlayerChar.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

AEnemy_ShieldShocker::AEnemy_ShieldShocker()
{
	SetRootComponent(EnemyCollider);

	ShieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
	ShieldMesh->SetupAttachment(RootComponent);
	CoreMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoreMesh"));
	CoreMesh->SetupAttachment(RootComponent);

	ClosedTransform = CreateDefaultSubobject<USceneComponent>(TEXT("ClosedTransform"));
	ClosedTransform->SetupAttachment(RootComponent);
	OpenTransform = CreateDefaultSubobject<USceneComponent>(TEXT("OpenTransform"));
	OpenTransform->SetupAttachment(RootComponent);

	ShockwaveTransform = CreateDefaultSubobject<USceneComponent>(TEXT("ShockwaveTransform"));
	ShockwaveTransform->SetupAttachment(RootComponent);

	MaxShockRadius = 50.0f;
	ShockTag = *FString(this->GetName() + "Shock");
	bCanShoot = false;

	AggroRadius = 375.0f;

	ShieldTransitionDuration = 0.25f;
	ShieldTransitionAlpha = 0.0f;

	TimerHandle_Shoot;
	ShootDelay = 0.5f;
	TimerHandle_Close;
	CloseDelay = 0.75f;

	bOpen = false;
}

void AEnemy_ShieldShocker::BeginPlay()
{
	Super::BeginPlay();

	
}

void AEnemy_ShieldShocker::StartInvulnPeriod()
{
	Super::StartInvulnPeriod();

	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	bCanShoot = false;
	ShieldMesh->SetVisibility(false);
	CoreMesh->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_ShieldShocker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void AEnemy_ShieldShocker::InvulnPeriod(float DeltaTime)
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
			if (!ShieldMesh->IsVisible())
			{
				ShieldMesh->SetVisibility(true);
			}
			if (!CoreMesh->IsVisible())
			{
				CoreMesh->SetVisibility(true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AEnemy_ShieldShocker::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				ShieldMesh->SetVisibility(!ShieldMesh->IsVisible());
				CoreMesh->SetVisibility(!CoreMesh->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AEnemy_ShieldShocker::MainBehaviour(float DeltaTime)
{
	// if((InvulnTime_Current <= 0.0f) && (bCanShoot) && (FVector::Dist(GetActorLocation(), Player->GetActorLocation()) <= AggroRadius))
	// {
	// 	
	// }
}

void AEnemy_ShieldShocker::DamageFunction(float Damage)
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
	ShieldMesh->SetVisibility(false);
	CoreMesh->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_ShieldShocker::Shoot()
{
	const FRotator ShotRotation = ShockwaveTransform->GetComponentRotation();
	const FVector ShotLocation = ShockwaveTransform->GetComponentLocation();

	if (bCanShoot)
	{
		if (ShockBP)
		{
			const FActorSpawnParameters SpawnParams;

			AEnemyProjectile_Shockwave* Shockwave = (GetWorld()->SpawnActor<AEnemyProjectile_Shockwave>(ShockBP, ShotLocation, ShotRotation, SpawnParams));
			Shockwave->Tags.Add(ShockTag);
		}
	}
}

void AEnemy_ShieldShocker::ShotCleanup()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ShockBP, FoundShots);

	for(const auto& Shock : FoundShots)
	{
		if(Shock->ActorHasTag(ShockTag))
		{
			if(Shock->GetActorScale3D().X > MaxShockRadius)
			{
				Shock->Destroy();
			}
		}
	}
}
