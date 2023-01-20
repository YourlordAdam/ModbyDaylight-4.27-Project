// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierContainer.h"
#include "BasePerkIconStrategy.h"
#include "UObject/WeakObjectPtr.h"
#include "Perk.generated.h"

/**
 * 
 */
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTokenCountChanged, int, tokenCount); //possible wrong
UCLASS(Blueprintable, BlueprintType)
class DEADBYDAYLIGHT_API UPerk : public UGameplayModifierContainer
{
	GENERATED_BODY()
public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FGameplayModifierData> PerkLevelData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 _perkLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UBasePerkIconStrategy> PerkIconStrategyClass;
	UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite)
		FTokenCountChanged OnTokenCountChangedBP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool _isUsable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BroadcastWhenApplicable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BroadcastOnTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BroadcastCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BroadcastInactiveCooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BroadcastAlways;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBasePerkIconStrategy* _perkIconStrategy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EInputInteractionType _activatableInteractionInputType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 _tokenCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 _maxTokenCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTimerObject* _cooldownTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTimerObject* _hudIconTimer;

		//WIP. Some "functions" are actually events but just aren't created as such yet. Events have the Event and or BlueprintEvent flags

	UFUNCTION(BlueprintCallable)
	void TriggerTimerActivePerkEvent();
	UFUNCTION(BlueprintCallable)
	void SetIsUsable(bool value);
	UFUNCTION(BlueprintCallable)
	void ResetCooldownTimer();
	UFUNCTION(BlueprintCallable)
	void OnRep_TokenCount(int oldCount);
	UFUNCTION(BlueprintCallable)
	void OnRep_CooldownTimer();
	UFUNCTION(BlueprintCallable)
	void Multicast_InitializePerk(FName PerkId, int PerkLevel, EInputInteractionType activatableInteractionInputType);
	UFUNCTION(BlueprintCallable)
	bool IsCooldownTimerDone();
	UFUNCTION(BlueprintCallable)
	int GetTokenCount();
	UFUNCTION(BlueprintCallable)
	int GetPerkLevel();
	UFUNCTION(BlueprintCallable)
	int GetMaxTokenCount();
	UFUNCTION(BlueprintCallable)
	bool GetIsUsable();
	UFUNCTION(BlueprintCallable)
	void FireActivePerkEvent(float percentage, int chargeCount);
	UFUNCTION(BlueprintCallable)
	void Authority_TriggerCooldownTimer(float coolddownTime);
	UFUNCTION(BlueprintCallable)
	void Authority_SetTokenCount(int value);
	UFUNCTION(BlueprintCallable)
	void Authority_SetMaxTokenCount(int value);
	UFUNCTION(BlueprintCallable)
	void Authority_IncrementToken();
	UFUNCTION(BlueprintCallable)
	void Authority_DecrementToken();
};
