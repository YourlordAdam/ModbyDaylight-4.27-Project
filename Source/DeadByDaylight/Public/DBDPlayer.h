// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDBasePlayer.h"
#include "Sound/SoundCue.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "CustomizedAudioComponent.h"
#include "CustomizedSkeletalMesh.h"
#include "CharacterInventoryComponent.h"
#include "CharacterDreamworldComponent.h"
#include "CharacterChaseVisualComponent.h"
#include "SpecialEventSpawnerComponent.h"
#include "PlayerGameRelevancyComponent.h"
#include "CameraHandlerComponent.h"
#include "ChargeableComponent.h"
#include "PollableEventListener.h"
#include "ChaseComponent.h"
#include "ZoneDetectorComponent.h"
#include "InteractionDefinition.h"
#include "AuthoritativeMovementComponent.h"
#include "AudioFXComponent.h"
#include "BlindableComponent.h"
#include "BlindingFXComponent.h"
#include "PlayerPerspectiveComponent.h"
#include "CharacterSightableComponent.h"
#include "CharacterSightComponent.h"
#include "InteractionDetectorComponent.h"
#include "ClippableProviderComponent.h"
#include "StateMachine.h"
#include "MontagePlayer.h"
#include "Collectable.h"
#include "ItemModifier.h"
#include "ItemAddon.h"
#include "StatusEffect.h"
#include "PlayerInteractionHandler.h"
#include "CamperInteractable.h"
#include "DBDPlayerData.h"
#include "DBDPlayerState.h"
#include "DBDPlayerController.h"
#include "DBDPlayerCameraManager.h"
//#include "CamperPlayer.h"
#include "Interactor.h"
#include "PerkManager.h"
#include "AxisFlickMasher.h"
#include "InputMasher.h"
#include "Structs.h"
#include "Enums.h"
#include "DBDPlayer.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayer : public ADBDBasePlayer
{
	GENERATED_BODY()
public:	

             
	//DELEGATE FScriptMulticastDelegate OnLocallyObservedChangedForPlayer;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;                                     
	// GFXUtilities.             UMaterialHelper* MaterialHelper;                                         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* Interactable;                          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowInterrupting;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinFallHeight;                       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInterruptable;                      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowNavigationInput;                 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowNavigationBackwardInput;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowTurningInput;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowPitchInput;                      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowStrafeInput;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PitchLimitLower;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PitchLimitUpper;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StrafingOffset;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PelvisHeight;                        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PelvisHeightForPounceOnStandingCamper;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)      
	float PelvisHeightForPounceOnCrouchingCamper;     
	// DELEGATE       FScriptMulticastDelegate Authority_OnAttackedDelegate;               
	// DELEGATE       FScriptMulticastDelegate OnDamageTargetDelegate;                     
	// DELEGATE       FScriptMulticastDelegate OnSensed;                                   
	// DELEGATE       FScriptMulticastDelegate OnAnimNotify_Pickup;                        
	// DELEGATE       FScriptMulticastDelegate OnAnimNotify_Release;                       
	// DELEGATE       FScriptMulticastDelegate OnSecondaryActionInput;                     
	// DELEGATE       FScriptMulticastDelegate OnFirstPersonModeChanged;                   
	// DELEGATE       FScriptMulticastDelegate OnDreamworldComponentSet;                   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* CameraBoom;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForceDisableFootIK;                   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForceSkillChecks;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform IKLeftHandTransform;            
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform IKRightHandTransform;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraResetSpeed;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* BlinkFOVCurve;                
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentBlinkDistance;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentBlinkChargePercent;                  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageSpeedBufferTime;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AlmostCurrentSpeedBufferTime;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* GamepadYawCurve;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* GamepadPitchCurve;            
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	// DELEGATE     FScriptMulticastDelegate OnIsCrouchedChanged;                        
	// DELEGATE     FScriptMulticastDelegate OnRunningAndMovingChanged;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCharacterInventoryComponent* _characterInventoryComponent;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CarryJointName;                          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackPounceCurves;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackLungeCurves;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackSlashCurves;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackChainsawCurves; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackBlinkCurves;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackAmbushCurves;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackChargedDashCurves;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UCurveFloat*> AttackFrenzyCurves;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pitchOffsetForInteractionPriority;         
	//from GameplayUtilities    UBoxOcclusionQueryComponent* _renderedPixelCounter;                      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInteracting;                            
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearPathTestRadiusMultiplier;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearPathTestHeightMultiplier;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationClearTestRadiusMultiplier;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationClearTestHeightMultiplier;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearPathTestStepHeight;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GamePadTurnRate;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GamePadLookUpRate;                   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseTurnSpeedMultiplier;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseLookUpSpeedMultiplier;                 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundCue* DeathSound;                         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECamperState CurrentCamperState;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CollectableAttachPoint;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOffering> _offerings;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStateMachine* _SM;                        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPlayerInteractionHandler* _interactionHandler;                        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMontagePlayer* _montagePlayer;                
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPerkManager* _perkManager;                
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDBDPlayerData* _playerData;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAxisFlickMasher* _wiggleAxisFlickMasher;  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputMasher* _interactInputMasher;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACamperInteractable* _interactable;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ADBDPlayer*> _overlappingPlayers;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* _guidingPlayer;                
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* _interactingPlayer;            
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _nextAttackSubstate;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<ADBDPlayer> _lockOnTarget;  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<ADBDPlayer> _hitTarget;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCharacterDreamworldComponent* _dreamworldComponent;                       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCharacterChaseVisualComponent* _characterChaseVisualComponent;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraHandlerComponent* _cameraHandlerComponent;                    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpecialEventSpawnerComponent* _specialEventSpawnerComponent;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* _itemDropOffPosition;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> _ignoreActors;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> _ignoreBelowActors;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> _overlappingActors;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEffectCameraTypeSettings> EffectCameraTypeSettings;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UChargeableComponent* _blindingChargeableComponent;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPollableEventListener* _eventListener;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UChaseComponent* _chaseComponent;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UZoneDetectorComponent* _meatHookZoneDetector;                      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UZoneDetectorComponent* _basementZoneDetector;                      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _framesForSlasherAutoAttackOnCamperInteract;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _framesForSlasherAutoAttack;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInteractionDefinition* _bookmarkedInteraction;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EDetectionZone, UPrimitiveComponent*> _detectionZoneMap;                          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAuthoritativeMovementComponent* _authoritativeMovementComponent;            
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _screenAspectRatio;                      
	
	//UGameplayTagContainerComponent* _objectState;                               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioFXComponent* _audioFXComponent;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlindableComponent* _blindableComponent;  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlindingFXComponent* _blindFxComponent;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPlayerPerspectiveComponent* _playerPerspectiveComponent;                
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCharacterSightComponent* _characterSightComponent;                   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCharacterSightableComponent* _characterSightableComponent;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInteractionDetectorComponent* _interactionDetectorComponent;              
	//UPrimitivesRegistererComponent* _clippablePrimitivesRegistererComponent; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClippableProviderComponent* _clippableProviderComponent;
	//UDynamicCapsuleResizerComponent* _dynCapsuleResizer;                         
	UPlayerGameRelevancyComponent* _playerGameRelevancyComponent;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UActorComponent* _questEventHandler;           
	
	//UInterpolatedMovementInputStrategy* _movementInputStrategy;           


	UFUNCTION(BlueprintCallable)
	void UpdateLoadoutFromInventory();
	UFUNCTION(BlueprintCallable)
	bool TryInteractionType(EInputInteractionType interactionInputType,  ADBDPlayer* Requester, bool usingInputPersistence);
	UFUNCTION(BlueprintCallable)
	bool TryInteraction( UInteractionDefinition* Interaction,  ADBDPlayer* Requester, bool force, bool usingInputPersistence);
	UFUNCTION(BlueprintCallable)
	bool TryFireScoreEvent(EDBDScoreTypes scoreType, float PercentToAward);
	UFUNCTION(BlueprintCallable)
	void TriggerTrapImmunity(float Duration);
	UFUNCTION(BlueprintCallable)
	void TriggerAnimNotify(EAnimNotifyType animNotifyType);
	UFUNCTION(BlueprintCallable)
	void ToggleGhost();
	UFUNCTION(BlueprintCallable)
	bool TeleportToBP( FVector DestLocation,  FRotator DestRotation, bool bIsATest, bool bNoCheck);
	UFUNCTION(BlueprintCallable)
	void StopSnap(bool snap);
	UFUNCTION(BlueprintCallable)
	void StopMontage();
	UFUNCTION(BlueprintCallable)
	void StopAllMovement();
	UFUNCTION(BlueprintCallable)
	void SnapCharacter(bool snapPosition,  FVector Position, float stopSnapDistance, bool snapRotation,  FRotator Rotation, float Time, bool useZCoord, bool sweepOnFinalSnap);
	UFUNCTION(BlueprintCallable)
	bool ShouldPlayCarryAnim();
	UFUNCTION(BlueprintCallable)
	bool ShouldFall();
	UFUNCTION(BlueprintCallable)
	void SetYawScale(float yawScale, float adjustTime);
	UFUNCTION(BlueprintCallable)
	void SetWorldCollisionResponse(ECollisionResponse response);
	UFUNCTION(BlueprintCallable)
	void SetShouldPlayCarryAnim(bool ShouldPlayCarryAnim);
	UFUNCTION(BlueprintCallable)
	void SetRightFootAudioSurfaceName( FString Name);
	UFUNCTION(BlueprintCallable)
	void SetReverseMontage(bool Reverse);
	UFUNCTION(BlueprintCallable)
	void SetQuestEventHandlerComponent( UActorComponent* Component);
	UFUNCTION(BlueprintCallable)
	void SetPlayerDirection( FRotator Rotation);
	UFUNCTION(BlueprintCallable)
	void SetPitchScale(float pitchScale, float adjustTime);
	UFUNCTION(BlueprintCallable)
	void SetPawnAuthoritativeMovement(bool authoritative);
	UFUNCTION(BlueprintCallable)
	void SetLeftFootAudioSurfaceName( FString Name);
	UFUNCTION(BlueprintCallable)
	void SetItemUseAsToggle(bool value);
	UFUNCTION(BlueprintCallable)
	void SetIsCloaked(bool IsCloaked, bool Forced);
	UFUNCTION(BlueprintCallable)
	void SetInParadise(bool InParadise);
	UFUNCTION(BlueprintCallable)
	void SetIgnoreActorCollision( AActor* ActorToIgnore, bool ignore);
	UFUNCTION(BlueprintCallable)
	void SetGuidingPlayer( ADBDPlayer* guidingPlayer);
	UFUNCTION(BlueprintCallable)
	void SetForceDisableSkillChecks(bool IsEnabled);
	UFUNCTION(BlueprintCallable)
	void SetFirstPersonVfxsVisibility(bool isFirstPerson);
	UFUNCTION(BlueprintCallable)
	void SetFirstPersonModelEnabled(bool Enabled, bool force);
	UFUNCTION(BlueprintCallable)
	void SetFeetOnGround(bool feetOnGround);
	UFUNCTION(BlueprintCallable)
	void SetEthereal(bool Enabled, bool allowOverlaps);
	UFUNCTION(BlueprintCallable)
	void SetEnableServerPositionUpdates(bool enable);
	UFUNCTION(BlueprintCallable)
	void SetEmulateGamepadForMouseYaw(bool emulate);
	UFUNCTION(BlueprintCallable)
	void SetEmulateGamepadForMousePitch(bool emulate);
	UFUNCTION(BlueprintCallable)
	void SetDetectionZoneEnabled(EDetectionZone detectionZoneID, bool Enabled);
	UFUNCTION(BlueprintCallable)
	void SetCurrentInteractionAnimation(EInteractionAnimation Animation);
	UFUNCTION(BlueprintCallable)
	void SetCharacterAudioSurfaceName( FString Name);
	UFUNCTION(BlueprintCallable)
	void SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flagIndex, bool Enabled);
	UFUNCTION(BlueprintCallable)
	void SetAnimationCrouchState(bool crouched);
	UFUNCTION(BlueprintCallable)
	void SetAllowNavigation(bool enable);
	UFUNCTION(BlueprintCallable)
	void SetAllDetectionZonesEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void ServerResetMeshRelativeOffSet();
	UFUNCTION(BlueprintCallable)
	void Server_UpdateScreenAspectRatio(float value);
	UFUNCTION(BlueprintCallable)
	void Server_TeleportTo( FVector DestLocation,  FRotator DestRotation, bool bIsATest, bool bNoCheck);
	UFUNCTION(BlueprintCallable)
	void Server_SpawnItemAddon( FName addonID);
	UFUNCTION(BlueprintCallable)
	void Server_SpawnItem( FName ItemId);
	UFUNCTION(BlueprintCallable)
	void Server_SetSlasherAutoAttackOnCamperInteractFrameDelay(int Frames);
	UFUNCTION(BlueprintCallable)
	void Server_SetSlasherAutoAttackFrameDelay(int Frames);
	UFUNCTION(BlueprintCallable)
	void Server_SetRunVaultEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetReverseTraverseEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetMaxWalkSpeed(float MaxWalkSpeed);
	UFUNCTION(BlueprintCallable)
	void Server_SetForceAuthoritativeMovement(bool value);
	UFUNCTION(BlueprintCallable)
	void Server_SetEthereal(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetEnableServerPositionUpdates(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetEnableCapsuleDynamicResize(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetDebugSnapPoint(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetDebugPrintAvailableInteractions(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetDebugFailAllInteractions(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetDebugCarry(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetCustomization(TArray<FName> customizationParts, TArray<FCharmIdSlot> customizationCharms);
	UFUNCTION(BlueprintCallable)
	void Server_SetContinuousPrintDebug(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SetAuthoritativeMovement(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Server_SendSecondaryActionPressed();
	UFUNCTION(BlueprintCallable)
	void Server_SendItemUseInput(bool pressed);
	UFUNCTION(BlueprintCallable)
	void Server_SendItemUse(bool Use);
	UFUNCTION(BlueprintCallable)
	void Server_SendItemDropInput(bool pressed);
	UFUNCTION(BlueprintCallable)
	void Server_SendInteractionInput(bool pressed);
	UFUNCTION(BlueprintCallable)
	void Server_SendFastInteractionInput(bool pressed);
	UFUNCTION(BlueprintCallable)
	void Server_SendAbilityInput(bool pressed);
	UFUNCTION(BlueprintCallable)
	void Server_RemoveStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID);
	UFUNCTION(BlueprintCallable)
	void Server_PlayerReady();
	UFUNCTION(BlueprintCallable)
	void Server_OnInsaneSkillCheck();
	UFUNCTION(BlueprintCallable)
	void Server_Ghost(bool Ghost);
	UFUNCTION(BlueprintCallable)
	void Server_FailInterruption( ADBDPlayer* interruptee);
	UFUNCTION(BlueprintCallable)
	void Server_EndStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID);
	UFUNCTION(BlueprintCallable)
	void Server_Drop(ACollectable* Item,  FVector Location,  FRotator Rotation, bool onDeath);
	UFUNCTION(BlueprintCallable)
	void Server_CheatDispatchOnPostItemAddonsCreation();
	UFUNCTION(BlueprintCallable)
	void Server_Cheat();
	UFUNCTION(BlueprintCallable)
	void SecondaryActionInputPressed();
	UFUNCTION(BlueprintCallable)
	void ResetYawScale(float adjustTime);
	UFUNCTION(BlueprintCallable)
	void ResetPitchScale(float adjustTime);
	UFUNCTION(BlueprintCallable)
	void ResetMeshRelativeRotation();
	UFUNCTION(BlueprintCallable)
	void ResetMeshRelativePosition();
	UFUNCTION(BlueprintCallable)
	void ResetCamera();
	UFUNCTION(BlueprintCallable)
	void RemoveStatusEffect(UStatusEffect* StatusEffect);
	UFUNCTION(BlueprintCallable)
	void Remotely_HandleScoreEvent(FGameplayTag scoreTypeTag,  FScoreEventData ScoreEventData);
	UFUNCTION(BlueprintCallable)
	UAnimMontage* PlayMontage(FAnimationMontageDescriptor animMontageID, float PlayRate, bool isFollower);
	UFUNCTION(BlueprintCallable)
	void OnRep_Interactable();
	UFUNCTION(BlueprintCallable)
	void OnRep_DreamworldComponent();
	UFUNCTION(BlueprintCallable)
	void OnPickupStart(ADBDPlayer* Target);
	UFUNCTION(BlueprintCallable)
	void OnPickupEnd(ADBDPlayer* Target);
	UFUNCTION(BlueprintCallable)
	void OnPawnDetectorOverlapExit( UPrimitiveComponent* HitComponent,  AActor* OtherActor,  UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	UFUNCTION(BlueprintCallable)
	void OnPawnDetectorOverlapEnter( UPrimitiveComponent* HitComponent,  AActor* OtherActor,  UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep,  FHitResult SweepResult);
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();
	UFUNCTION(BlueprintCallable)
	void OnIsCrouchedChanged__DelegateSignature(bool isCrouched);
	UFUNCTION(BlueprintCallable)
	void OnIntroCompletedNative();
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();
	UFUNCTION(BlueprintCallable)
	void OnInterruptedStart();
	UFUNCTION(BlueprintCallable)
	void OnInsaneSkillCheck();
	UFUNCTION(BlueprintCallable)
	void OnHeadHidden(bool hidden);
	UFUNCTION(BlueprintCallable)
	FString OnGetCharacterName();
	UFUNCTION(BlueprintCallable)
	void OnEscapeDoorActivated();
	UFUNCTION(BlueprintCallable)
	void OnCurrentMontageComplete( UAnimMontage* MontageAsset, bool interrupted);
	UFUNCTION(BlueprintCallable)
	void OnCurrentMontageBlendingOut( UAnimMontage* MontageAsset, bool interrupted);
	UFUNCTION(BlueprintCallable)
	void OnClientRestart();
	UFUNCTION(BlueprintCallable)
	void OnBlindChargeEmptied();
	UFUNCTION(BlueprintCallable)
	void OnAttackStarted(EAttackType attackType);
	UFUNCTION(BlueprintCallable)
	void OnAttackFinished(EAttackType attackType);
	UFUNCTION(BlueprintCallable)
	void OnAnimInstanceChanged();
	UFUNCTION(BlueprintCallable)
	void OnAllPlayerLoaded();
	UFUNCTION(BlueprintCallable)
	void Multicast_SetRunVaultEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetReverseTraverseEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetMaxWalkSpeed(float MaxWalkSpeed);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetInteractingPlayer( ADBDPlayer* interactingPlayer);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetForceAuthoritativeMovement(bool value);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetEthereal(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetEnableServerPositionUpdates(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetEnableCapsuleDynamicResize(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetDebugSnapPoint(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetDebugPrintAvailableInteractions(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetDebugCarry(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetCustomization(TArray< FName> customizationParts, TArray< FCharmIdSlot> customizationCharms);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetContinuousPrintDebug(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_SetAuthoritativeMovement(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void Multicast_ServerResetMeshRelativeOffSet();
	UFUNCTION(BlueprintCallable)
	void Multicast_RequestAttackSubstateChange(EAttackSubstate attackSubstate);
	UFUNCTION(BlueprintCallable)
	void Multicast_PlayMontage( FAnimationMontageDescriptor animMontageID, float PlayRate);
	UFUNCTION(BlueprintCallable)
	void Multicast_OnInsaneSkillCheck();
	UFUNCTION(BlueprintCallable)
	void Multicast_LockOnTarget( ADBDPlayer* Target);
	UFUNCTION(BlueprintCallable)
	void Multicast_LeaveGame( FGuid uniqueLeavingPlayerId);
	UFUNCTION(BlueprintCallable)
	void Multicast_InteractionRollResult(bool rollResult);
	UFUNCTION(BlueprintCallable)
	void Multicast_HitTarget( ADBDPlayer* Target, EAttackType attackType);
	UFUNCTION(BlueprintCallable)
	void Multicast_Ghost(bool Ghost);
	UFUNCTION(BlueprintCallable)
	void Multicast_ConfirmItemDrop(bool pressed);
	UFUNCTION(BlueprintCallable)
	void Multicast_AttackBegin(EAttackType attackType);
	UFUNCTION(BlueprintCallable)
	void Local_RequestBlink( FTransform destination);
	UFUNCTION(BlueprintCallable)
	void Local_NotifyMatchEnded();
	UFUNCTION(BlueprintCallable)
	bool LineTraceSingleForFootIK( FVector Start,  FVector End, bool traceComplex,  FHitResult OutHit);
	UFUNCTION(BlueprintCallable)
	bool K2_SetActorLocationByBottomCapsule( FVector NewLocation, bool bSweep,  FHitResult SweepHitResult);
	UFUNCTION(BlueprintCallable)
	void ItemUseReleased();
	UFUNCTION(BlueprintCallable)
	void ItemUsePressed();
	UFUNCTION(BlueprintCallable)
	void ItemDropReleased();
	UFUNCTION(BlueprintCallable)
	void ItemDropPressed();
	UFUNCTION(BlueprintCallable)
	bool IsStrafing();
	UFUNCTION(BlueprintCallable)
	bool IsSnappingRotation();
	UFUNCTION(BlueprintCallable)
	bool IsSnappingPosition();
	UFUNCTION(BlueprintCallable)
	bool IsSnapping();
	UFUNCTION(BlueprintCallable)
	bool IsRunningAndMoving();
	UFUNCTION(BlueprintCallable)
	bool IsRunning();
	UFUNCTION(BlueprintCallable)
	bool IsPlayingMontage( FAnimationMontageDescriptor animMontageID);
	UFUNCTION(BlueprintCallable)
	bool IsPlayingAnyMontage();
	UFUNCTION(BlueprintCallable)
	bool IsLocationClear( FVector targetPosition);
	UFUNCTION(BlueprintCallable)
	bool IsLocallyObserved();
	UFUNCTION(BlueprintCallable)
	bool IsKiller();
	UFUNCTION(BlueprintCallable)
	bool IsInTerrorRadius();
	UFUNCTION(BlueprintCallable)
	bool IsInteractionInputPressed(EInputInteractionType InteractionType);
	UFUNCTION(BlueprintCallable)
	bool IsInStalkMode();
	UFUNCTION(BlueprintCallable)
	bool IsInsideCloset();
	UFUNCTION(BlueprintCallable)
	bool IsInParadise();
	UFUNCTION(BlueprintCallable)
	bool IsInMeathookZone();
	UFUNCTION(BlueprintCallable)
	bool IsIncapacitated();
	UFUNCTION(BlueprintCallable)
	bool IsInBasement();
	UFUNCTION(BlueprintCallable)
	bool IsHeadHidden();
	UFUNCTION(BlueprintCallable)
	bool IsFacing( FVector Direction);
	UFUNCTION(BlueprintCallable)
	bool IsExhausted();
	UFUNCTION(BlueprintCallable)
	bool IsCrouchPressed();
	UFUNCTION(BlueprintCallable)
	bool IsCrouching();
	UFUNCTION(BlueprintCallable)
	bool IsCloaked();
	UFUNCTION(BlueprintCallable)
	bool IsCamper();
	UFUNCTION(BlueprintCallable)
	bool IsBeingInterrupted();
	UFUNCTION(BlueprintCallable)
	bool IsAllowedNavigation();
	UFUNCTION(BlueprintCallable)
	bool IsAIControlled();
	UFUNCTION(BlueprintCallable)
	void InteractionInputReleased();
	UFUNCTION(BlueprintCallable)
	void InteractionInputPressed();
	UFUNCTION(BlueprintCallable)
	void Input_ToggleCrouch();
	UFUNCTION(BlueprintCallable)
	void HideHead(bool hide);
	UFUNCTION(BlueprintCallable)
	bool HasTrapImmunity();
	UFUNCTION(BlueprintCallable)
	bool HasMoveInput();
	UFUNCTION(BlueprintCallable)
	bool HasDamageImmunity();
	UFUNCTION(BlueprintCallable)
	bool HasClearPathToTargetWithIgnore( FVector targetPosition, TArray< AActor*> ignoreActors);
	UFUNCTION(BlueprintCallable)
	bool HasClearPathToTarget( FVector targetPosition);
	UFUNCTION(BlueprintCallable)
	bool HasClearPathToItemDropOffPosition();
	UFUNCTION(BlueprintCallable)
	bool HasAnimMontageEnded();
	UFUNCTION(BlueprintCallable)
	float GetTunableValue( FName Key, float defaultValue, bool warnIfRowMissing);
	UFUNCTION(BlueprintCallable)
	USpecialEventSpawnerComponent* GetSpecialEventSpawnerComponent();
	UFUNCTION(BlueprintCallable)
	bool GetRunVaultEnabled();
	UFUNCTION(BlueprintCallable)
	FString GetRightFootAudioSurfaceName();
	UFUNCTION(BlueprintCallable)
	bool GetReverseTraverseEnabled();
	UFUNCTION(BlueprintCallable)
	FRotator GetRepControlRotation();
	UFUNCTION(BlueprintCallable)
	float GetRemainingTrapImmunityDuration();
	UFUNCTION(BlueprintCallable)
	float GetProgressToEscapeCarry( ADBDPlayer* Player);
	UFUNCTION(BlueprintCallable)
	EPlayerRole GetPlayerRole();
	UFUNCTION(BlueprintCallable)
	UPlayerInteractionHandler* GetPlayerInteractionHandler();
	UFUNCTION(BlueprintCallable)
	FRotator GetPlayerDirection();
	UFUNCTION(BlueprintCallable)
	ADBDPlayerController* GetPlayerController();
	UFUNCTION(BlueprintCallable)
	UCameraComponent* GetPlayerCamera();
	//UFUNCTION(BlueprintCallable)
	//UBoxOcclusionQueryComponent GetPixelCounter();
	UFUNCTION(BlueprintCallable)
	UPerkManager* GetPerkManager();
	UFUNCTION(BlueprintCallable)
	float GetPercentPixelsVisible();
	UFUNCTION(BlueprintCallable)
	float GetPercentMovementSpeed();
	//UFUNCTION(BlueprintCallable)
	//UGameplayTagContainerComponent GetObjectState();
	UFUNCTION(BlueprintCallable)
	bool GetNearbyGroundLocation( FVector groundLocation);
	UFUNCTION(BlueprintCallable)
	FString GetNameDebugString();
	UFUNCTION(BlueprintCallable)
	UMontagePlayer* GetMontagePlayer();
	UFUNCTION(BlueprintCallable)
	FMontagePlaybackDefinition GetMontagePlaybackDefinition( FAnimationMontageDescriptor animMontageID, float PlayRate, bool isFollower);
	UFUNCTION(BlueprintCallable)
	float GetMontageLength( FAnimationMontageDescriptor animMontageID);
	UFUNCTION(BlueprintCallable)
	UAnimMontage* GetMontage( FAnimationMontageDescriptor animMontageID);
	UFUNCTION(BlueprintCallable)
	FVector GetMeshFeetPosition();
	UFUNCTION(BlueprintCallable)
	float GetMaxSpeed();
	UFUNCTION(BlueprintCallable)
	float GetLuck();
	UFUNCTION(BlueprintCallable)
	FString GetLeftFootAudioSurfaceName();
	UFUNCTION(BlueprintCallable)
	FVector GetLastSafeLocation();
	UFUNCTION(BlueprintCallable)
	TArray<UItemModifier*> GetItemModifiers();
	UFUNCTION(BlueprintCallable)
	USceneComponent* GetItemDropOffTransform();
	UFUNCTION(BlueprintCallable)
	TArray<UItemAddon*> GetItemAddons();
	UFUNCTION(BlueprintCallable)
	bool GetIsInterrupting();
	UFUNCTION(BlueprintCallable)
	bool GetIsInteracting();
	UFUNCTION(BlueprintCallable)
	bool GetIsInFirstPerson();
	UFUNCTION(BlueprintCallable)
	bool GetIsBeyondCrouchWalkSpeed();
	UFUNCTION(BlueprintCallable)
	bool GetInteractionRollResult();
	UFUNCTION(BlueprintCallable)
	FInteractionPlayerProperties GetInteractionPlayerProperties();
	UFUNCTION(BlueprintCallable)
	UInteractionDetectorComponent* GetInteractionDetectorComponent();
	UFUNCTION(BlueprintCallable)
	AInteractable* GetInteractable();
	UFUNCTION(BlueprintCallable)
	ADBDPlayer* GetGuidingPlayer();
	UFUNCTION(BlueprintCallable)
	float GetGrassEffectRadiusMultiplier();
	UFUNCTION(BlueprintCallable)
	bool GetForceDisableSkillChecks();
	UFUNCTION(BlueprintCallable)
	UActorComponent* GetFirstComponentBy( UClass* Component);
	UFUNCTION(BlueprintCallable)
	FVector GetFeetPositionAtTargetLocation( FVector Location);
	UFUNCTION(BlueprintCallable)
	FVector GetFeetPosition();
	UFUNCTION(BlueprintCallable)
	bool GetFeetOnGround();
	UFUNCTION(BlueprintCallable)
	bool GetEnableServerPositionUpdates();
	UFUNCTION(BlueprintCallable)
	UCharacterDreamworldComponent* GetDreamworldComponent();
	UFUNCTION(BlueprintCallable)
	UPrimitiveComponent* GetDetectionZone(EDetectionZone detectionZoneID);
	UFUNCTION(BlueprintCallable)
	bool GetDebugPrintAvailableInteractions();
	UFUNCTION(BlueprintCallable)
	bool GetDebugFailAllInteractions();
	UFUNCTION(BlueprintCallable)
	ADBDPlayerState* GetDBDPlayerState();
	UFUNCTION(BlueprintCallable)
	UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
	UFUNCTION(BlueprintCallable)
	UCustomizedAudioComponent* GetCustomizedAudio();
	UFUNCTION(BlueprintCallable)
	EInteractionAnimation GetCurrentInteractionAnimation();
	UFUNCTION(BlueprintCallable)
	UInteractionDefinition* GetCurrentInteraction();
	UFUNCTION(BlueprintCallable)
	EAttackType GetCurrentAttackType();
	UFUNCTION(BlueprintCallable)
	bool GetContinuousPrintDebug();
	UFUNCTION(BlueprintCallable)
	UChaseComponent* GetChaseComponent();
	UFUNCTION(BlueprintCallable)
	UCharacterInventoryComponent* GetCharacterInventoryComponent();
	UFUNCTION(BlueprintCallable)
	FString GetCharacterAudioSurfaceName();
	UFUNCTION(BlueprintCallable)
	FVector GetCapsuleTopPosition();
	UFUNCTION(BlueprintCallable)
	FVector GetCapsuleBottomPosition();
	UFUNCTION(BlueprintCallable)
	ADBDPlayerCameraManager* GetCameraManager();
	UFUNCTION(BlueprintCallable)
	float GetCameraCharacterYawDiff();
	UFUNCTION(BlueprintCallable)
	FVector GetBoneRelativeLocation(FName targetBone,  FName relativeBone);
	//UFUNCTION(BlueprintCallable)
	//FVector GetBoneLocation(FName Name, EBoneSpaces space);
	UFUNCTION(BlueprintCallable)
	float GetBlinkTime();
	UFUNCTION(BlueprintCallable)
	UBlindableComponent* GetBlindableComponent();
	UFUNCTION(BlueprintCallable)
	float GetBaseFOV();
	UFUNCTION(BlueprintCallable)
	FVector GetAverageVelocity();
	UFUNCTION(BlueprintCallable)
	UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent();
	//UFUNCTION(BlueprintCallable)
	//UAkComponent GetAudioComponent();
	UFUNCTION(BlueprintCallable)
	EAttackType GetAttackMontageEvent();
	UFUNCTION(BlueprintCallable)
	USceneComponent* GetAttachPoint( FName attachPointName);
	UFUNCTION(BlueprintCallable)
	void GetAnimTags(TArray< FName> outTags);
	UFUNCTION(BlueprintCallable)
	UAnimInstance* GetAnimInstance();
	UFUNCTION(BlueprintCallable)
	FAnimData GetAnimData();
	UFUNCTION(BlueprintCallable)
	FVector GetAlmostCurrentVelocity();
	UFUNCTION(BlueprintCallable)
	FVector GetActorLocationFromFeetLocation( FVector FeetLocation);
	UFUNCTION(BlueprintCallable)
	FVector FindFurthestClearLocationBetweenPoints( FVector startPosition,  FVector targetPosition);
	UFUNCTION(BlueprintCallable)
	ADBDPlayer* FindClosestSlashablePlayerInDetectionZone(EDetectionZone detectionZoneID);
	UFUNCTION(BlueprintCallable)
	void FastInteractionInputReleased();
	UFUNCTION(BlueprintCallable)
	void FastInteractionInputPressed();
	UFUNCTION(BlueprintCallable)
	void Dissolve(bool Dissolve);
	UFUNCTION(BlueprintCallable)
	void DetachInteractor();
	UFUNCTION(BlueprintCallable)
	void DebugPrint( FString inString);
	UFUNCTION(BlueprintCallable)
	void DeactivateSkillChecks();
	UFUNCTION(BlueprintCallable)
	void DBDUnCrouch();
	UFUNCTION(BlueprintCallable)
	void DBDLog( FString LogText);
	UFUNCTION(BlueprintCallable)
	void DBDCrouch();
	UFUNCTION(BlueprintCallable)
	void DBD_TogglePrintServerPositionUpdateEnabled();
	UFUNCTION(BlueprintCallable)
	void DBD_ToggleForceAuthoritativeMovement();
	UFUNCTION(BlueprintCallable)
	void DBD_ToggleDebugInteractionInZone();
	UFUNCTION(BlueprintCallable)
	void DBD_SetMouseTurnSpeedMultiplier(float value);
	UFUNCTION(BlueprintCallable)
	void DBD_SetMouseLookUpSpeedMultiplier(float value);
	UFUNCTION(BlueprintCallable)
	void DBD_SetGamePadTurnRate(float value);
	UFUNCTION(BlueprintCallable)
	void DBD_SetGamePadLookUpRate(float value);
	UFUNCTION(BlueprintCallable)
	void DBD_DebugStartInteraction();
	UFUNCTION(BlueprintCallable)
	void Client_TryInteractionType(EInputInteractionType InteractionType,  ADBDPlayer* Requester);
	UFUNCTION(BlueprintCallable)
	void Client_SendCancelInteraction();
	UFUNCTION(BlueprintCallable)
	void Client_QueueInteraction(EInputInteractionType InteractionType,  ADBDPlayer* Requester, float queuedTimer);
	UFUNCTION(BlueprintCallable)
	void Client_ClearInteractionQueue();
	UFUNCTION(BlueprintCallable)
	bool CanInterrupt_BP();
	UFUNCTION(BlueprintCallable)
	bool CanInteractWithItems();
	UFUNCTION(BlueprintCallable)
	bool CanInteract();
	UFUNCTION(BlueprintCallable)
	void CancelCarry(bool alsoCancelForOtherPlayer);
	UFUNCTION(BlueprintCallable)
	bool CanBeBlinded();
	UFUNCTION(BlueprintCallable)
	void CameraUpdated();
	UFUNCTION(BlueprintCallable)
	void Broadcast_Server_RequestAttackSubstateChange(EAttackSubstate attackSubstate);
	UFUNCTION(BlueprintCallable)
	void Broadcast_PlayMontage_Server( FAnimationMontageDescriptor animMontageID, float PlayRate);
	UFUNCTION(BlueprintCallable)
	void Broadcast_PlayMontage_Multicast( FAnimationMontageDescriptor animMontageID, float PlayRate);
	UFUNCTION(BlueprintCallable)
	void Broadcast_Multicast_RequestAttackSubstateChange(EAttackSubstate attackSubstate);
	UFUNCTION(BlueprintCallable)
	void Broadcast_Multicast_BlinkDestination( FVector Position,  FRotator Rotation);
	UFUNCTION(BlueprintCallable)
	void Broadcast_LockOnTarget_Server( ADBDPlayer* Target);
	UFUNCTION(BlueprintCallable)
	void Broadcast_LockOnTarget_Multicast( ADBDPlayer* Target);
	UFUNCTION(BlueprintCallable)
	void Broadcast_HitTarget_Server( ADBDPlayer* Target, EAttackType attackType);
	UFUNCTION(BlueprintCallable)
	void Broadcast_HitTarget_Multicast( ADBDPlayer* Target, EAttackType attackType);
	UFUNCTION(BlueprintCallable)
	void Broadcast_BlinkDestination( FVector Position,  FRotator Rotation);
	UFUNCTION(BlueprintCallable)
	bool Authority_TryForceEndOngoingScoreEvent(EDBDScoreTypes scoreType);
	UFUNCTION(BlueprintCallable)
	bool Authority_TryForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType);
	UFUNCTION(BlueprintCallable)
	void Authority_SetDreamworldComponent( UCharacterDreamworldComponent* Component);
	UFUNCTION(BlueprintCallable)
	void Authority_RequestStun(EStunType stunType,  ADBDPlayer* stunner);
	UFUNCTION(BlueprintCallable)
	void Authority_RemoveStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID);
	UFUNCTION(BlueprintCallable)
	UStatusEffect* Authority_ImposeStatusEffect( FName statusEffectId,  ADBDPlayer* originatingPlayer, float customParam,  UGameplayModifierContainer* originatingEffect, bool shouldDisplay);
	UFUNCTION(BlueprintCallable)
	UStatusEffect* Authority_ImposeDynamicStatusEffect( FName statusEffectId,  ADBDPlayer* originatingPlayer, float customParam,  UGameplayModifierContainer* originatingEffect);
	UFUNCTION(BlueprintCallable)
	void Authority_HandleScoreEvent( FGameplayTag scoreTypeTag,  FScoreEventData ScoreEventData);
	UFUNCTION(BlueprintCallable)
	void Authority_Flashlighted(TArray< AActor*> instigators);
	UFUNCTION(BlueprintCallable)
	void Authority_EvaluateIfPlayerCanSee();
	UFUNCTION(BlueprintCallable)
	void Authority_EndStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID);
	UFUNCTION(BlueprintCallable)
	void Authority_EndOngoingScoreEvent( FGameplayTag scoreTypeTag);
	UFUNCTION(BlueprintCallable)
	void Authority_CancelOngoingScoreEvent( FGameplayTag scoreTypeTag);
	UFUNCTION(BlueprintCallable)
	void Authority_AttemptEscapeCarry(class ACamperPlayer* Player);
	UFUNCTION(BlueprintCallable)
	void Authority_ActivateAuthoritativeMovementOnDropped();
	UFUNCTION(BlueprintCallable)
	void AttachInteractor(UInteractor* Interactor);
	UFUNCTION(BlueprintCallable)
	void AddDetectionZone(EDetectionZone detectionZoneID,  UPrimitiveComponent* zone);
	UFUNCTION(BlueprintCallable)
	void AbilityInputReleased();
	UFUNCTION(BlueprintCallable)
	void AbilityInputPressed();





	
	// Sets default values for this actor's properties
	ADBDPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
