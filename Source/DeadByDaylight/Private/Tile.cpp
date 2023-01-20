// Fill out your copyright notice in the Description page of Project Settings.

#include "Tile.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ATile::OnSetSpawnObject(UTileSpawnPoint* TileSpawnPoint, AActor* spawnedObject){}
void ATile::OnRep_Initialized(bool oldValue){}
void ATile::InitOnSpawned(){}
