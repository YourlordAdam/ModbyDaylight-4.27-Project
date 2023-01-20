// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Structs.h"
#include "Enums.h"
#include "GameFramework/PlayerState.h"
#include "DBDPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsId;                  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContentVersion;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPlayerReady;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole GameRole;                    
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class URitualHandlerComponent* RitualHandler;      
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class UActivityTrackerComponent* ActivityTracker;             
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class UDBDEmblemEvaluatorComponent* EmblemEvaluator;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterStateData CamperData;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterStateData SlasherData;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerStateData PlayerData;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerCustomization PlayerCustomization;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSkillCheckInteractionData SkillCheckInteractionData;   
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FScriptMulticastDelegate OnPlayerGameplayEvent;       
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FScriptMulticastDelegate OnGameStateChanged;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FScriptMulticastDelegate OnPlayergameStateChanged;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FAwardedScores> _awardedScoresByType;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUserGameStats _cachedUserGameStats;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOngoingScoreData> _ongoingScoreEvents;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDRecentGameplayEvents _recentGameplayEvents;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _inParadise;                 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class UGameplayNotificationManager* _gameplayNotificationManager;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class UAchievementHandlerComponent* _achievementHandler;    
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class UCharacterStatsHandlerComponent* _characterStatsHandler;      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _platformAccountId;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _selectedCamperIndex;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _selectedSlasherIndex;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlatformFlag _platform;                   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _crossplayAllowed;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _gameLevelLoaded;            



	UFUNCTION(BlueprintCallable)
	void UpdateSkillCheckInteractionData(float Progress);
	UFUNCTION(BlueprintCallable)
	void UpdateOngoingScores();
	UFUNCTION(BlueprintCallable)
	void SetSkillCheckInteractionData(FSkillCheckInteractionData skillCheckData);
	UFUNCTION(BlueprintCallable)
	void SetKillerJoiningState(EKillerJoiningState State);
	UFUNCTION(BlueprintCallable)
	void Server_SetSelectedCharacterId(EPlayerRole forRole, int ID, bool updateDisplayData);
	UFUNCTION(BlueprintCallable)
	void Server_SetPlayerGameState(EGameState newGameState);
	UFUNCTION(BlueprintCallable)
	void Server_SetGameRole(EPlayerRole newPlayerRole);
	UFUNCTION(BlueprintCallable)
	void Server_SelectSurvivor(int camperIndex);
	UFUNCTION(BlueprintCallable)
	void Server_SelectKiller(int slasherIndex);
	UFUNCTION(BlueprintCallable)
	void Server_KillerServerJoined(bool succeeded);
	UFUNCTION(BlueprintCallable)
	void Server_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData ScoreEventData);
	UFUNCTION(BlueprintCallable)
	void OnRep_DisplayData();
	UFUNCTION(BlueprintCallable)
	void OnRep_CustomizationData();
	UFUNCTION(BlueprintCallable)
	void Multicast_UpdateSkillCheckInteractionData(float Progress);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetSkillCheckInteractionData(FSkillCheckInteractionData skillCheckInteraction);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetSelectedCharacterId(EPlayerRole forRole, int ID, bool updateDisplayData);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetPlayerGameState(EGameState newGameState);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetInParadise();
	UFUNCTION(BlueprintCallable)
	void Multicast_SetAsLeftMatch();
	UFUNCTION(BlueprintCallable)
	void Multicast_SetAsDisconnected();
	UFUNCTION(BlueprintCallable)
	void Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* Target);
	UFUNCTION(BlueprintCallable)
	void Multicast_AwardScore(FAwardedScore AwardedScore);
	UFUNCTION(BlueprintCallable)
	EKillerJoiningState KillerJoiningState();
	UFUNCTION(BlueprintCallable)
	void InitializeAvailablePerkEvent(FName PerkId);
	UFUNCTION(BlueprintCallable)
	bool HasHappened(EDBDScoreTypes gameplayEventType, float maxSecondsAgo);
	UFUNCTION(BlueprintCallable)
	bool HasEscaped();
	UFUNCTION(BlueprintCallable)
	EGameState GetPlayerGameState();
	//UFUNCTION(BlueprintCallable)
	//UGameplayNotificationManager* GetGameplayNotificationManager();
	UFUNCTION(BlueprintCallable)
	void FireScoreEvent(EDBDScoreTypes scoreType, float PercentToAward);
	UFUNCTION(BlueprintCallable)
	void FireActiveStatusViewEvent(FName StatusViewID, FName uniqueSourceID, FStatusViewSource StatusViewSource);
	UFUNCTION(BlueprintCallable)
	void FireActiveStatusEffectEvent(FName statusEffectId, float percentage, int iconFilePathIndex, int LevelToDisplay);
	UFUNCTION(BlueprintCallable)
	void Client_SetInParadise();
	UFUNCTION(BlueprintCallable)
	void Client_SetGameRole(EPlayerRole newRole);
	UFUNCTION(BlueprintCallable)
	void Client_RemoveItemFromInventory(FName toRemove, bool UpdateLoadout);
	UFUNCTION(BlueprintCallable)
	void Client_RemotelyDispatchGameEvent(FGameplayTag gameEventType, FGameEventData GameEventData);
	UFUNCTION(BlueprintCallable)
	void Client_HandleEscapeScoreEvent();
	UFUNCTION(BlueprintCallable)
	void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData ScoreEventData);
	UFUNCTION(BlueprintCallable)
	void Authority_ForceEndOngoingScoreEvent(EDBDScoreTypes scoreType);
	UFUNCTION(BlueprintCallable)
	void Authority_ForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType);
	UFUNCTION(BlueprintCallable)
	void Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag);
	UFUNCTION(BlueprintCallable)
	void Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag);
};
