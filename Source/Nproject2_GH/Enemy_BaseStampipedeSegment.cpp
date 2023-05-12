// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_BaseStampipedeSegment.h"
#include "Components/BoxComponent.h"

AEnemy_BaseStampipedeSegment::AEnemy_BaseStampipedeSegment()
{
	SetRootComponent(EnemyCollider);

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->SetupAttachment(RootComponent);
}
