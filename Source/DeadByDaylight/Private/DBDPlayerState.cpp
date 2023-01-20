// Fill out your copyright notice in the Description page of Project Settings.

#include "DBDPlayerState.h"

	void ADBDPlayerState::UpdateSkillCheckInteractionData(float Progress){}
	void ADBDPlayerState::UpdateOngoingScores(){}
	void ADBDPlayerState::SetSkillCheckInteractionData(FSkillCheckInteractionData skillCheckData){}
	void ADBDPlayerState::SetKillerJoiningState(EKillerJoiningState State){}
	void ADBDPlayerState::Server_SetSelectedCharacterId(EPlayerRole forRole, int ID, bool updateDisplayData){}
	void ADBDPlayerState::Server_SetPlayerGameState(EGameState newGameState){}
	void ADBDPlayerState::Server_SetGameRole(EPlayerRole newPlayerRole){}
	void ADBDPlayerState::Server_SelectSurvivor(int camperIndex){}
	void ADBDPlayerState::Server_SelectKiller(int slasherIndex){}
	void ADBDPlayerState::Server_KillerServerJoined(bool succeeded){}
	void ADBDPlayerState::Server_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData ScoreEventData){}
	void ADBDPlayerState::OnRep_DisplayData(){}
	void ADBDPlayerState::OnRep_CustomizationData(){}
	void ADBDPlayerState::Multicast_UpdateSkillCheckInteractionData(float Progress){}
	void ADBDPlayerState::Multicast_SetSkillCheckInteractionData(FSkillCheckInteractionData skillCheckInteraction){}
	void ADBDPlayerState::Multicast_SetSelectedCharacterId(EPlayerRole forRole, int ID, bool updateDisplayData){}
	void ADBDPlayerState::Multicast_SetPlayerGameState(EGameState newGameState){}
	void ADBDPlayerState::Multicast_SetInParadise(){}
	void ADBDPlayerState::Multicast_SetAsLeftMatch(){}
	void ADBDPlayerState::Multicast_SetAsDisconnected(){}
	void ADBDPlayerState::Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* Target){}
	void ADBDPlayerState::Multicast_AwardScore(FAwardedScore AwardedScore){}
	EKillerJoiningState ADBDPlayerState::KillerJoiningState(){return EKillerJoiningState::Connected;}
	void ADBDPlayerState::InitializeAvailablePerkEvent(FName PerkId){}
	bool ADBDPlayerState::HasHappened(EDBDScoreTypes gameplayEventType, float maxSecondsAgo){return false;}
	bool ADBDPlayerState::HasEscaped(){return false;}
	EGameState ADBDPlayerState::GetPlayerGameState(){return EGameState::VE_None;}
	//UGameplayNotificationManager* ADBDPlayerState::GetGameplayNotificationManager(){}
	void ADBDPlayerState::FireScoreEvent(EDBDScoreTypes scoreType, float PercentToAward){}
	void ADBDPlayerState::FireActiveStatusViewEvent(FName StatusViewID, FName uniqueSourceID, FStatusViewSource StatusViewSource){}
	void ADBDPlayerState::FireActiveStatusEffectEvent(FName statusEffectId, float percentage, int iconFilePathIndex, int LevelToDisplay){}
	void ADBDPlayerState::Client_SetInParadise(){}
	void ADBDPlayerState::Client_SetGameRole(EPlayerRole newRole){}
	void ADBDPlayerState::Client_RemoveItemFromInventory(FName toRemove, bool UpdateLoadout){}
	void ADBDPlayerState::Client_RemotelyDispatchGameEvent(FGameplayTag gameEventType, FGameEventData GameEventData){}
	void ADBDPlayerState::Client_HandleEscapeScoreEvent(){}
	void ADBDPlayerState::Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData ScoreEventData){}
	void ADBDPlayerState::Authority_ForceEndOngoingScoreEvent(EDBDScoreTypes scoreType){}
	void ADBDPlayerState::Authority_ForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType){}
	void ADBDPlayerState::Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag){}
	void ADBDPlayerState::Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag){}