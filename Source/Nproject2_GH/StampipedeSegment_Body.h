// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy_BaseStampipedeSegment.h"
#include "StampipedeSegment_Body.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AStampipedeSegment_Body : public AEnemy_BaseStampipedeSegment
{
	GENERATED_BODY()

public:
	AStampipedeSegment_Body();
	
	//Leg mesh (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* LegMeshL;
	//Leg mesh (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* LegMeshR;

	//Shockwave origin (left)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShockwaveOriginL;
	//Shockwave origin (right)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShockwaveOriginR;

	//** Shockwave Blueprint */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AEnemyProjectile_Shockwave> ShockBP;
	
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

	void StompL();
	void StompR();
	
	void AttackDelay();
};
