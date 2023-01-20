// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseModifierContainer.h"
#include "TimerObject.h"
#include "GameplayTagContainer.h"
#include "BaseModifierCondition.h"
#include "Enums.h"
//#include "Structs.h"
#include "GameplayModifierContainer.generated.h"

USTRUCT(BlueprintType)
struct FFloat_NetQuantize8 {
    GENERATED_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float _value;
    unsigned char UD[4];
};

USTRUCT(BlueprintType)
struct FDBDTimer {
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float _startTime;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool _startTimeDirty;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FFloat_NetQuantize8 _timeLeft;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool _replicateTimeLeft;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float _interpSpeed;
};

/**
 * 
 */
UCLASS()
class DEADBYDAYLIGHT_API UGameplayModifierContainer : public UBaseModifierContainer
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool UseApplyFunction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UBaseModifierContainer*> _conditionsInner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> _tags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTimerObject* _activationTimer;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FDBDTimer HUDIconTimer;



    UFUNCTION(BlueprintCallable)
	void UpdateIsApplicable();
	UFUNCTION(BlueprintCallable)
	void UpdateActivationTimer();
	UFUNCTION(BlueprintCallable)
	void UnlistenToGameEvent(EDBDScoreTypes EventType);
	UFUNCTION(BlueprintCallable)
	void UnlistenToDispatcherGameEvent(FGameplayTag EventType);
	UFUNCTION(BlueprintCallable)
	void UnlistenToAllGameEvents();
	UFUNCTION(BlueprintCallable)
	void UnlistenToAllDispatcherGameEvents();
	UFUNCTION(BlueprintCallable)
	void TriggerActivationTimer(float activationTime);
	UFUNCTION(BlueprintCallable)
	void SetStatusView(bool broadcastStatusView, FName StatusViewID);
	UFUNCTION(BlueprintCallable)
	void SetModifierValue(FGameplayTag Type, float GameplayModifierValue);
	UFUNCTION(BlueprintCallable)
	void SetFlag(FGameplayTag flag, bool flagValue);
	UFUNCTION(BlueprintCallable)
	void RemoveModifier(FGameplayTag Type);
	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiers();
	UFUNCTION(BlueprintCallable)
	void RemoveAllFlags();
	UFUNCTION(BlueprintCallable)
	void OnRep_ConditionsInner();
	UFUNCTION(BlueprintCallable)
	void OnListenedGameEvent(EDBDScoreTypes EventType, float amount, AActor* Instigator, AActor* Target);
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();
	UFUNCTION(BlueprintCallable)
	void OnInitialized_Internal();
	UFUNCTION(BlueprintCallable)
	void OnInitialized();
	UFUNCTION(BlueprintCallable)
	void OnGameplayEvent(EDBDScoreTypes EventType, float amount, AActor* Instigator, AActor* Target);
	UFUNCTION(BlueprintCallable)
	void OnGameEventDispatched(FGameplayTag gameEventType, FGameEventData GameEventData);
	UFUNCTION(BlueprintCallable)
	void OnApplyEnd();
	UFUNCTION(BlueprintCallable)
	void OnApplyBegin();
	UFUNCTION(BlueprintCallable)
	void ListenToGameEvent(EDBDScoreTypes EventType);
	UFUNCTION(BlueprintCallable)
	void ListenToDispatcherGameEvent(FGameplayTag EventType);
	UFUNCTION(BlueprintCallable)
	bool IsStatusViewActive();
	UFUNCTION(BlueprintCallable)
	bool IsActivationTimerActive();
	UFUNCTION(BlueprintCallable)
	void InstantiateGameplayModifierConditions();
	UFUNCTION(BlueprintCallable)
	bool HasModifierOfType(FGameplayTag Type);
	UFUNCTION(BlueprintCallable)
	bool HasFlag(FGameplayTag flag);
	UFUNCTION(BlueprintCallable)
	float GetRemainingLifetime();
	UFUNCTION(BlueprintCallable)
	float GetPercentageFill();
	UFUNCTION(BlueprintCallable)
	class ADBDPlayer* GetOwningPlayer();
	UFUNCTION(BlueprintCallable)
	UGameplayModifierContainer* GetOriginatingEffect();
	UFUNCTION(BlueprintCallable)
	float GetModifierValue(FGameplayTag Type);
	UFUNCTION(BlueprintCallable)
	int GetLevelToDisplay();
	UFUNCTION(BlueprintCallable)
	EInventoryItemType GetInventoryItemType();
	UFUNCTION(BlueprintCallable)
	int GetIconFilePathIndex();
	UFUNCTION(BlueprintCallable)
	float GetActivationTimerRemainingTime();
	UFUNCTION(BlueprintCallable)
	float GetActivationTimerPercentRemaining();
	UFUNCTION(BlueprintCallable)
	float GetActivationTimerElapsedTimePercent();
	UFUNCTION(BlueprintCallable)
	void FireActiveStatusViewEvent(FName StatusViewID, FName uniqueSourceID, FStatusViewSource StatusViewSource);
	UFUNCTION(BlueprintCallable)
	void Apply(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	UBaseModifierCondition* AddCondition(UClass* conditionType);
};
