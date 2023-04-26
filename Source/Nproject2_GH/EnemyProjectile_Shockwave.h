// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemyProjectile.h"
#include "EnemyProjectile_Shockwave.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemyProjectile_Shockwave : public ABaseEnemyProjectile
{
	GENERATED_BODY()

public:
	//Sets defaults
	AEnemyProjectile_Shockwave();

	/** Shockwave mesh, also where collision occurs */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* RingMesh;

	/** Rate of increase in shockwave radius */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float RadiusGrowthSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Circle expansion
	void ShockwaveSpread(float DeltaTime);

	// Enables collision on the first frame
	void EnableCollision();
};
