// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerBlaster.generated.h"

UCLASS()
class NPROJECT2_GH_API APlayerBlaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBlaster();
	
	//** Mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Player character pointer
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class APlayerChar* MyChar;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
