// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformPath.generated.h"

UCLASS()
class NPROJECT2_GH_API APlatformPath : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformPath();

	//The spline representing the path
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	class USplineComponent* Path;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
