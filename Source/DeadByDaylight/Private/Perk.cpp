// Fill out your copyright notice in the Description page of Project Settings.

#include "Perk.h"

void UPerk::TriggerTimerActivePerkEvent(){}
void UPerk::SetIsUsable(bool value){}
void UPerk::ResetCooldownTimer(){}
void UPerk::OnRep_TokenCount(int oldCount){}
void UPerk::OnRep_CooldownTimer(){}
void UPerk::Multicast_InitializePerk(FName PerkId, int PerkLevel, EInputInteractionType activatableInteractionInputType){}
bool UPerk::IsCooldownTimerDone(){return false;}
int UPerk::GetTokenCount(){return 0;}
int UPerk::GetPerkLevel(){return 0;}
int UPerk::GetMaxTokenCount(){return 0;}
bool UPerk::GetIsUsable(){return false;}
void UPerk::FireActivePerkEvent(float percentage, int chargeCount){}
void UPerk::Authority_TriggerCooldownTimer(float coolddownTime){}
void UPerk::Authority_SetTokenCount(int value){}
void UPerk::Authority_SetMaxTokenCount(int value){}
void UPerk::Authority_IncrementToken(){}
void UPerk::Authority_DecrementToken(){}