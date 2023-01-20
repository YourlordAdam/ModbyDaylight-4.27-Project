// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDPlayerData.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerData : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void SetRenderingFeaturesCompleted();

	UFUNCTION()
	void SetLoadoutSpawned();

	UFUNCTION()
	void SetIntroCompleted();

	UFUNCTION()
	void SetCampaignDataSynced();

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIntroCompleted();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RenderingFeaturesCompleted();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoadoutSpawned();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CampaignDataSynced();

public:
	UFUNCTION()
	bool IsLoadoutSpawned() const;

	UFUNCTION()
	bool IsIntroCompleted();

	UFUNCTION()
	bool IsCampaignDataSynced() const;

	UFUNCTION()
	bool DidRenderingFeaturesComplete() const;

	UDBDPlayerData();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};
