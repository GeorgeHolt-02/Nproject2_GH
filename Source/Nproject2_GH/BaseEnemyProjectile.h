// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemyProjectile.generated.h"

UCLASS()
class NPROJECT2_GH_API ABaseEnemyProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemyProjectile();

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	class UProjectileMovementComponent* ShotMovement;

	// /** Game instance reference */
	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	// class UMyGameInstance* CurrentGameInstance;

	/** Destroy timer handle */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle DestroyHandle;

	/** Delay time before shot is destroyed */
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

	// Timer that destroys this shot in case instigator is not present
	UFUNCTION()
	void DestroyTimer();
};
