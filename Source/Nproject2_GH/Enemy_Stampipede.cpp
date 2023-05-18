// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Stampipede.h"
#include "StampipedeSegment_Back.h"
#include "StampipedeSegment_Body.h"
#include "StampipedeSegment_Head.h"
#include "Components/BoxComponent.h"

AEnemy_Stampipede::AEnemy_Stampipede()
{
	Head = CreateDefaultSubobject<AStampipedeSegment_Head>(TEXT("Head"));
	SetRootComponent(Cast<USceneComponent>(Head));

	BoundVolume = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoundVolume"));
	BoundVolume->SetupAttachment(RootComponent);
	
	MiddleSegmentNum = 3;
}

void AEnemy_Stampipede::BeginPlay()
{
	Super::BeginPlay();

	EnemyCollider->OnComponentBeginOverlap.RemoveDynamic(this, &ABaseEnemy::OnOverlapStart);
	EnemyCollider->DestroyComponent();

	Rotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
	Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);
	
	if(MiddleSegmentRef)
	{
		for(int i = 0; i < MiddleSegmentNum; i++)
		{
			const FRotator Rotation = GetActorRotation();
			FVector Location = GetActorLocation() - (SegmentOffset * Direction);
			if(i > 0)
			{
				if(MiddleSegments[i-1])
				{
					Location = MiddleSegments[i-1]->GetActorLocation() - (SegmentOffset * Direction);
				}
			}
			const FActorSpawnParameters SpawnParams;
			
			MiddleSegments.Add(GetWorld()->SpawnActor<AStampipedeSegment_Body>(MiddleSegmentRef, Location, Rotation, SpawnParams));
			if(i <= 0)
			{
				MiddleSegments[i]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
			}
			else
			{
				if(MiddleSegments[i-1])
				{
					MiddleSegments[i]->AttachToComponent(Cast<USceneComponent>(MiddleSegments[i-1]), FAttachmentTransformRules::KeepWorldTransform);
				}
			}
		}

		if(BackRef)
		{
			if(MiddleSegments.Last())
			{
				const FRotator LastRotation = GetActorRotation();
				const FVector LastLocation = MiddleSegments.Last()->GetActorLocation() - (SegmentOffset * Direction);
				const FActorSpawnParameters LastSpawnParams;

				Back = GetWorld()->SpawnActor<AStampipedeSegment_Back>(BackRef, LastLocation, LastRotation, LastSpawnParams);
				Back->AttachToComponent(Cast<USceneComponent>(MiddleSegments.Last()), FAttachmentTransformRules::KeepWorldTransform);
			}
		}
	}
}

void AEnemy_Stampipede::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}
