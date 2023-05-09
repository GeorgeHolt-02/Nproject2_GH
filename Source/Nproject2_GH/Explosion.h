// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Explosion.generated.h"

UCLASS()
class NPROJECT2_GH_API AExplosion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosion();

	//Collision radius
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class USphereComponent* SphereCollider;

	//Destroy timer handle
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle Handle_Destroy;
	//Time before deletion/destruction
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float DestroyDelay;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called on the beginning of an overlap
	UFUNCTION()
	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
	
	UFUNCTION()
	void DestroyExplosion();

	// Enables collision on the first frame
	void EnableCollision();
};
