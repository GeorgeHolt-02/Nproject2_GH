// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class NPROJECT2_GH_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

	//* Platform mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	//* Spline representing the path */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class APlatformPath* PlatPath;
	
	//* Timeline used for the progression of the platform along the path */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTimelineComponent* PlatformMover;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Begins platform movement
	UFUNCTION()
	void Move();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* FloatCurve;
	
	UFUNCTION()
	void TimelineCallback(float value);

	UFUNCTION()
	void TimelineFinishedCallback();

	UFUNCTION()
	void PlayTimeline();

	UPROPERTY()
	TEnumAsByte<ETimelineDirection::Type> TimelineDirection;
	
	// Timeline alpha, represents current progression along path */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float Alpha;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Platform cycle duration
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Duration;

	// Starting offset along timeline
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float StartingOffset;
	
};
