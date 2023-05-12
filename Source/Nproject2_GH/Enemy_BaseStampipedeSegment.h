// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_BaseStampipedeSegment.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_BaseStampipedeSegment : public ABaseEnemy
{
	GENERATED_BODY()

public:
	//Class defaults
	AEnemy_BaseStampipedeSegment();

	//Visual mesh
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* BaseMesh;
};
