// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_BeastCore.h"

#include "EnemyProjectile_BeastCore.h"
#include "PlayerChar.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AEnemy_BeastCore::AEnemy_BeastCore()
{
	SetRootComponent(EnemyCollider);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	
	//ShotTransforms_Normal.Empty();
	for (int i = 0; i < 9; i++)
	{
		ShotTransforms_Normal.Add(CreateDefaultSubobject<USceneComponent>(*FString("NormalShotTransform" + FString::FromInt(i+1))));
		if(ShotTransforms_Normal[i])
		{
			ShotTransforms_Normal[i]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform,
				*FString("ST_N" + FString::FromInt(i+1)));
		}
	}
	//ShotTransforms_Explosion.Empty();
	for (int i = 0; i < 98; i++)
	{
		ShotTransforms_Explosion.Add(CreateDefaultSubobject<USceneComponent>(*FString("ExplosionShotTransform" + FString::FromInt(i+1))));
		if(ShotTransforms_Explosion[i])
		{
			ShotTransforms_Explosion[i]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform,
				*FString("ST_E" + FString::FromInt(i+1)));
		}
	}
	
	Health_Max = 5.0f;

	MovementSpeed = 125.0f;

	MaxProjTravelDistance_Normal = 500.0f;

	ShotTag = *FString(this->GetName() + "Shot");

	bCanShoot = false;
	
	Rotator = FRotator(0.0f, 0.0f, 0.0f);
	Direction = FVector(0.0f, 0.0f, 0.0f);

	ExplosionTimerHandle;
	ExplosionDelayTime = 1.0f;
}

void AEnemy_BeastCore::BeginPlay()
{
	Super::BeginPlay();

	
}

void AEnemy_BeastCore::StartInvulnPeriod()
{
	Super::StartInvulnPeriod();

	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	bCanShoot = false;
	Mesh->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_BeastCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ShotCleanup();
}

void AEnemy_BeastCore::InvulnPeriod(float DeltaTime)
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
			if (!Mesh->IsVisible())
			{
				Mesh->SetVisibility(true);
			}
			Shoot();
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AEnemy_BeastCore::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				Mesh->SetVisibility(!Mesh->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AEnemy_BeastCore::MainBehaviour(float DeltaTime)
{
	/* Movement */
	if(Player)
	{
		SetActorRotation(FRotator(
			UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Pitch,
			UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Yaw,
			GetActorRotation().Roll
		));	
	}

	Rotator = FRotator(GetActorRotation().Pitch, GetActorRotation().Yaw, 0.0f);
	Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);

	SetActorLocation(GetActorLocation() + (Direction * DeltaTime * MovementSpeed));
	/* Movement */

	Shoot();
}

void AEnemy_BeastCore::DamageFunction(float Damage)
{
	UpdateMultiplier();
	if (Health_Current <= 0.0f)
	{
		GetWorldTimerManager().ClearTimer(ExplosionTimerHandle);
    	ExplosionTimerHandle.Invalidate();
		Death();
	}
	Health_Current -= Damage;
	if(Player)
	{
		Player->MeterDecrementPauseTime = FlashTime_Max;
	}
	if (Health_Current <= 0.0f)
	{
		Mesh->SetMaterial(0, WarningMat);
		GetWorldTimerManager().SetTimer(ExplosionTimerHandle, this, &AEnemy_BeastCore::Death, ExplosionDelayTime, false);
	}
	Mesh->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_BeastCore::Death()
{
	if (ShotBP)
	{
		for(int i = 0; i < ShotTransforms_Explosion.Num(); i++)
		{
			if(ShotTransforms_Explosion[i])
			{
				const FRotator ShotRotation = ShotTransforms_Explosion[i]->GetComponentRotation();
				const FVector ShotLocation = ShotTransforms_Explosion[i]->GetComponentLocation();
			
				const FActorSpawnParameters SpawnParams;

				AEnemyProjectile_BeastCore* ShotProjectile = (GetWorld()->SpawnActor<AEnemyProjectile_BeastCore>(ShotBP, ShotLocation, ShotRotation, SpawnParams));
			}
		}
	}
	
	Super::Death();
}

void AEnemy_BeastCore::Shoot()
{
	if (bCanShoot)
	{
		if (ShotBP)
		{
			for(int i = 0; i < ShotTransforms_Normal.Num(); i++)
			{
				if(ShotTransforms_Normal[i])
				{
					const FRotator ShotRotation = ShotTransforms_Normal[i]->GetComponentRotation();
					const FVector ShotLocation = ShotTransforms_Normal[i]->GetComponentLocation();
			
					const FActorSpawnParameters SpawnParams;

					AEnemyProjectile_BeastCore* ShotProjectile = (GetWorld()->SpawnActor<AEnemyProjectile_BeastCore>(ShotBP, ShotLocation, ShotRotation, SpawnParams));
					ShotProjectile->Tags.Add(ShotTag);
					
					bCanShoot = false;
				}
			}
		}
	}
}

void AEnemy_BeastCore::ShotCleanup()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ShotBP, FoundShots);
	
	for(const auto& Shot : FoundShots)
	{
		if(Shot->ActorHasTag(ShotTag))
		{
			if(FVector::Dist(GetActorLocation(), Shot->GetActorLocation()) > MaxProjTravelDistance_Normal)
			{
				Shot->Destroy();
			}
		}
	}
	
	if(FoundShots.Num() <= 0)
	{
		if((InvulnTime_Current <= 0.0f) && (Health_Current > 0.0f) && (!bCanShoot))
		{
			bCanShoot = true;
		}
	}
}
