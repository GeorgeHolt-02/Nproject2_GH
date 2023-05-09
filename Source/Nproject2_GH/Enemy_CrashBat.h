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

	//** Whether or not the enemy's dive has been activated *//
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bDiveModeActive;

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

	// UFUNCTION()
	// virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	// 	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};
