// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile_BeastCore.h"

AEnemyProjectile_BeastCore::AEnemyProjectile_BeastCore()
{
	ShotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotMesh"));
	SetRootComponent(ShotMesh);
	ShotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AEnemyProjectile_BeastCore::BeginPlay()
{
	Super::BeginPlay();

	// if(GetGameInstance())
	// {
	// 	CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	// }
	
	ShotMesh->OnComponentBeginOverlap.AddDynamic(this, &AEnemyProjectile_BeastCore::OnOverlapStart);
}

void AEnemyProjectile_BeastCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();
}

void AEnemyProjectile_BeastCore::EnableCollision()
{
	if (ShotMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		ShotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
