#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Materials/Material.h"
#include "Engine/SkeletalMesh.h"
#include "Animation/AnimationAsset.h"
#include "GameplayTagContainer.h"
#include "Enums.h"
#include "Structs.generated.h"

USTRUCT(BlueprintType) //empty struct?
struct FOffering
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType)
struct FDBDRecentGameplayEvents
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EDBDScoreTypes, FDateTime> _recentGameplayEvents;
};
USTRUCT(BlueprintType)
struct FOngoingScoreData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDScoreTypes scoreType;            
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FGameplayTag scoreTypeTag;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeSinceScore;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ApplyScoreTimeout;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AccumulatedPercent;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Target;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* CustomObjectParameter;
};
USTRUCT(BlueprintType)
struct FUserGameStats
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Disconnected;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FearTokens;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Skulls;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EDBDScoreCategory, int> BonusBloodpoints;   
};
USTRUCT(BlueprintType)
struct FAwardedScore
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ScoreTypeId;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BloodpointsAwarded;
};
USTRUCT(BlueprintType)
struct FAwardedScores
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAwardedScore> Array;
};
USTRUCT(BlueprintType)
struct FSkillCheckInteractionData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitAreaStart;      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitAreaLength;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BonusAreaLength;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Progress;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHexed;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int xOffset;           
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int yOffset;           
};
USTRUCT(BlueprintType)
struct FCharmIdSlot
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SlotIndex;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CharmId;           
};
USTRUCT(BlueprintType)
struct FPlayerCustomization //from Customization.* instead of DeadByDaylight.*, idk if works
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> _customizationMeshes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharmIdSlot> _customizationCharms;
};

USTRUCT(BlueprintType)
struct FCharacterStateData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _pips;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _powerId;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> _addonIds;         
};
USTRUCT(BlueprintType)
struct FPlayerStateData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CharacterLevel;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EquipedFavorId;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> EquipedPerkIds;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> EquipedPerkLevels; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLeavingMatch;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameState _playerGameState;  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _prestigeLevel;    
};
USTRUCT(BlueprintType)
struct FAnimData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterStance Stance;
};
USTRUCT(BlueprintType)
struct FScoreEventData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* Target;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float PercentToAward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* CustomObjectParameter;
};
USTRUCT(BlueprintType)
struct FAnimationMontageDescriptor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName MontageID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> Tags;     
};
USTRUCT(BlueprintType)
struct FMontagePlaybackDefinition
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FAnimationMontageDescriptor Descriptor;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float PlayRate;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Follower;          
};
USTRUCT(BlueprintType)
struct FInteractionPlayerProperties
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector_NetQuantize AverageVelocityAtStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector_NetQuantize PlayerPositionAtStart; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class ADBDPlayer* Requester;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector_NetQuantize SnapPositionAtStart;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator SnapRotationAtStart;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SnapDistanceAtStart;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SnapTimeAtStart;      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool shouldSnapPosition;    
};
USTRUCT(BlueprintType)
struct FEffectCameraTypeSettings
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECustomizationCategory Category;   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool VisibilityInFirstPerson;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool VisibilityInThirdPerson;
};
USTRUCT(BlueprintType)
struct FGamePlayModifier
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTag Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ModifierValue;
};
USTRUCT(BlueprintType)
struct FGameplayModifierData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UClass*> Conditions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FGamePlayModifier> Modifiers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FGameplayTag> TaggedFlags;
};
USTRUCT(BlueprintType)
struct FReplicationTimerData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Paused;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Duration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Timestamp;
};
USTRUCT(BlueprintType)
struct FDBDTableRowBase : public FTableRowBase
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FDBDTableRowBaseWithId : public FDBDTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ID;
};

USTRUCT(BlueprintType)
struct FMaterialReplacerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UMaterial> From;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UMaterial> To;
};

USTRUCT(BlueprintType)
struct FUnlockSaveStatCondition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName StatName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ValueRequired;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isCharacterSpecific;
};

USTRUCT(BlueprintType)
struct FMaterialReplacerArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FMaterialReplacerData> MaterialsMap;

};

USTRUCT(BlueprintType)
struct FConditionalMaterialReplacer
{	
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<FName, FMaterialReplacerArray> ConditionalMaterials;
};

USTRUCT(BlueprintType)
struct FCustomAnimData
{
	GENERATED_BODY()	//BOTH TYPES MIGHT BE WRONG
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		TSoftObjectPtr<UBlueprint> MenuAnimationBlueprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		TSoftObjectPtr<UBlueprint> InGameAnimationBlueprint;
};

USTRUCT(BlueprintType)
struct FDataTableDropdown
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName RowValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString DataTableName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ColumnName;
};

