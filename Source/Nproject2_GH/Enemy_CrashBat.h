// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_CrashBat.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_CrashBat : public ABaseEnemy
{
	GENERATED_BODY()

public:
	//Sets defaults
	AEnemy_CrashBat();

	//** Meshes *//
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* WingMeshL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* WingMeshR;

	//** Speed at which to follow the player */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float H_Speed;

	//** Speed at which to move while crashing, current and max, respectively */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CrashSpeed_Current;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CrashSpeed_Max;

	//** Rate of acceleration when crashing */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float AccelRate;
	
	//** Z-speed to add on every "wing flap" */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FlapForce;

	//** Float representing the gravitational force to exert on this enemy */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Gravity;

	//** Current falling/Z-speed */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float FallSpeed;

	//** The Z-threshold at which to flap upwards *//
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float FlapThreshold;

	//** Radius in which enemy can be aggroed by the player's presence */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float AggroRadius;

	//** Crash toggle timer (handle and delay time, respectively) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle Handle_Crash;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CrashDelay;

	//** Float representing destroy boundaries *//
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float DestroyBoundValue;
	
	//** Whether or not the enemy should be in its normal behaviour pattern *//
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bDefaultBehaviourOn;

	//** Whether or not the enemy is currently in the midst of crashing *//
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCrashing;

	//** Explosion Blueprint reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AExplosion> ExplosionBP;
	
	/** The enemy's current yaw rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator YawRotator;

	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;

	/** Whether or not a given sweep is done purely for positioning purposes */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bPositioningSweep;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void StartInvulnPeriod() override;
	
public:
	virtual void Tick(float DeltaTime) override;

	virtual void InvulnPeriod(float DeltaTime) override;
	virtual void VisibilityFlashing(float DeltaTime) override;
	virtual void MainBehaviour(float DeltaTime) override;
	virtual void DamageFunction(float Damage) override;

	void NormalMovement(float DeltaTime);
	void CrashMovement(float DeltaTime);

	void OutOfBounds();

	void CrashToggle();
	
	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};
