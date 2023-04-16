// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyWave_Spline.generated.h"

UCLASS()
class NPROJECT2_GH_API AEnemyWave_Spline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyWave_Spline();

	//** Spline */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	class USplineComponent* Spline;
	
	//** Enemy class to spawn */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSubclassOf<class ABaseEnemy> EnemyBP;

	//** Enemy class reference array */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	TArray<TSubclassOf<ABaseEnemy>> EnemyReferences;

};
