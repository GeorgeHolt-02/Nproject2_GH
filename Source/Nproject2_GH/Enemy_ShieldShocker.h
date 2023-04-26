// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_ShieldShocker.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_ShieldShocker : public ABaseEnemy
{
	GENERATED_BODY()

public:
	//Sets defaults
	AEnemy_ShieldShocker();

	//** Shield mesh */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* ShieldMesh;
	//** Core mesh */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* CoreMesh;

	//** Transform shield moves to when closed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ClosedTransform;
	//** Transform shield moves to when open */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* OpenTransform;

	//** Shockwave origin transform */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* ShockwaveTransform;

	//** The radius a shockwave can grow to before it despawns */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	float MaxShockRadius;
	/** The name of the shockwave currently being checked when determining
	whether or not the enemy can fire again */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	FName ShockTag;
	/** Whether or not the enemy can actually shoot */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Shooting")
	bool bCanShoot;
	//** The number of fired shockwaves currently in the scene */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	TArray<AActor*> FoundShots;
	//** Shockwave Blueprint */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	TSubclassOf<class AEnemyProjectile_Shockwave> ShockBP;

	//** Player detection radius */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float AggroRadius;

	//** Shield open/close duration */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ShieldTransitionDuration;
	//** Current shield transition alpha */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float ShieldTransitionAlpha;

	//** Shoot timer */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle TimerHandle_Shoot;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ShootDelay;
	//** Close shield timer */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle TimerHandle_Close;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CloseDelay;

	//** Whether or not the shield should be open */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bOpen;

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

	//Shooting function
	void Shoot();
	//Destroys projectiles that are far-away enough from the player
	void ShotCleanup();

	//Opens the shield
	void OpenShield(float DeltaTime);
	//Closes the shield
	void CloseShield(float DeltaTime);
};
