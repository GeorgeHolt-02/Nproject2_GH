// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Stampipede.h"

#include "StampipedeSegment_Back.h"
#include "StampipedeSegment_Body.h"
#include "StampipedeSegment_Head.h"

AEnemy_Stampipede::AEnemy_Stampipede()
{
	Head = CreateDefaultSubobject<AStampipedeSegment_Head>(TEXT("Head"));
	SetRootComponent(Cast<USceneComponent>(Head));

	MiddleSegmentNum = 3;

	Back = CreateDefaultSubobject<AStampipedeSegment_Back>(TEXT("Back"));
}

void AEnemy_Stampipede::BeginPlay()
{
	Super::BeginPlay();

	Rotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
	Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);
	
	if(MiddleSegmentRef)
	{
		for(int i = 0; i < MiddleSegmentNum; i++)
		{
			const FRotator Rotation = GetActorRotation();
			const FVector Location = GetActorLocation() - (SegmentOffset * Direction);
			const FActorSpawnParameters SpawnParams;
			
			MiddleSegments.Add(GetWorld()->SpawnActor<AStampipedeSegment_Body>(MiddleSegmentRef, Location, Rotation, SpawnParams));
			MiddleSegments[i]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
		}
	}

	if(MiddleSegments.Last())
	{
		Back->AttachToComponent(Cast<USceneComponent>(MiddleSegments.Last()), FAttachmentTransformRules::KeepWorldTransform);
	}
}

void AEnemy_Stampipede::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}
