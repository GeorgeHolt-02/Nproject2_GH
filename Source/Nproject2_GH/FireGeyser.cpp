// Fill out your copyright notice in the Description page of Project Settings.


#include "FireGeyser.h"

#include "EnemyProjectile_Fireball.h"

// Sets default values
AFireGeyser::AFireGeyser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	FireballOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("FireballOrigin"));
	FireballOrigin->SetupAttachment(RootComponent);

	Handle_Toggle;
	ToggleDelay = 3.0f;

	Handle_FireRate;
	FireRate = 0.075f;

	WarningThreshold = 1.0f;
}

// Called when the game starts or when spawned
void AFireGeyser::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(Handle_Toggle, this, &AFireGeyser::FlameToggle, ToggleDelay, true);
}

void AFireGeyser::FlameToggle()
{
	if(!(GetWorldTimerManager().TimerExists(Handle_FireRate)))
	{
		Shoot();
		GetWorldTimerManager().SetTimer(Handle_FireRate, this, &AFireGeyser::Shoot, FireRate, true);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(Handle_FireRate);
		Handle_FireRate.Invalidate();
	}
}

// Called every frame
void AFireGeyser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Warning();
}

void AFireGeyser::Shoot()
{
	if (FireballBP)
	{
		const FRotator ShotRotation = FireballOrigin->GetComponentRotation();
		const FVector ShotLocation = FireballOrigin->GetComponentLocation();
			
		const FActorSpawnParameters SpawnParams;

		AEnemyProjectile_Fireball* MyFireball = (GetWorld()->SpawnActor<AEnemyProjectile_Fireball>(FireballBP, ShotLocation, ShotRotation, SpawnParams));
	}
}

void AFireGeyser::Warning()
{
	if(GetWorldTimerManager().TimerExists(Handle_Toggle))
	{
		if((GetWorldTimerManager().GetTimerRemaining(Handle_Toggle) <= WarningThreshold) && !(GetWorldTimerManager().TimerExists(Handle_FireRate)))
		{
			if(WarningMat)
			{
				Mesh->SetMaterial(0, WarningMat);
			}
		}
		else
		{
			if(DefaultMat)
			{
				Mesh->SetMaterial(0, DefaultMat);
			}
			
		}
	}
	else
	{
		if(DefaultMat)
		{
			Mesh->SetMaterial(0, DefaultMat);
		}
	}
}

