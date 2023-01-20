// Fill out your copyright notice in the Description page of Project Settings.

#include "DBDPlayer.h"
// Sets default values
ADBDPlayer::ADBDPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADBDPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADBDPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

	void ADBDPlayer::UpdateLoadoutFromInventory(){}
	bool ADBDPlayer::TryInteractionType(EInputInteractionType interactionInputType,  ADBDPlayer* Requester, bool usingInputPersistence){return false;}
	bool ADBDPlayer::TryInteraction( UInteractionDefinition* Interaction,  ADBDPlayer* Requester, bool force, bool usingInputPersistence){return false;}
	bool ADBDPlayer::TryFireScoreEvent(EDBDScoreTypes scoreType, float PercentToAward){return false;}
	void ADBDPlayer::TriggerTrapImmunity(float Duration){}
	void ADBDPlayer::TriggerAnimNotify(EAnimNotifyType animNotifyType){}
	void ADBDPlayer::ToggleGhost(){}
	bool ADBDPlayer::TeleportToBP( FVector DestLocation,  FRotator DestRotation, bool bIsATest, bool bNoCheck){return false;}
	void ADBDPlayer::StopSnap(bool snap){}
	void ADBDPlayer::StopMontage(){}
	void ADBDPlayer::StopAllMovement(){}
	void ADBDPlayer::SnapCharacter(bool snapPosition,  FVector Position, float stopSnapDistance, bool snapRotation,  FRotator Rotation, float Time, bool useZCoord, bool sweepOnFinalSnap){}
	bool ADBDPlayer::ShouldPlayCarryAnim(){return false;}
	bool ADBDPlayer::ShouldFall(){return false;}
	void ADBDPlayer::SetYawScale(float yawScale, float adjustTime){}
	void ADBDPlayer::SetWorldCollisionResponse(ECollisionResponse response){}
	void ADBDPlayer::SetShouldPlayCarryAnim(bool ShouldPlayCarryAnim){}
	void ADBDPlayer::SetRightFootAudioSurfaceName( FString Name){}
	void ADBDPlayer::SetReverseMontage(bool Reverse){}
	void ADBDPlayer::SetQuestEventHandlerComponent( UActorComponent* Component){}
	void ADBDPlayer::SetPlayerDirection( FRotator Rotation){}
	void ADBDPlayer::SetPitchScale(float pitchScale, float adjustTime){}
	void ADBDPlayer::SetPawnAuthoritativeMovement(bool authoritative){}
	void ADBDPlayer::SetLeftFootAudioSurfaceName( FString Name){}
	void ADBDPlayer::SetItemUseAsToggle(bool value){}
	void ADBDPlayer::SetIsCloaked(bool IsCloaked, bool Forced){}
	void ADBDPlayer::SetInParadise(bool InParadise){}
	void ADBDPlayer::SetIgnoreActorCollision( AActor* ActorToIgnore, bool ignore){}
	void ADBDPlayer::SetGuidingPlayer( ADBDPlayer* guidingPlayer){}
	void ADBDPlayer::SetForceDisableSkillChecks(bool IsEnabled){}
	void ADBDPlayer::SetFirstPersonVfxsVisibility(bool isFirstPerson){}
	void ADBDPlayer::SetFirstPersonModelEnabled(bool Enabled, bool force){}
	void ADBDPlayer::SetFeetOnGround(bool feetOnGround){}
	void ADBDPlayer::SetEthereal(bool Enabled, bool allowOverlaps){}
	void ADBDPlayer::SetEnableServerPositionUpdates(bool enable){}
	void ADBDPlayer::SetEmulateGamepadForMouseYaw(bool emulate){}
	void ADBDPlayer::SetEmulateGamepadForMousePitch(bool emulate){}
	void ADBDPlayer::SetDetectionZoneEnabled(EDetectionZone detectionZoneID, bool Enabled){}
	void ADBDPlayer::SetCurrentInteractionAnimation(EInteractionAnimation Animation){}
	void ADBDPlayer::SetCharacterAudioSurfaceName( FString Name){}
	void ADBDPlayer::SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flagIndex, bool Enabled){}
	void ADBDPlayer::SetAnimationCrouchState(bool crouched){}
	void ADBDPlayer::SetAllowNavigation(bool enable){}
	void ADBDPlayer::SetAllDetectionZonesEnabled(bool Enabled){}
	void ADBDPlayer::ServerResetMeshRelativeOffSet(){}
	void ADBDPlayer::Server_UpdateScreenAspectRatio(float value){}
	void ADBDPlayer::Server_TeleportTo( FVector DestLocation,  FRotator DestRotation, bool bIsATest, bool bNoCheck){}
	void ADBDPlayer::Server_SpawnItemAddon( FName addonID){}
	void ADBDPlayer::Server_SpawnItem( FName ItemId){}
	void ADBDPlayer::Server_SetSlasherAutoAttackOnCamperInteractFrameDelay(int Frames){}
	void ADBDPlayer::Server_SetSlasherAutoAttackFrameDelay(int Frames){}
	void ADBDPlayer::Server_SetRunVaultEnabled(bool Enabled){}
	void ADBDPlayer::Server_SetReverseTraverseEnabled(bool Enabled){}
	void ADBDPlayer::Server_SetMaxWalkSpeed(float MaxWalkSpeed){}
	void ADBDPlayer::Server_SetForceAuthoritativeMovement(bool value){}
	void ADBDPlayer::Server_SetEthereal(bool Enabled){}
	void ADBDPlayer::Server_SetEnableServerPositionUpdates(bool Enabled){}
	void ADBDPlayer::Server_SetEnableCapsuleDynamicResize(bool Enabled){}
	void ADBDPlayer::Server_SetDebugSnapPoint(bool Enabled){}
	void ADBDPlayer::Server_SetDebugPrintAvailableInteractions(bool Enabled){}
	void ADBDPlayer::Server_SetDebugFailAllInteractions(bool Enabled){}
	void ADBDPlayer::Server_SetDebugCarry(bool Enabled){}
	void ADBDPlayer::Server_SetCustomization(TArray<FName> customizationParts, TArray<FCharmIdSlot> customizationCharms){}
	void ADBDPlayer::Server_SetContinuousPrintDebug(bool Enabled){}
	void ADBDPlayer::Server_SetAuthoritativeMovement(bool Enabled){}
	void ADBDPlayer::Server_SendSecondaryActionPressed(){}
	void ADBDPlayer::Server_SendItemUseInput(bool pressed){}
	void ADBDPlayer::Server_SendItemUse(bool Use){}
	void ADBDPlayer::Server_SendItemDropInput(bool pressed){}
	void ADBDPlayer::Server_SendInteractionInput(bool pressed){}
	void ADBDPlayer::Server_SendFastInteractionInput(bool pressed){}
	void ADBDPlayer::Server_SendAbilityInput(bool pressed){}
	void ADBDPlayer::Server_RemoveStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID){}
	void ADBDPlayer::Server_PlayerReady(){}
	void ADBDPlayer::Server_OnInsaneSkillCheck(){}
	void ADBDPlayer::Server_Ghost(bool Ghost){}
	void ADBDPlayer::Server_FailInterruption( ADBDPlayer* interruptee){}
	void ADBDPlayer::Server_EndStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID){}
	void ADBDPlayer::Server_Drop(ACollectable* Item,  FVector Location,  FRotator Rotation, bool onDeath){}
	void ADBDPlayer::Server_CheatDispatchOnPostItemAddonsCreation(){}
	void ADBDPlayer::Server_Cheat(){}
	void ADBDPlayer::SecondaryActionInputPressed(){}
	void ADBDPlayer::ResetYawScale(float adjustTime){}
	void ADBDPlayer::ResetPitchScale(float adjustTime){}
	void ADBDPlayer::ResetMeshRelativeRotation(){}
	void ADBDPlayer::ResetMeshRelativePosition(){}
	void ADBDPlayer::ResetCamera(){}
	void ADBDPlayer::RemoveStatusEffect(UStatusEffect* StatusEffect){}
	void ADBDPlayer::Remotely_HandleScoreEvent(FGameplayTag scoreTypeTag,  FScoreEventData ScoreEventData){}
	UAnimMontage* ADBDPlayer::PlayMontage(FAnimationMontageDescriptor animMontageID, float PlayRate, bool isFollower){return nullptr;}
	void ADBDPlayer::OnRep_Interactable(){}
	void ADBDPlayer::OnRep_DreamworldComponent(){}
	void ADBDPlayer::OnPickupStart(ADBDPlayer* Target){}
	void ADBDPlayer::OnPickupEnd(ADBDPlayer* Target){}
	void ADBDPlayer::OnPawnDetectorOverlapExit( UPrimitiveComponent* HitComponent,  AActor* OtherActor,  UPrimitiveComponent* OtherComp, int OtherBodyIndex){}
	void ADBDPlayer::OnPawnDetectorOverlapEnter( UPrimitiveComponent* HitComponent,  AActor* OtherActor,  UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep,  FHitResult SweepResult){}
	void ADBDPlayer::OnLocallyObservedChanged(){}
	void ADBDPlayer::OnLevelReadyToPlay(){}
	void ADBDPlayer::OnIsCrouchedChanged__DelegateSignature(bool isCrouched){}
	void ADBDPlayer::OnIntroCompletedNative(){}
	void ADBDPlayer::OnIntroCompleted(){}
	void ADBDPlayer::OnInterruptedStart(){}
	void ADBDPlayer::OnInsaneSkillCheck(){}
	void ADBDPlayer::OnHeadHidden(bool hidden){}
	FString ADBDPlayer::OnGetCharacterName(){return "";}
	void ADBDPlayer::OnEscapeDoorActivated(){}
	void ADBDPlayer::OnCurrentMontageComplete( UAnimMontage* MontageAsset, bool interrupted){}
	void ADBDPlayer::OnCurrentMontageBlendingOut( UAnimMontage* MontageAsset, bool interrupted){}
	void ADBDPlayer::OnClientRestart(){}
	void ADBDPlayer::OnBlindChargeEmptied(){}
	void ADBDPlayer::OnAttackStarted(EAttackType attackType){}
	void ADBDPlayer::OnAttackFinished(EAttackType attackType){}
	void ADBDPlayer::OnAnimInstanceChanged(){}
	void ADBDPlayer::OnAllPlayerLoaded(){}
	void ADBDPlayer::Multicast_SetRunVaultEnabled(bool Enabled){}
	void ADBDPlayer::Multicast_SetReverseTraverseEnabled(bool Enabled){}
	void ADBDPlayer::Multicast_SetMaxWalkSpeed(float MaxWalkSpeed){}
	void ADBDPlayer::Multicast_SetInteractingPlayer( ADBDPlayer* interactingPlayer){}
	void ADBDPlayer::Multicast_SetForceAuthoritativeMovement(bool value){}
	void ADBDPlayer::Multicast_SetEthereal(bool Enabled){}
	void ADBDPlayer::Multicast_SetEnableServerPositionUpdates(bool Enabled){}
	void ADBDPlayer::Multicast_SetEnableCapsuleDynamicResize(bool Enabled){}
	void ADBDPlayer::Multicast_SetDebugSnapPoint(bool Enabled){}
	void ADBDPlayer::Multicast_SetDebugPrintAvailableInteractions(bool Enabled){}
	void ADBDPlayer::Multicast_SetDebugCarry(bool Enabled){}
	void ADBDPlayer::Multicast_SetCustomization(TArray< FName> customizationParts, TArray< FCharmIdSlot> customizationCharms){}
	void ADBDPlayer::Multicast_SetContinuousPrintDebug(bool Enabled){}
	void ADBDPlayer::Multicast_SetAuthoritativeMovement(bool Enabled){}
	void ADBDPlayer::Multicast_ServerResetMeshRelativeOffSet(){}
	void ADBDPlayer::Multicast_RequestAttackSubstateChange(EAttackSubstate attackSubstate){}
	void ADBDPlayer::Multicast_PlayMontage( FAnimationMontageDescriptor animMontageID, float PlayRate){}
	void ADBDPlayer::Multicast_OnInsaneSkillCheck(){}
	void ADBDPlayer::Multicast_LockOnTarget( ADBDPlayer* Target){}
	void ADBDPlayer::Multicast_LeaveGame( FGuid uniqueLeavingPlayerId){}
	void ADBDPlayer::Multicast_InteractionRollResult(bool rollResult){}
	void ADBDPlayer::Multicast_HitTarget( ADBDPlayer* Target, EAttackType attackType){}
	void ADBDPlayer::Multicast_Ghost(bool Ghost){}
	void ADBDPlayer::Multicast_ConfirmItemDrop(bool pressed){}
	void ADBDPlayer::Multicast_AttackBegin(EAttackType attackType){}
	void ADBDPlayer::Local_RequestBlink( FTransform destination){}
	void ADBDPlayer::Local_NotifyMatchEnded(){}
	bool ADBDPlayer::LineTraceSingleForFootIK( FVector Start,  FVector End, bool traceComplex,  FHitResult OutHit){return false;}
	bool ADBDPlayer::K2_SetActorLocationByBottomCapsule( FVector NewLocation, bool bSweep,  FHitResult SweepHitResult){return false;}
	void ADBDPlayer::ItemUseReleased(){}
	void ADBDPlayer::ItemUsePressed(){}
	void ADBDPlayer::ItemDropReleased(){}
	void ADBDPlayer::ItemDropPressed(){}
	bool ADBDPlayer::IsStrafing(){return false;}
	bool ADBDPlayer::IsSnappingRotation(){return false;}
	bool ADBDPlayer::IsSnappingPosition(){return false;}
	bool ADBDPlayer::IsSnapping(){return false;}
	bool ADBDPlayer::IsRunningAndMoving(){return false;}
	bool ADBDPlayer::IsRunning(){return false;}
	bool ADBDPlayer::IsPlayingMontage( FAnimationMontageDescriptor animMontageID){return false;}
	bool ADBDPlayer::IsPlayingAnyMontage(){return false;}
	bool ADBDPlayer::IsLocationClear( FVector targetPosition){return false;}
	bool ADBDPlayer::IsLocallyObserved(){return false;}
	bool ADBDPlayer::IsKiller(){return false;}
	bool ADBDPlayer::IsInTerrorRadius(){return false;}
	bool ADBDPlayer::IsInteractionInputPressed(EInputInteractionType InteractionType){return false;}
	bool ADBDPlayer::IsInStalkMode(){return false;}
	bool ADBDPlayer::IsInsideCloset(){return false;}
	bool ADBDPlayer::IsInParadise(){return false;}
	bool ADBDPlayer::IsInMeathookZone(){return false;}
	bool ADBDPlayer::IsIncapacitated(){return false;}
	bool ADBDPlayer::IsInBasement(){return false;}
	bool ADBDPlayer::IsHeadHidden(){return false;}
	bool ADBDPlayer::IsFacing( FVector Direction){return false;}
	bool ADBDPlayer::IsExhausted(){return false;}
	bool ADBDPlayer::IsCrouchPressed(){return false;}
	bool ADBDPlayer::IsCrouching(){return false;}
	bool ADBDPlayer::IsCloaked(){return false;}
	bool ADBDPlayer::IsCamper(){return false;}
	bool ADBDPlayer::IsBeingInterrupted(){return false;}
	bool ADBDPlayer::IsAllowedNavigation(){return false;}
	bool ADBDPlayer::IsAIControlled(){return false;}
	void ADBDPlayer::InteractionInputReleased(){}
	void ADBDPlayer::InteractionInputPressed(){}
	void ADBDPlayer::Input_ToggleCrouch(){}
	void ADBDPlayer::HideHead(bool hide){}
	bool ADBDPlayer::HasTrapImmunity(){return false;}
	bool ADBDPlayer::HasMoveInput(){return false;}
	bool ADBDPlayer::HasDamageImmunity(){return false;}
	bool ADBDPlayer::HasClearPathToTargetWithIgnore( FVector targetPosition, TArray< AActor*> ignoreActors){return false;}
	bool ADBDPlayer::HasClearPathToTarget( FVector targetPosition){return false;}
	bool ADBDPlayer::HasClearPathToItemDropOffPosition(){return false;}
	bool ADBDPlayer::HasAnimMontageEnded(){return false;}
	float ADBDPlayer::GetTunableValue( FName Key, float defaultValue, bool warnIfRowMissing){return 0;}
	USpecialEventSpawnerComponent* ADBDPlayer::GetSpecialEventSpawnerComponent(){return nullptr;}
	bool ADBDPlayer::GetRunVaultEnabled(){return false;}	
	FString ADBDPlayer::GetRightFootAudioSurfaceName(){return "";}
	bool ADBDPlayer::GetReverseTraverseEnabled(){return false;}
	FRotator ADBDPlayer::GetRepControlRotation(){return FRotator();}
	float ADBDPlayer::GetRemainingTrapImmunityDuration(){return 0;}
	float ADBDPlayer::GetProgressToEscapeCarry( ADBDPlayer* Player){return 0;}
	EPlayerRole ADBDPlayer::GetPlayerRole(){return EPlayerRole::VE_None;}
	UPlayerInteractionHandler* ADBDPlayer::GetPlayerInteractionHandler(){return nullptr;}
	FRotator ADBDPlayer::GetPlayerDirection(){return FRotator();}
	ADBDPlayerController* ADBDPlayer::GetPlayerController(){return nullptr;}
	UCameraComponent* ADBDPlayer::GetPlayerCamera(){return nullptr;}
	//UBoxOcclusionQueryComponent* ADBDPlayer::GetPixelCounter(){return nullptr;}
	UPerkManager* ADBDPlayer::GetPerkManager(){return nullptr;}
	float ADBDPlayer::GetPercentPixelsVisible(){return 0;}
	float ADBDPlayer::GetPercentMovementSpeed(){return 0;}
	//UGameplayTagContainerComponent* GetObjectState(){return nullptr;}
	bool ADBDPlayer::GetNearbyGroundLocation( FVector groundLocation){return false;}
	FString ADBDPlayer::GetNameDebugString(){return "";}
	UMontagePlayer* ADBDPlayer::GetMontagePlayer(){return nullptr;}
	FMontagePlaybackDefinition ADBDPlayer::GetMontagePlaybackDefinition( FAnimationMontageDescriptor animMontageID, float PlayRate, bool isFollower){return FMontagePlaybackDefinition();}
	float ADBDPlayer::GetMontageLength( FAnimationMontageDescriptor animMontageID){return 0;}
	UAnimMontage* ADBDPlayer::GetMontage( FAnimationMontageDescriptor animMontageID){return nullptr;}
	FVector ADBDPlayer::GetMeshFeetPosition(){return FVector();}
	float ADBDPlayer::GetMaxSpeed(){return 0;}
	float ADBDPlayer::GetLuck(){return 0;}
	FString ADBDPlayer::GetLeftFootAudioSurfaceName(){return "";}
	FVector ADBDPlayer::GetLastSafeLocation(){return FVector();}
	TArray<UItemModifier*> ADBDPlayer::GetItemModifiers(){return {};}
	USceneComponent* ADBDPlayer::GetItemDropOffTransform(){return nullptr;}
	TArray<UItemAddon*> ADBDPlayer::GetItemAddons(){return {};}
	bool ADBDPlayer::GetIsInterrupting(){return false;}
	bool ADBDPlayer::GetIsInteracting(){return false;}
	bool ADBDPlayer::GetIsInFirstPerson(){return false;}
	bool ADBDPlayer::GetIsBeyondCrouchWalkSpeed(){return false;}
	bool ADBDPlayer::GetInteractionRollResult(){return false;}
	FInteractionPlayerProperties ADBDPlayer::GetInteractionPlayerProperties(){return FInteractionPlayerProperties();}
	UInteractionDetectorComponent* ADBDPlayer::GetInteractionDetectorComponent(){return nullptr;}
	AInteractable* ADBDPlayer::GetInteractable(){return nullptr;}
	ADBDPlayer* ADBDPlayer::GetGuidingPlayer(){return nullptr;}
	float ADBDPlayer::GetGrassEffectRadiusMultiplier(){return 0;}
	bool ADBDPlayer::GetForceDisableSkillChecks(){return false;}
	UActorComponent* ADBDPlayer::GetFirstComponentBy( UClass* Component){return nullptr;}
	FVector ADBDPlayer::GetFeetPositionAtTargetLocation( FVector Location){return FVector();}
	FVector ADBDPlayer::GetFeetPosition(){return FVector();}
	bool ADBDPlayer::GetFeetOnGround(){return false;}
	bool ADBDPlayer::GetEnableServerPositionUpdates(){return false;}
	UCharacterDreamworldComponent* ADBDPlayer::GetDreamworldComponent(){return nullptr;}
	UPrimitiveComponent* ADBDPlayer::GetDetectionZone(EDetectionZone detectionZoneID){return nullptr;}
	bool ADBDPlayer::GetDebugPrintAvailableInteractions(){return false;}
	bool ADBDPlayer::GetDebugFailAllInteractions(){return false;}
	ADBDPlayerState* ADBDPlayer::GetDBDPlayerState(){return nullptr;}
	UCustomizedSkeletalMesh* ADBDPlayer::GetCustomizedSkeletalMesh(){return nullptr;}
	UCustomizedAudioComponent* ADBDPlayer::GetCustomizedAudio(){return nullptr;}
	EInteractionAnimation ADBDPlayer::GetCurrentInteractionAnimation(){return EInteractionAnimation::VE_None;}
	UInteractionDefinition* ADBDPlayer::GetCurrentInteraction(){return nullptr;}
	EAttackType ADBDPlayer::GetCurrentAttackType(){return EAttackType::VE_None;}
	bool ADBDPlayer::GetContinuousPrintDebug(){return false;}
	UChaseComponent* ADBDPlayer::GetChaseComponent(){return nullptr;}
	UCharacterInventoryComponent* ADBDPlayer::GetCharacterInventoryComponent(){return nullptr;}
	FString ADBDPlayer::GetCharacterAudioSurfaceName(){return "";}
	FVector ADBDPlayer::GetCapsuleTopPosition(){return FVector();}
	FVector ADBDPlayer::GetCapsuleBottomPosition(){return FVector();}
	ADBDPlayerCameraManager* ADBDPlayer::GetCameraManager(){return nullptr;}
	float ADBDPlayer::GetCameraCharacterYawDiff(){return 0;}
	FVector ADBDPlayer::GetBoneRelativeLocation(FName targetBone,  FName relativeBone){return FVector();}
	//FVector ADBDPlayer::GetBoneLocation(FName Name, EBoneSpaces space){return FVector();}
	float ADBDPlayer::GetBlinkTime(){return 0;}
	UBlindableComponent* ADBDPlayer::GetBlindableComponent(){return nullptr;}
	float ADBDPlayer::GetBaseFOV(){return 0;}
	FVector ADBDPlayer::GetAverageVelocity(){return FVector();}
	UAuthoritativeMovementComponent* ADBDPlayer::GetAuthoritativeMovementComponent(){return nullptr;}
	//UAkComponent* ADBDPlayer::GetAudioComponent(){return nullptr;}
	EAttackType ADBDPlayer::GetAttackMontageEvent(){return EAttackType::VE_None;}
	USceneComponent* ADBDPlayer::GetAttachPoint( FName attachPointName){return nullptr;}
	void ADBDPlayer::GetAnimTags(TArray< FName> outTags){}
	UAnimInstance* ADBDPlayer::GetAnimInstance(){return nullptr;}
	FAnimData ADBDPlayer::GetAnimData(){return FAnimData();}
	FVector ADBDPlayer::GetAlmostCurrentVelocity(){return FVector();}
	FVector ADBDPlayer::GetActorLocationFromFeetLocation( FVector FeetLocation){return FVector();}
	FVector ADBDPlayer::FindFurthestClearLocationBetweenPoints( FVector startPosition,  FVector targetPosition){return FVector();}
	ADBDPlayer* ADBDPlayer::FindClosestSlashablePlayerInDetectionZone(EDetectionZone detectionZoneID){return nullptr;}
	void ADBDPlayer::FastInteractionInputReleased(){}
	void ADBDPlayer::FastInteractionInputPressed(){}
	void ADBDPlayer::Dissolve(bool Dissolve){}
	void ADBDPlayer::DetachInteractor(){}
	void ADBDPlayer::DebugPrint( FString inString){}
	void ADBDPlayer::DeactivateSkillChecks(){}
	void ADBDPlayer::DBDUnCrouch(){}
	void ADBDPlayer::DBDLog( FString LogText){}
	void ADBDPlayer::DBDCrouch(){}
	void ADBDPlayer::DBD_TogglePrintServerPositionUpdateEnabled(){}
	void ADBDPlayer::DBD_ToggleForceAuthoritativeMovement(){}
	void ADBDPlayer::DBD_ToggleDebugInteractionInZone(){}
	void ADBDPlayer::DBD_SetMouseTurnSpeedMultiplier(float value){}
	void ADBDPlayer::DBD_SetMouseLookUpSpeedMultiplier(float value){}
	void ADBDPlayer::DBD_SetGamePadTurnRate(float value){}
	void ADBDPlayer::DBD_SetGamePadLookUpRate(float value){}
	void ADBDPlayer::DBD_DebugStartInteraction(){}
	void ADBDPlayer::Client_TryInteractionType(EInputInteractionType InteractionType,  ADBDPlayer* Requester){}
	void ADBDPlayer::Client_SendCancelInteraction(){}
	void ADBDPlayer::Client_QueueInteraction(EInputInteractionType InteractionType,  ADBDPlayer* Requester, float queuedTimer){}
	void ADBDPlayer::Client_ClearInteractionQueue(){}
	bool ADBDPlayer::CanInterrupt_BP(){return false;}
	bool ADBDPlayer::CanInteractWithItems(){return false;}
	bool ADBDPlayer::CanInteract(){return false;}
	void ADBDPlayer::CancelCarry(bool alsoCancelForOtherPlayer){}
	bool ADBDPlayer::CanBeBlinded(){return false;}	
	void ADBDPlayer::CameraUpdated(){}
	void ADBDPlayer::Broadcast_Server_RequestAttackSubstateChange(EAttackSubstate attackSubstate){}
	void ADBDPlayer::Broadcast_PlayMontage_Server( FAnimationMontageDescriptor animMontageID, float PlayRate){}
	void ADBDPlayer::Broadcast_PlayMontage_Multicast( FAnimationMontageDescriptor animMontageID, float PlayRate){}
	void ADBDPlayer::Broadcast_Multicast_RequestAttackSubstateChange(EAttackSubstate attackSubstate){}
	void ADBDPlayer::Broadcast_Multicast_BlinkDestination( FVector Position,  FRotator Rotation){}
	void ADBDPlayer::Broadcast_LockOnTarget_Server( ADBDPlayer* Target){}
	void ADBDPlayer::Broadcast_LockOnTarget_Multicast( ADBDPlayer* Target){}
	void ADBDPlayer::Broadcast_HitTarget_Server( ADBDPlayer* Target, EAttackType attackType){}
	void ADBDPlayer::Broadcast_HitTarget_Multicast( ADBDPlayer* Target, EAttackType attackType){}
	void ADBDPlayer::Broadcast_BlinkDestination( FVector Position,  FRotator Rotation){}
	bool ADBDPlayer::Authority_TryForceEndOngoingScoreEvent(EDBDScoreTypes scoreType){return false;}
	bool ADBDPlayer::Authority_TryForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType){return false;}
	void ADBDPlayer::Authority_SetDreamworldComponent( UCharacterDreamworldComponent* Component){}
	void ADBDPlayer::Authority_RequestStun(EStunType stunType,  ADBDPlayer* stunner){}
	void ADBDPlayer::Authority_RemoveStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID){}
	UStatusEffect* ADBDPlayer::Authority_ImposeStatusEffect( FName statusEffectId,  ADBDPlayer* originatingPlayer, float customParam,  UGameplayModifierContainer* originatingEffect, bool shouldDisplay){return nullptr;}
	UStatusEffect* ADBDPlayer::Authority_ImposeDynamicStatusEffect( FName statusEffectId,  ADBDPlayer* originatingPlayer, float customParam,  UGameplayModifierContainer* originatingEffect){return nullptr;}
	void ADBDPlayer::Authority_HandleScoreEvent( FGameplayTag scoreTypeTag,  FScoreEventData ScoreEventData){}
	void ADBDPlayer::Authority_Flashlighted(TArray< AActor*> instigators){}
	void ADBDPlayer::Authority_EvaluateIfPlayerCanSee(){}
	void ADBDPlayer::Authority_EndStatusEffectByID( FName statusEffectId, bool bRemoveAllWithID){}
	void ADBDPlayer::Authority_EndOngoingScoreEvent( FGameplayTag scoreTypeTag){}
	void ADBDPlayer::Authority_CancelOngoingScoreEvent( FGameplayTag scoreTypeTag){}
	void ADBDPlayer::Authority_AttemptEscapeCarry(ACamperPlayer* Player){}
	void ADBDPlayer::Authority_ActivateAuthoritativeMovementOnDropped(){}
	void ADBDPlayer::AttachInteractor(UInteractor* Interactor){}
	void ADBDPlayer::AddDetectionZone(EDetectionZone detectionZoneID,  UPrimitiveComponent* zone){}
	void ADBDPlayer::AbilityInputReleased(){}
	void ADBDPlayer::AbilityInputPressed(){}
