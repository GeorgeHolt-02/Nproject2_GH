// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemyProjectile.h"
#include "EnemyProjectile_StampipedeOrb.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemyProjectile_StampipedeOrb : public ABaseEnemyProjectile
{
	GENERATED_BODY()

public:
	//Class defaults
	AEnemyProjectile_StampipedeOrb();

	/** Shot mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ShotMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Enables collision on the first frame
	void EnableCollision();

	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};
