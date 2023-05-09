// Fill out your copyright notice in the Description page of Project Settings.


#include "Explosion.h"

#include "PlayerChar.h"
#include "Components/SphereComponent.h"

// Sets default values
AExplosion::AExplosion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SetRootComponent(SphereCollider);
	SphereCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Handle_Destroy;
	DestroyDelay = 0.75f;
}

// Called when the game starts or when spawned
void AExplosion::BeginPlay()
{
	Super::BeginPlay();

	SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &AExplosion::OnOverlapStart);
	
	GetWorldTimerManager().SetTimer(Handle_Destroy, this, &AExplosion::DestroyExplosion, DestroyDelay, false);
}

// Called every frame
void AExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();
}

void AExplosion::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
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
}

void AExplosion::DestroyExplosion()
{
	Destroy();
}

void AExplosion::EnableCollision()
{
	if (SphereCollider->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		SphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

