// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformPath.h"

#include "Components/SplineComponent.h"

// Sets default values
APlatformPath::APlatformPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Path = CreateDefaultSubobject<USplineComponent>(TEXT("Path"));
	SetRootComponent(Path);
}

// Called when the game starts or when spawned
void APlatformPath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlatformPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

