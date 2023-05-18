// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile_StampipedeOrb.h"

#include "EnemyProjectile_BeastCore.h"
#include "PlayerChar.h"
#include "GameFramework/ProjectileMovementComponent.h"

AEnemyProjectile_StampipedeOrb::AEnemyProjectile_StampipedeOrb()
{
	ShotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotMesh"));
	ShotMesh->SetupAttachment(RootComponent);
	ShotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ShotMovement->ProjectileGravityScale = 1.0f;
}

void AEnemyProjectile_StampipedeOrb::BeginPlay()
{
	Super::BeginPlay();

	ShotMesh->OnComponentBeginOverlap.AddDynamic(this, &AEnemyProjectile_StampipedeOrb::OnOverlapStart);
}

void AEnemyProjectile_StampipedeOrb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();
}

void AEnemyProjectile_StampipedeOrb::EnableCollision()
{
	if (ShotMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		ShotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void AEnemyProjectile_StampipedeOrb::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APlayerChar* MyPlayer = Cast<APlayerChar>(OtherActor);
		if(MyPlayer)
		{
			if(!MyPlayer->bPositioningSweep)
			{
				MyPlayer->PlayerDeath();
				Destroy();
			}
		}
		else
		{
			if(OtherComp)
			{
				if(OtherComp->GetCollisionObjectType() == ECC_GameTraceChannel11)
				{
					Destroy();
				}
			}
		}
	}
	if(OtherComp)
	{
		if(OtherComp->GetCollisionObjectType() == ECC_GameTraceChannel11)
		{
			Destroy();
		}
	}
}
