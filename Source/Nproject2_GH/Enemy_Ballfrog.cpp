// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Ballfrog.h"

#include "MyGameInstance.h"
#include "PlayerChar.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

AEnemy_Ballfrog::AEnemy_Ballfrog()
{
	EnemySphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("EnemySphereCollider"));
	SetRootComponent(EnemySphereCollider);
	
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(RootComponent);

	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));

	Movement->InitialSpeed = 1000.0f;
	Movement->bRotationFollowsVelocity = true;
	Movement->bInitialVelocityInLocalSpace = false;
	Movement->bShouldBounce = true;
	Movement->Bounciness = 1.0f;
	Movement->Friction = 0.0f;
	Movement->BounceVelocityStopSimulatingThreshold = 0.0f;

	BounceVelocity = 500.0f;
	GravityScales = {3.0f, 3.0f, 3.0f, 1.0f};
	CurrentGravity = 1.0f;

	YawRotator = FRotator(0.0f, 0.0f, 0.0f);
	Direction = FVector(0.0f, 0.0f, 0.0f);
}

void AEnemy_Ballfrog::BeginPlay()
{
	Super::BeginPlay();

	EnemyCollider->OnComponentBeginOverlap.RemoveDynamic(this, &ABaseEnemy::OnOverlapStart);
	EnemyCollider->DestroyComponent();
	
	// if(GetGameInstance())
	// {
	// 	CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	// }

	EnemySphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnOverlapStart);
	Movement->OnProjectileBounce.AddDynamic(this, &AEnemy_Ballfrog::OnBounce);

	FacePlayer();
}

void AEnemy_Ballfrog::StartInvulnPeriod()
{
	EnemySphereCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	EnemyMesh->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_Ballfrog::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FallDeath();
}

void AEnemy_Ballfrog::EnableCollision()
{
	if (EnemySphereCollider->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		EnemySphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void AEnemy_Ballfrog::InvulnPeriod(float DeltaTime)
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
		if(EnemySphereCollider->GetCollisionObjectType() != ECC_GameTraceChannel7)
		{
			EnemySphereCollider->SetCollisionObjectType(ECC_GameTraceChannel7);
		}
		if(bStopFlashing)
		{
			if (!EnemyMesh->IsVisible())
			{
				EnemyMesh->SetVisibility(true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AEnemy_Ballfrog::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				EnemyMesh->SetVisibility(!EnemyMesh->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AEnemy_Ballfrog::MainBehaviour(float DeltaTime)
{
	FHitResult GroundCheckHit;
	
	const FVector OriginalPos = GetActorLocation();

	SetActorLocation(GetActorLocation() + (EnemySphereCollider->GetScaledSphereRadius() * Direction));
	
	bool GroundCheck = GetWorld()->LineTraceSingleByChannel(GroundCheckHit, GetActorLocation(),
	GetActorLocation() + FVector(0.0f, 0.0f, -((EnemySphereCollider->GetScaledSphereRadius() / 2) * (BounceVelocity / CurrentGravity))),
		ECC_GameTraceChannel10, FCollisionQueryParams::DefaultQueryParam, FCollisionResponseParams::DefaultResponseParam);
	// DrawDebugLine(GetWorld(), GetActorLocation(),
	// 	GetActorLocation() + FVector(0.0f, 0.0f, -((EnemySphereCollider->GetScaledSphereRadius() / 2) * (BounceVelocity / CurrentGravity))),
	// 			FColor::Yellow, false, 1.0f, 0, 5.0f);
	
	if(!GroundCheck)
	{
		Movement->Velocity = FVector(
		-(Movement->Velocity.X),
		-(Movement->Velocity.X),
		Movement->Velocity.Z);
	}
		
	SetActorLocation(OriginalPos);
}

void AEnemy_Ballfrog::DamageFunction(float Damage)
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
	EnemyMesh->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_Ballfrog::FallDeath()
{
	if(GetActorLocation().Z > 5000.0f || GetActorLocation().Z < -5000.0f)
	{
		if(CurrentGameInstance)
		{
			CurrentGameInstance->EnemyNum = FMath::Clamp(CurrentGameInstance->EnemyNum - 1, 0, INFINITY);
			GetWorldTimerManager().SetTimer(CurrentGameInstance->Handle_NextLevelTimer, CurrentGameInstance, &UMyGameInstance::StartNextLevelTimer, 5.0f, false);
		}
		Destroy();
	}
}

void AEnemy_Ballfrog::FacePlayer()
{
	if(Player)
	{
		SetActorRotation(FRotator(
			GetActorRotation().Pitch,
			UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Yaw,
			GetActorRotation().Roll
			));

		YawRotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
		Direction = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::X);

		Movement->Velocity = FVector(
			FVector(CurrentGravity * Movement->InitialSpeed * Direction).X,
			FVector(CurrentGravity * Movement->InitialSpeed * Direction).Y,
			BounceVelocity);
		
	}
}

void AEnemy_Ballfrog::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	CurrentGravity = GravityScales[FMath::RandRange(0, (GravityScales.Num() - 1))];
	
	FacePlayer();

	Movement->ProjectileGravityScale = CurrentGravity;
}
