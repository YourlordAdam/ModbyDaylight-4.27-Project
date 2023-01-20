// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Enums.h"
#include "Structs.h"
#include "ActorSpawner.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncActorSpawned);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEADBYDAYLIGHT_API UActorSpawner : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EGameplayElementType Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftClassPtr<AActor> Visualization;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ActivatedByDefault;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FActorSpawnerProperties> ActivatedSceneElement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FActorSpawnerProperties> DeactivatedSceneElement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SpawnCountMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SpawnPriorityTier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FAsyncActorSpawned OnAsyncActorSpawned;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool WeightInfluencable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool WeightInfluencer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Cost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UObject> _toSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* _spawnedActorOnAuthority;


	UFUNCTION(BlueprintCallable)
	bool UseActivatedElement();
	UFUNCTION(BlueprintCallable)
	void EditorForceSpawnVisualization();
	UFUNCTION(BlueprintCallable)
	AActor* AuthorityGetSpawnedActor();
	UFUNCTION(BlueprintCallable)
	void Authority_SpawnActorAsyncEvent();


	// Sets default values for this component's properties
	UActorSpawner();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
