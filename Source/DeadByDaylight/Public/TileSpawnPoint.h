// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Enums.h"
#include "TileSpawnPoint.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEADBYDAYLIGHT_API UTileSpawnPoint : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ETileSpawnPointType TileSpawnPointType; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* _spawnedObject;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UClass*> ObjectSpawnModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int _spawnPriorityTier; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool _weightInfluenceable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool _weightInfluencer;  


	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnObject();
	UFUNCTION(BlueprintCallable)
	AActor* GetSpawnedObject();
public:	
	// Sets default values for this component's properties
	UTileSpawnPoint();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
