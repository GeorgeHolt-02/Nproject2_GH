// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy_BaseStampipedeSegment.h"
#include "StampipedeSegment_Head.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AStampipedeSegment_Head : public AEnemy_BaseStampipedeSegment
{
	GENERATED_BODY()

public:
	//Class defaults
	AStampipedeSegment_Head();
	
	//Body segment reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AStampipedeSegment_Body> MiddleSegmentRef;
	//Body segment array
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AStampipedeSegment_Body*> MiddleSegments;
	//Back reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AStampipedeSegment_Back> BackRef;
	//Rear end
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AStampipedeSegment_Back* Back;

	//Eye mesh (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* EyeMeshL;
	//Eye mesh (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* EyeMeshR;
	//Antennae mesh
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* AntennaeMesh;
	//Mandible mesh (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* MandibleMeshL;
	//Mandible mesh (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* MandibleMeshR;

	//Bounding volume for the Stampipede's movement
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BoundVolume;

	//Number of body segments to create
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int MiddleSegmentNum;

	//Normal movement speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MovementSpeed;

	//Normal rotation speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RotationSpeed;

	//Offset to apply to each segment
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SegmentOffset;

	//Lag to apply to segment re-adjustment
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SegmentInterpLag;

	/** The enemy's current rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator Rotator;

	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;

	//Whether or not the head has been hit
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bHeadHit;

	//Whether or not the boss can move as normal
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanWalk;

	//Laser timer handles
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle LaserActivateTimer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle LaserShootTimer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle LaserCancelTimer;

	//Delays attacks
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle AttackDelayTimer;

	//Laser shot Blueprint reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AEnemyProjectile_StampipedeLsr> LaserBP;

	//Laser shot origin
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* LaserOrigin;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void StartInvulnPeriod() override;

public:
	virtual void Tick(float DeltaTime) override;

	void SegmentInterpolation();

	virtual void InvulnPeriod(float DeltaTime) override;
	virtual void VisibilityFlashing(float DeltaTime) override;
	virtual void MainBehaviour(float DeltaTime) override;
	virtual void DamageFunction(float Damage) override;
	virtual void Death() override;

	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
	UFUNCTION()
	virtual void OnOverlapStart_Body(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnOverlapStart_Back(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void LaserActivate();
	void LaserShoot();
	void LaserCancel();
	
	void AttackDelay();
};