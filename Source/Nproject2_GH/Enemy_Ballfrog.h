// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_Ballfrog.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_Ballfrog : public ABaseEnemy
{
	GENERATED_BODY()

public:
	//Class defaults
	AEnemy_Ballfrog();

	/** Visual mesh */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* EnemyMesh;

	/** Sphere collision */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class USphereComponent* EnemySphereCollider;

	/** Movement component, allows us to quickly get the movement patterns we need */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UProjectileMovementComponent* Movement;

	/** Velocity that every bounce occurs at */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float BounceVelocity;
	
	/** Array of floats used for gravity RNG */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<float> GravityScales;
	/** The currently-selected float from the above array */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float CurrentGravity;
	
	/** The enemy's current yaw rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator YawRotator;
	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void StartInvulnPeriod() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EnableCollision() override;
	virtual void InvulnPeriod(float DeltaTime) override;
	virtual void VisibilityFlashing(float DeltaTime) override;
	virtual void MainBehaviour(float DeltaTime) override;
	virtual void DamageFunction(float Damage) override;

	// Destroys upon falling into the abyss
	void FallDeath();

	//Updates velocity to face the player
	void FacePlayer();

	//Called on bounce
	UFUNCTION()
	virtual void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
};
