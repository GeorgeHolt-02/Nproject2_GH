// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile_Fireball.h"

AEnemyProjectile_Fireball::AEnemyProjectile_Fireball()
{
	ShotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotMesh"));
	SetRootComponent(ShotMesh);
	ShotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AEnemyProjectile_Fireball::BeginPlay()
{
	Super::BeginPlay();

	// if(GetGameInstance())
	// {
	// 	CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	// }
	
	ShotMesh->OnComponentBeginOverlap.AddDynamic(this, &AEnemyProjectile_Fireball::OnOverlapStart);
}

void AEnemyProjectile_Fireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();
}

void AEnemyProjectile_Fireball::EnableCollision()
{
	if (ShotMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		ShotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
