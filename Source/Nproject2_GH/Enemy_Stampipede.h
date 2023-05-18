// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_Stampipede.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_Stampipede : public ABaseEnemy
{
	GENERATED_BODY()

public:
	//Class defaults
	AEnemy_Stampipede();
	
	//Head
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class AStampipedeSegment_Head* Head;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	AStampipedeSegment_Back* Back;

	//Bounding volume for the Stampipede's movement
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BoundVolume;

	//Number of body segments to create
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int MiddleSegmentNum;

	//Normal movement speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MovementSpeed;

	//Offset to apply to each segment
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SegmentOffset;

	/** The enemy's current rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator Rotator;

	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
