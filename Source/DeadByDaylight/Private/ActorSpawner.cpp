// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorSpawner.h"

// Sets default values for this component's properties
UActorSpawner::UActorSpawner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UActorSpawner::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UActorSpawner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UActorSpawner::UseActivatedElement(){return false;}
void UActorSpawner::EditorForceSpawnVisualization(){}
AActor* UActorSpawner::AuthorityGetSpawnedActor(){return nullptr;}
void UActorSpawner::Authority_SpawnActorAsyncEvent(){}