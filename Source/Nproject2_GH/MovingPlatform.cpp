// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

#include "PlatformPath.h"
#include "Components/SplineComponent.h"
#include "Components/TimelineComponent.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	
	PlatformMover = CreateDefaultSubobject<UTimelineComponent>(TEXT("PlatformMover"));
	
	Alpha = 0.0f;
	
	Duration = 1.0f;
	StartingOffset = FMath::Clamp(0.0f, 0.0f, 1.0f);
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	FOnTimelineFloat onTimelineCallback;
	FOnTimelineEventStatic onTimelineFinishedCallback;
	
	Super::BeginPlay();

	if(FloatCurve)
	{
		PlatformMover = NewObject<UTimelineComponent>(this, FName("TimelineAnimation"));
		PlatformMover->CreationMethod = EComponentCreationMethod::UserConstructionScript;
		this->BlueprintCreatedComponents.Add(PlatformMover);
		PlatformMover->SetNetAddressable();

		PlatformMover->SetPropertySetObject(this);
		PlatformMover->SetDirectionPropertyName(FName("TimelineDirection"));

		PlatformMover->SetLooping(true);
		PlatformMover->SetTimelineLength(5.0f);
		PlatformMover->SetTimelineLengthMode(TL_LastKeyFrame);

		PlatformMover->SetPlaybackPosition(0.0f, false);

		onTimelineCallback.BindUFunction(this, FName{TEXT("TimelineCallback")});
		onTimelineFinishedCallback.BindUFunction(this, FName{TEXT("TimelineFinishedCallback")});
		PlatformMover->AddInterpFloat(FloatCurve, onTimelineCallback);
		PlatformMover->SetTimelineFinishedFunc(onTimelineFinishedCallback);

		PlatformMover->RegisterComponent();
	}
	
	Move();
}

void AMovingPlatform::Move()
{
	PlatformMover->SetPlayRate(1 / Duration);
	PlatformMover->SetNewTime(StartingOffset);
	PlatformMover->Play();
	Alpha = 0.0f;
	
	SetActorLocation(PlatPath->Path->GetLocationAtDistanceAlongSpline(FMath::Lerp(0.0f, PlatPath->Path->GetSplineLength(), Alpha), ESplineCoordinateSpace::World));
}

void AMovingPlatform::TimelineCallback(float value)
{
	Alpha = value;

	SetActorLocation(PlatPath->Path->GetLocationAtDistanceAlongSpline(FMath::Lerp(0.0f, PlatPath->Path->GetSplineLength(), Alpha), ESplineCoordinateSpace::World));
}

void AMovingPlatform::TimelineFinishedCallback()
{
	
}

void AMovingPlatform::PlayTimeline()
{
	if(PlatformMover)
	{
		PlatformMover->PlayFromStart();
	}
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(PlatformMover)
	{
		PlatformMover->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, NULL);
	}
}
