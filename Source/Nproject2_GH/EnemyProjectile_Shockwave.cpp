// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile_Shockwave.h"

#include "GameFramework/ProjectileMovementComponent.h"

AEnemyProjectile_Shockwave::AEnemyProjectile_Shockwave()
{
	RingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RingMesh"));
	SetRootComponent(RingMesh);
	RingMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ShotMovement->DestroyComponent();

	RadiusGrowthSpeed = 50.0f;
}

void AEnemyProjectile_Shockwave::BeginPlay()
{
	Super::BeginPlay();

	RingMesh->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemyProjectile::OnOverlapStart);
}

void AEnemyProjectile_Shockwave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();

	ShockwaveSpread(DeltaTime);
}

void AEnemyProjectile_Shockwave::ShockwaveSpread(float DeltaTime)
{
	RingMesh->SetWorldScale3D(RingMesh->GetComponentScale() + (
		FVector(1.0f, 1.0f, 0.0f) *
		RadiusGrowthSpeed *
		DeltaTime
		));
}

void AEnemyProjectile_Shockwave::EnableCollision()
{
	if (RingMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		RingMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
