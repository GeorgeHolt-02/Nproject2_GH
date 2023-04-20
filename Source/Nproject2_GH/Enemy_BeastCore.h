// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_BeastCore.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_BeastCore : public ABaseEnemy
{
	GENERATED_BODY()

public:
	//Set default values
	AEnemy_BeastCore();

	//** Mesh */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

	//** Normal shot transform array */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<USceneComponent*> ShotTransforms_Normal;
	//** Explosion shot transform array */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<USceneComponent*> ShotTransforms_Explosion;

	//** Movement speed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;

	//** The amount of distance a projectile can travel before it despawns */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	float MaxProjTravelDistance_Normal;

	/** The name of the projectile currently being checked when determining
	whether or not the player can fire again */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	FName ShotTag;

	/** Whether or not the enemy can actually shoot */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Shooting")
	bool bCanShoot;

	//** The number of fired projectiles currently in the scene */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	TArray<AActor*> FoundShots;

	//** Projectile Blueprint */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	TSubclassOf<class AEnemyProjectile_BeastCore> ShotBP;

	/** The enemy's current rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator Rotator;

	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;

	/** Handle for explosion timer */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle ExplosionTimerHandle;

	/** Delay time until explosion */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ExplosionDelayTime;

	/** Explosion warning material reference */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMaterialInterface* WarningMat;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void StartInvulnPeriod() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void InvulnPeriod(float DeltaTime) override;
	virtual void VisibilityFlashing(float DeltaTime) override;
	virtual void MainBehaviour(float DeltaTime) override;
	virtual void DamageFunction(float Damage) override;
	virtual void Death() override;

	//Shooting function
	void Shoot();
	//Destroys projectiles that are far-away enough from the player
	void ShotCleanup();
};
