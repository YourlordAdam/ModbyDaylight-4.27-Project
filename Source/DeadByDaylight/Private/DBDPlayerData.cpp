// Fill out your copyright notice in the Description page of Project Settings.

#include "DBDPlayerData.h"

void UDBDPlayerData::SetRenderingFeaturesCompleted() {
}

void UDBDPlayerData::SetLoadoutSpawned() {
}

void UDBDPlayerData::SetIntroCompleted() {
}

void UDBDPlayerData::SetCampaignDataSynced() {
}

void UDBDPlayerData::Server_SetIntroCompleted_Implementation() {
}
bool UDBDPlayerData::Server_SetIntroCompleted_Validate() {
    return true;
}

void UDBDPlayerData::Server_RenderingFeaturesCompleted_Implementation() {
}
bool UDBDPlayerData::Server_RenderingFeaturesCompleted_Validate() {
    return true;
}

void UDBDPlayerData::Server_LoadoutSpawned_Implementation() {
}
bool UDBDPlayerData::Server_LoadoutSpawned_Validate() {
    return true;
}

void UDBDPlayerData::Server_CampaignDataSynced_Implementation() {
}
bool UDBDPlayerData::Server_CampaignDataSynced_Validate() {
    return true;
}

bool UDBDPlayerData::IsLoadoutSpawned() const {
    return false;
}

bool UDBDPlayerData::IsIntroCompleted() {
    return false;
}

bool UDBDPlayerData::IsCampaignDataSynced() const {
    return false;
}

bool UDBDPlayerData::DidRenderingFeaturesComplete() const {
    return false;
}

// Sets default values for this component's properties
UDBDPlayerData::UDBDPlayerData()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDBDPlayerData::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDBDPlayerData::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