USTRUCT(BlueprintType)
struct FItemUIData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> IconFilePathList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftObjectPtr<UTexture>> IconAssetList;
};
USTRUCT(BlueprintType)
struct FPerkLevelText
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> Tunables;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText TextOverride;
};
USTRUCT(BlueprintType)
struct FItemAvailability
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		EItemAvailability itemAvailability;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		FString DLCId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		int32 CloudInventoryId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		FString CommunityId;
};
USTRUCT(BlueprintType)
struct FBaseItemData : public FDBDTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EInventoryItemType Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItemUIData UIData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText GenericDisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UBlueprint> ItemBlueprint;
		
};
USTRUCT(BlueprintType)
struct FActorSpawnerProperties
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftClassPtr<AActor> SceneElement;
};
USTRUCT(BlueprintType)
struct FItemData : public FBaseItemData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<USkeletalMesh> ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EItemHandPosition HandPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPlayerRole Role;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EItemRarity Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Inventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Chest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EKillerAbilities RequiredKillerAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItemAvailability Availability;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsInNonViolentBuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsAvailableInAtlantaBuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool AntiDLC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
		bool Bloodweb;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName EventId;
};
USTRUCT(BlueprintType)
struct FPerkProperties : public FItemData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> Tags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 AssociatedPlayerIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MandatoryOnBloodwebLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 TeachableOnBloodwebLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 AtlantaTeachableLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<EPerkCategory> PerkCategory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftClassPtr<class UPerk> PerkBlueprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<EItemRarity> PerkLevelRarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PerkDefaultDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPerkLevelText> PerkLevelTunables;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PerkLevel1Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PerkLevel2Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PerkLevel3Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> AtlantaActivatableInteractionIDs;
};

USTRUCT(BlueprintType)
struct FCustomSoundFXData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EAudioCustomizationCategory AudioCategory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString switchState;
};

USTRUCT(BlueprintType)
struct FStatusViewSource
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SourceID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsActive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float _remainingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float PercentageFill;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EInventoryItemType SourceType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SourceIconIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SourceLevel;
};
USTRUCT(BlueprintType)
struct FGameEventData
{
	GENERATED_BODY()
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//ADBDPlayer* Instigator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* Target;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CustomValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* CustomObjectParameter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CustomIntValue;
};

USTRUCT(BlueprintType)
struct FBPAttachementSocketData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UBlueprint> AttachementBlueprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FMaterialReplacerData> MaterialsMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FConditionalMaterialReplacer ConditionalMaterialReplacer;
};

USTRUCT(BlueprintType)
struct FSlideShowDescription
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Overview;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Playstyle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ImageFilePath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<EPerkCategory> PerkCategory;
};

USTRUCT(BlueprintType)
struct FCustomizationData : public FDBDTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 AssociatedCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPlayerRole AssociatedRole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EItemRarity Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItemUIData UIData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItemAvailability Availability;
};



USTRUCT(BlueprintType)
struct FCustomizationItemData : public FCustomizationData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECustomizationCategory Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<USkeletalMesh> ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UBlueprint> ItemBlueprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FMaterialReplacerData> MaterialsMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FConditionalMaterialReplacer ConditionalMaterialReplacer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> SkeletalComponentTags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText CollectionName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText CollectionDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 PrestigeUlockLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString PrestigeUnlockDate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName EventId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FBPAttachementSocketData> SocketAttachements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUnlockSaveStatCondition UnlockingConditions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsInStore;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsInNonViolentBuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 PlatformExclusiveFlag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCustomSoundFXData> CustomSFXs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FCustomAnimData AnimationData;
};

USTRUCT(BlueprintType)
struct FCustomizedMeshPart
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECustomizationCategory Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FDataTableDropdown DefaultItemId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SocketName;
		
};

USTRUCT(BlueprintType)
struct FPlatformDlcData : public FDBDTableRowBase {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText UnlockDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UISortOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdSteam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdEpic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdDmm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdPS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdXB1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdXSX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdGRDK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdPS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdStadia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIdMobile;
};

USTRUCT(BlueprintType)
struct FTunableValue : public FDBDTableRowBase	 //DONE (MAYBE) // WRONG ATM
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString DescriptorTags;
};

USTRUCT(BlueprintType)
struct FProceduralMap : public FDBDTableRowBase	//DONE
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName MapId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText ThemeName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HookMinDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 HookMinCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 HookMaxCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BookShelvesMinDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 BookShelvesMinCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 BookShelvesMaxCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 LivingWorldObjectsMinCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 LivingWorldObjectsMasCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ThumbnailPath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SortingIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString DlcIDString;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int32> FixedLayoutSeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsInNonViolentBuild;

};

USTRUCT(BlueprintType)
struct FCustomizationCategoryData : public FDBDTableRowBase //DONE
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ECustomizationCategory)
		ECustomizationCategory Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString IconPath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPlayerRole Role;
};

USTRUCT(BlueprintType)
struct FCharacterDescription : public FDBDTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CharacterIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPlayerRole Role;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECharacterDifficulty Difficulty;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText BackStory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Biography;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString IconFilePath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UTexture> HudIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString BackgroundImagePath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCustomizedMeshPart> CustomizationDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ChapterDlcId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> AdditionalDlcIds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool AvailableIfDlcInstalled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName DebugName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsInChunk0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsAvailableInNonViolentBuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsAvailableInAtlantaBuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 PlatformExclusiveFlag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UBlueprint> GamePawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UBlueprint> MenuPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName DefaultItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EGender Gender;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EKillerAbilities KillerAbilities;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UDataTable> TunableDB;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EKillerHeight KillerHeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FSlideShowDescription SlideShowDescriptions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool HideStoreCustomizations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> CustomizationCategories;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString CharacterId;
};
