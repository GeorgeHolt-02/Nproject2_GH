// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyWave_Spline.h"

#include "Components/SplineComponent.h"

// Sets default values
AEnemyWave_Spline::AEnemyWave_Spline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	SetRootComponent(Spline);

	//EnemyReferences.Empty();
	EnemyReferences.Init(EnemyBP, Spline->GetNumberOfSplinePoints());
	
}