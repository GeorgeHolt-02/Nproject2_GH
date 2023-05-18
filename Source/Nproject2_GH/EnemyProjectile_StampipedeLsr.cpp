// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile_StampipedeLsr.h"

#include "PlayerChar.h"

AEnemyProjectile_StampipedeLsr::AEnemyProjectile_StampipedeLsr()
{
	ShotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotMesh"));
	ShotMesh->SetupAttachment(RootComponent);
	ShotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AEnemyProjectile_StampipedeLsr::BeginPlay()
{
	Super::BeginPlay();

	ShotMesh->OnComponentBeginOverlap.AddDynamic(this, &AEnemyProjectile_StampipedeLsr::OnOverlapStart);
}

void AEnemyProjectile_StampipedeLsr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();
}

void AEnemyProjectile_StampipedeLsr::EnableCollision()
{
	if (ShotMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		ShotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void AEnemyProjectile_StampipedeLsr::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
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
