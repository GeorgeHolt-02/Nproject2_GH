// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_CrashBat.h"

#include "Explosion.h"
#include "MyGameInstance.h"
#include "PlayerChar.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

AEnemy_CrashBat::AEnemy_CrashBat()
{
	SetRootComponent(EnemyCollider);
	
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->SetupAttachment(RootComponent);
	WingMeshL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingMeshL"));
	WingMeshL->SetupAttachment(BaseMesh);
	WingMeshR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WingMeshR"));
	WingMeshR->SetupAttachment(BaseMesh);

	H_Speed = 500.0f;
	CrashSpeed = 1000.0f;
	FlapForce = 500.0f;
	Gravity = 43.75f;
	FallSpeed = 0.0f;
	FlapThreshold = 0.0f;
	AggroRadius = 500.0f;
	bDefaultBehaviourOn = true;
	bCrashing = false;
	DestroyBoundValue = 5000.0f;

	Handle_Crash;
	CrashDelay = 0.75f;

	YawRotator = FRotator(0.0f, 0.0f, 0.0f);
	Direction = FVector(0.0f, 0.0f, 0.0f);

	bPositioningSweep = false;
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
	if(!(bCrashing))
	{
		NormalMovement(DeltaTime);
	}
	else
	{
		CrashMovement(DeltaTime);
	}

	OutOfBounds();
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

void AEnemy_CrashBat::NormalMovement(float DeltaTime)
{
	bPositioningSweep = true;
	
	FallSpeed -= (FMath::Square(Gravity) * DeltaTime);
	SetActorLocation(GetActorLocation() + FVector(
	0.0f,
	0.0f,
	(FallSpeed * DeltaTime)
		));

	if(bDefaultBehaviourOn)
	{
		if(GetActorLocation().Z < FlapThreshold)
		{
			FallSpeed = FlapForce;
		}

		if(Player)
		{
			SetActorRotation(FRotator(
				GetActorRotation().Pitch,
				UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Yaw,
				GetActorRotation().Roll
			));

			YawRotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
			Direction = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::X);
	
			SetActorLocation(GetActorLocation() + (Direction * H_Speed * DeltaTime), true);

			if(InvulnTime_Current <= 0.0f)
			{
				if(FVector::Dist(GetActorLocation(), Player->GetActorLocation()) < AggroRadius)
				{
					bDefaultBehaviourOn = false;
					GetWorldTimerManager().SetTimer(Handle_Crash, this, &AEnemy_CrashBat::CrashToggle, CrashDelay, false);
				}
			}
		}
	}
	else
	{
		if(GetActorLocation().Z < FlapThreshold)
		{
			SetActorLocation(FVector(
				GetActorLocation().X,
				GetActorLocation().Y,
				FlapThreshold));
		}
		
		if(Player)
		{
			SetActorRotation(FRotator(
				UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Pitch,
				UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Yaw,
				GetActorRotation().Roll
			));

			YawRotator = FRotator(GetActorRotation().Pitch, GetActorRotation().Yaw, 0.0f);
			Direction = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::X);
		}
	}

	bPositioningSweep = false;
}

void AEnemy_CrashBat::CrashMovement(float DeltaTime)
{
	SetActorLocation(GetActorLocation() + (CrashSpeed * Direction * DeltaTime));
}

void AEnemy_CrashBat::OutOfBounds()
{
	if((FMath::Abs(GetActorLocation().X) > FMath::Abs(DestroyBoundValue)) ||
	   (FMath::Abs(GetActorLocation().Y) > FMath::Abs(DestroyBoundValue)) ||
	   (FMath::Abs(GetActorLocation().Z) > FMath::Abs(DestroyBoundValue))
	   )
	{
		if(CurrentGameInstance)
		{
			CurrentGameInstance->EnemyNum = FMath::Clamp(CurrentGameInstance->EnemyNum - 1, 0, INFINITY);
			GetWorldTimerManager().SetTimer(CurrentGameInstance->Handle_NextLevelTimer, CurrentGameInstance, &UMyGameInstance::StartNextLevelTimer, 5.0f, false);
		}
		Destroy();
	}
}

void AEnemy_CrashBat::CrashToggle()
{
	bCrashing = true;
}

void AEnemy_CrashBat::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APlayerChar* MyPlayer = Cast<APlayerChar>(OtherActor);
		if(MyPlayer)
		{
			if(bKillOnContact)
			{
				if((!MyPlayer->bPositioningSweep) && (!bPositioningSweep))
				{
					MyPlayer->PlayerDeath();
					
					if(bCrashing)
					{
						const FRotator ShotRotation = GetActorRotation();
						const FVector ShotLocation = GetActorLocation();
						
						if (ExplosionBP)
						{
							const FActorSpawnParameters SpawnParams;

							AExplosion* ShotProjectile = (GetWorld()->SpawnActor<AExplosion>(ExplosionBP, ShotLocation, ShotRotation, SpawnParams));
						}
						
						if(CurrentGameInstance)
						{
							CurrentGameInstance->EnemyNum = FMath::Clamp(CurrentGameInstance->EnemyNum - 1, 0, INFINITY);
							GetWorldTimerManager().SetTimer(CurrentGameInstance->Handle_NextLevelTimer, CurrentGameInstance, &UMyGameInstance::StartNextLevelTimer, 5.0f, false);
						}
						Destroy();
					}
				}
			}
		}
		else
		{
			APlayerShot* MyShot = Cast<APlayerShot>(OtherActor);
			if(MyShot)
			{
				DamageFunction(MyShot->Damage);
			}
		}
	}
	if(OtherComp)
	{
		if(OtherComp->GetCollisionObjectType() == ECC_GameTraceChannel11)
		{
			if(bCrashing)
			{
				const FRotator ShotRotation = GetActorRotation();
				const FVector ShotLocation = GetActorLocation();
						
				if (ExplosionBP)
				{
					const FActorSpawnParameters SpawnParams;

					AExplosion* ShotProjectile = (GetWorld()->SpawnActor<AExplosion>(ExplosionBP, ShotLocation, ShotRotation, SpawnParams));
				}
						
				if(CurrentGameInstance)
				{
					CurrentGameInstance->EnemyNum = FMath::Clamp(CurrentGameInstance->EnemyNum - 1, 0, INFINITY);
					GetWorldTimerManager().SetTimer(CurrentGameInstance->Handle_NextLevelTimer, CurrentGameInstance, &UMyGameInstance::StartNextLevelTimer, 5.0f, false);
				}
				Destroy();
			}
		}
	}
}

