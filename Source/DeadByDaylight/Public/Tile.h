// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enums.h"
#include "TileSpawnPoint.h"
#include "ActorSpawner.h"
#include "Tile.generated.h"

UCLASS(Blueprintable, BlueprintType)
class DEADBYDAYLIGHT_API ATile : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MinimumSpacing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MaximumSpacing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MaximumCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D Dimension;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<EscapeStrategyType> AvailableEscapeTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ETileType Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EDensity Density;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPathType Path;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Number;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool PlaceHolder;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SpawnPriorityTier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D Coord;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) //Assuming type is UTileSpawnPoint, but SDK only shows its parent UActorComponent
		TArray<UTileSpawnPoint*> SpawnPointsCache;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UActorComponent*> ObjectRandomizersCache;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UActorSpawner*> ActorSpawnersCache; //Assuming type is UActorSpawner, but SDK only shows its parent UActorComponent
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UActorComponent*> ActorVariationSpawnersCache;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRandomStream SharedTileRandomizer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool _initialized;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool TypeSpacing;
	
	UFUNCTION(BlueprintCallable)
	void OnSetSpawnObject(UTileSpawnPoint* TileSpawnPoint, AActor* spawnedObject);
	UFUNCTION(BlueprintCallable)
	void OnRep_Initialized(bool oldValue);
	UFUNCTION(BlueprintCallable)
	void InitOnSpawned();

public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
