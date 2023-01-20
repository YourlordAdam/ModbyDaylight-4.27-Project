// Fill out your copyright notice in the Description page of Project Settings.
#include "GameplayModifierContainer.h"


void UGameplayModifierContainer::UpdateIsApplicable(){}
void UGameplayModifierContainer::UpdateActivationTimer(){}
void UGameplayModifierContainer::UnlistenToGameEvent(EDBDScoreTypes EventType){}
void UGameplayModifierContainer::UnlistenToDispatcherGameEvent(FGameplayTag EventType){}
void UGameplayModifierContainer::UnlistenToAllGameEvents(){}
void UGameplayModifierContainer::UnlistenToAllDispatcherGameEvents(){}
void UGameplayModifierContainer::TriggerActivationTimer(float activationTime){}
void UGameplayModifierContainer::SetStatusView(bool broadcastStatusView, FName StatusViewID){}
void UGameplayModifierContainer::SetModifierValue(FGameplayTag Type, float GameplayModifierValue){}
void UGameplayModifierContainer::SetFlag(FGameplayTag flag, bool flagValue){}
void UGameplayModifierContainer::RemoveModifier(FGameplayTag Type){}
void UGameplayModifierContainer::RemoveAllModifiers(){}
void UGameplayModifierContainer::RemoveAllFlags(){}
void UGameplayModifierContainer::OnRep_ConditionsInner(){}
void UGameplayModifierContainer::OnListenedGameEvent(EDBDScoreTypes EventType, float amount, AActor* Instigator, AActor* Target){}
void UGameplayModifierContainer::OnLevelReadyToPlay(){}
void UGameplayModifierContainer::OnInitialized_Internal(){}
void UGameplayModifierContainer::OnInitialized(){}
void UGameplayModifierContainer::OnGameplayEvent(EDBDScoreTypes EventType, float amount, AActor* Instigator, AActor* Target){}
void UGameplayModifierContainer::OnGameEventDispatched( FGameplayTag gameEventType, FGameEventData GameEventData){}
void UGameplayModifierContainer::OnApplyEnd(){}
void UGameplayModifierContainer::OnApplyBegin(){}
void UGameplayModifierContainer::ListenToGameEvent(EDBDScoreTypes EventType){}
void UGameplayModifierContainer::ListenToDispatcherGameEvent(FGameplayTag EventType){}
bool UGameplayModifierContainer::IsStatusViewActive(){return false;}
bool UGameplayModifierContainer::IsActivationTimerActive(){return false;}
void UGameplayModifierContainer::InstantiateGameplayModifierConditions(){}
bool UGameplayModifierContainer::HasModifierOfType(FGameplayTag Type){return false;}
bool UGameplayModifierContainer::HasFlag(FGameplayTag flag){return false;}
float UGameplayModifierContainer::GetRemainingLifetime(){return 0;}
float UGameplayModifierContainer::GetPercentageFill(){return 0;}
ADBDPlayer* UGameplayModifierContainer::GetOwningPlayer(){return nullptr;}
UGameplayModifierContainer* UGameplayModifierContainer::GetOriginatingEffect(){return nullptr;}
float UGameplayModifierContainer::GetModifierValue( FGameplayTag Type){return 0;}
int UGameplayModifierContainer::GetLevelToDisplay(){return 0;}
EInventoryItemType UGameplayModifierContainer::GetInventoryItemType(){return EInventoryItemType::None;}
int UGameplayModifierContainer::GetIconFilePathIndex(){return 0;}
float UGameplayModifierContainer::GetActivationTimerRemainingTime(){return 0;}
float UGameplayModifierContainer::GetActivationTimerPercentRemaining(){return 0;}
float UGameplayModifierContainer::GetActivationTimerElapsedTimePercent(){return 0;}
void UGameplayModifierContainer::FireActiveStatusViewEvent(FName StatusViewID, FName uniqueSourceID, FStatusViewSource StatusViewSource){}
void UGameplayModifierContainer::Apply(float DeltaTime){}
UBaseModifierCondition* UGameplayModifierContainer::AddCondition(UClass* conditionType){return nullptr;}
