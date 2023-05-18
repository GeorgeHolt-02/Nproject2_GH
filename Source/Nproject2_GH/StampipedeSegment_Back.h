// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy_BaseStampipedeSegment.h"
#include "StampipedeSegment_Back.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AStampipedeSegment_Back : public AEnemy_BaseStampipedeSegment
{
	GENERATED_BODY()

public:
	AStampipedeSegment_Back();
	
	//Leg mesh (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* LegMeshL;
	//Leg mesh (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* LegMeshR;
	//Back leg mesh (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* BackLegMeshL;
	//Back leg mesh (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* BackLegMeshR;

	//Back leg hitbox (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* BackLegColliderL;
	//Back leg hitbox (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* BackLegColliderR;

	//Back leg shot origin (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShotOriginL;
	//Back leg shot origin (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShotOriginR;

	//Whether or not the back legs should flash
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bBackLegLHit;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bBackLegRHit;

	//Whether or not this segment has been hit at all
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bHit;

	//Orb shot Blueprint reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AEnemyProjectile_StampipedeOrb> OrbBP;
	
	//Whether or not we can shoot orbs
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanShoot;

	//Shoot timer handle
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle ShootTimer;

	//Shockwave origin (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShockwaveOriginL;
	//Shockwave origin (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShockwaveOriginR;
	
	//Whether or we can stomp
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanStomp;

	//Default leg rotations
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FRotator LDefaultRot;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FRotator RDefaultRot;

	//Stomp timer handles
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FTimerHandle Handle_StompL;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FTimerHandle Handle_StompR;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FTimerHandle Handle_StompDelay;

	//** Shockwave Blueprint */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AEnemyProjectile_Shockwave> ShockBP;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void StartInvulnPeriod() override;

public:
	//virtual void Tick(float DeltaTime) override;

	virtual void InvulnPeriod(float DeltaTime) override;
	virtual void VisibilityFlashing(float DeltaTime) override;
	virtual void MainBehaviour(float DeltaTime) override;
	virtual void DamageFunction(float Damage) override;

	virtual void EnableCollision() override;

	UFUNCTION()
	void Shoot();
	
	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	void StompL();
	void StompR();
	
	void AttackDelay();
};
