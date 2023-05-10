// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireGeyser.generated.h"

UCLASS()
class NPROJECT2_GH_API AFireGeyser : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireGeyser();

	/** Visual mesh */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

	/** Origin from which to shoot fireballs */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* FireballOrigin;

	/** Timer that toggles between shooting and not shooting (handle and delay time) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle Handle_Toggle;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ToggleDelay;
	/** Starting delay for the toggle */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ToggleStartingDelay;

	/** Timer representing rate of fire (handle and delay time) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle Handle_FireRate;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float FireRate;

	/** The threshold of the toggle timer at which to change the geyser's material */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float WarningThreshold;

	//** Fireball Blueprint reference */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class AEnemyProjectile_Fireball> FireballBP;

	/** Default material reference */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMaterialInterface* DefaultMat;
	
	/** Warning material reference */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMaterialInterface* WarningMat;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Firing toggle timer
	void FlameToggle();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Shooting function
	void Shoot();

	//Changes the material to a different material to warn the player when geyser is about to shoot */
	void Warning();
};
