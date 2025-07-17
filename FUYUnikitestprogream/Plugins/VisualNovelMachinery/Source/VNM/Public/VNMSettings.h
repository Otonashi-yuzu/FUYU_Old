// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "CharacterPositioning.h"
#include "DialogAudioControllerComponent.h"
#include "DialogObject.h"
#include "VNMBasePersistantSaveGame.h"
#include "VNMBaseSaveGame.h"
#include "Actors/VNMCineCameraActor.h"
#include "Engine/DataTable.h"
#include "Engine/SkeletalMesh.h"
#include "Animation/AnimationAsset.h"


#include "VNMSettings.generated.h"

USTRUCT(BlueprintType)
struct FActorIdentifier
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Actor Identifier")
	FName ActorInternalName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Actor Identifier")
	FString ActorLabel;
};

inline bool operator==(const FActorIdentifier& lhs, const FActorIdentifier& rhs)
{
	return lhs.ActorInternalName == rhs.ActorInternalName;
}

UENUM(BlueprintType)
enum class EMemoryType : uint8
{
	Bool,
    Integer,
	Integer64,
	Float,
	String,
	Byte
};

USTRUCT(BlueprintType)
struct FImageDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Image, meta=( DisplayThumbnail="true", AllowedClasses="Texture2D,MaterialInterface", DisallowedClasses = "MediaTexture"))
	TSoftObjectPtr<UObject> Image;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Image)
	FVector2D ImageSize = FVector2D::ZeroVector;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Image)
	FLinearColor ColorAndOpacity = FLinearColor::White;

	bool IsDefault() const
	{
		return Image.IsNull() && ImageSize == FVector2D::ZeroVector && ColorAndOpacity == FLinearColor::White;
	}
};

USTRUCT(BlueprintType)
struct FMemoryDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Memory)
	FName MemoryId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Memory)
	EMemoryType Type;
	
};

USTRUCT(BlueprintType)
struct FImageLayerDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Layer)
	FName LayerId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Layer, meta=(ClampMin=0, UIMin=0, ClampMax=10, UIMax=10))
	int32 LayerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Layer)
	TMap<FName, FImageDefinition> LayerImagePerId;	
};

USTRUCT(BlueprintType)
struct FDialogAudioDefinition : public FTableRowBase
{
	GENERATED_BODY()
public:
	// The internal ID identifying the audio
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Audio")
	FName DialogAudioId;

	// The audio type
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialog Audio")
	EDialogAudioType AudioType;

	// The actual audio object
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialog Audio")
	USoundBase* AudioObject;

	bool IsValid() const
	{
		return !DialogAudioId.IsNone();
	}
};

USTRUCT(BlueprintType)
struct FVoiceOverDefinition
{
	GENERATED_BODY()
public:
	// The internal ID identifying the audio
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Audio")
	FName DialogAudioId;

	// The actual audio object
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialog Audio")
	USoundBase* AudioObject = nullptr;

	bool IsValid() const
	{
		return !DialogAudioId.IsNone();
	}
};

USTRUCT(BlueprintType)
struct FCharacterDefinition : public FTableRowBase
{
	GENERATED_BODY()

public:
	// The internal ID identifying the character 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	FName CharacterId;

	// The friendly name of the character
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	FText CharacterDisplayName;

	// The color of the character name text in the dialog box widget
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	FSlateColor CharacterDisplayColor = FLinearColor::White;

	// Override the dialog box background when this character is talking
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	FImageDefinition DialogBackgroundOverride;

	// A friendly description of the character, or your notes about the character
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	FText CharacterDescription;

	// The actual texture used by the character for a specific emotion ID
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TMap<FName, FImageDefinition> CharacterImagePerEmotion;

	// Array of Layer information for this specific character
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character, meta = (TitleProperty="LayerId"))
	TMap<FName, FImageLayerDefinition> CharacterImageLayers;

	// Skeletal Mesh displayed in 3D world
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	USkeletalMesh* CharacterMesh;
	
	// Animation asset used with skeletal mesh in 3D world
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TMap<FName, UAnimationAsset*> CharacterAnimationPerEmotion;

	// Array of Memories that are relevant to this character
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TArray<FMemoryDefinition> CharacterMemoryDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TMap<FName, FVoiceOverDefinition> VoiceOverDefinitions;

	bool IsValid() const
	{
		return !CharacterId.IsNone();
	}
};

USTRUCT(BlueprintType)
struct FDialogImageDefinition : public FTableRowBase
{
	GENERATED_BODY()
public:
	// The internal ID identifying the image
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Image")
	FName DialogImageId;

	// The actual image texture
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialog Image")
	FImageDefinition DialogImage;

	// The group id of the dialog image
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialog Image")
	FName DialogImageGroupId;

	// Array of Layer information for this specific image
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Image", meta = (TitleProperty="LayerId"))
	TMap<FName, FImageLayerDefinition> DialogImageLayers;

	bool IsValid() const
	{
		return !DialogImageId.IsNone();
	}
};

USTRUCT(BlueprintType)
struct FDialogSceneDefinition : public FTableRowBase
{
	GENERATED_BODY()
public:
	// The internal ID identifying the scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Scene")
	FName DialogSceneId;

	// The actual level
	// IMPORTANT: YOU HAVE TO ADD THIS LEVEL TO YOUR INGAME LEVEL AS A SUBLEVEL, OTHERWISE IT CAN'T BE STREAMED IN
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Scene")
	TSoftObjectPtr<UWorld> DialogScene;

	// Cameras in the dialog scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Scene")
	TArray<FActorIdentifier> DialogCameraNames;

	// Spawn Locations for 3D characters in the dialog scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Scene")
	TArray<FActorIdentifier> DialogSpawnLocationNames;

	bool IsValid() const
	{
		return !DialogSceneId.IsNone();
	}	
};

USTRUCT(BlueprintType)
struct FDialogDefinition : public FTableRowBase
{
	GENERATED_BODY()
public:
	// The internal ID identifying this dialog scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dialog)
	FName DialogueId;

	// The friendly name of the dialog scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dialog)
	FText DialogTitle;

	// The actual Dialog Blueprint
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dialog)
	TSubclassOf<UDialogObject> DialogueObjectClass;

	// Text to describe what is happening in the scene, or even your notes about this scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dialog)
	FText DialogueDescription;

	// Override the default dialog box background when this dialog is active
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dialog)
	FImageDefinition DialogBackgroundOverride;

	// Array of Memories that are relevant to this dialog scene
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Dialog)
	TArray<FMemoryDefinition> DialogMemoryDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TMap<FName, FVoiceOverDefinition> VoiceOverDefinitions;

	bool IsValid() const
	{
		return !DialogueId.IsNone() && DialogueObjectClass != nullptr;
	}	
};

UENUM(BlueprintType)
enum class EAutoSaveType : uint8
{
    MANUAL,
    AUTOMATIC
};

USTRUCT(BlueprintType)
struct FVisualNovelMachinerySettings
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=DataTables)
	UDataTable* CharacterDefinitonsTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=DataTables)
	UDataTable* CgDefinitonsTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=DataTables)
	UDataTable* SceneBackgroundDefinitonsTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=DataTables)
	UDataTable* DialogSceneDefinitionsTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=DataTables)
	UDataTable* DialogAudioDefinitionsTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=DataTables)
	UDataTable* DialogDefinitonsTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=General)
	FString InGameLevelName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=General)
	FString MainMenuLevelName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Save System")
	TSubclassOf<UVNMBaseSaveGame> SaveGameClass = UVNMBaseSaveGame::StaticClass();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Save System")
	TSubclassOf<UVNMBasePersistantSaveGame> PersistantSaveGameClass = UVNMBasePersistantSaveGame::StaticClass();

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="Save System")
	bool bGenerateSaveFileName = true;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="Save System")
	bool bConfirmBeforeDeletingSaveFile = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialog Scene")
	TSubclassOf<ACameraActor> CameraClass = AVNMCineCameraActor::StaticClass();

	// Values need to be between 0.0 and 1.0
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TMap<ECharacterPositioning, float> CharacterPositionValues;

	// Values need to be between 0.0 and 1.0
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Character)
	TMap<FName, FVector2D> CustomCharacterPositionValues;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=Dialog)
	bool bTypewriterEffectActive = true;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=Dialog)
	float TypeWritingSpeed = 0.03f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=Dialog)
	float AutoForwardTime = 0.f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=Dialog)
	bool bAutostartDialog = true;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=Dialog)
	bool bAutostartFirstDialogIfNoDialogIsFound = true;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=AutoSave)
    EAutoSaveType AutoSaveType = EAutoSaveType::AUTOMATIC;
    
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category=AutoSave)
	float AutoSaveIntervalInSeconds = 60.f * 5.f; // Default to 5 minutes  
};

/**
* Implements the settings for the Visual Novel Machinery plugin.
*/
UCLASS(config = Engine, defaultconfig)
class VNM_API UVNMSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UVNMSettings(const FObjectInitializer& ObjectInitializer);
	/** Gets the settings container name for the settings, either Project or Editor */
	virtual FName GetContainerName() const override;
	/** Gets the category for the settings, some high level grouping like, Editor, Engine, Game...etc. */
	virtual FName GetCategoryName() const override;
	/** The unique name for your section of settings, uses the class's FName. */
	virtual FName GetSectionName() const override;

#if WITH_EDITOR
	/** Gets the section text, uses the classes DisplayName by default. */
	virtual FText GetSectionText() const override;
	/** Gets the description for the section, uses the classes ToolTip by default. */
	virtual FText GetSectionDescription() const override;
#endif
	UFUNCTION(BlueprintPure, Category=Settings)
	static UVNMSettings* GetVNMSettings() { return GetMutableDefault<UVNMSettings>(); }

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCharacterIds() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCustomCharacterPositions() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCharacterEmotionsById(const FName& CharacterId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCharacterLayersById(const FName& CharacterId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCharacterLayerImagesById(const FName& CharacterId, const FName& LayerId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCharacter3DEmotionsById(const FName& CharacterId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FCharacterDefinition GetCharacterDefinitionById(const FName& CharacterId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TMap<FName, FCharacterDefinition> GetCharacterDefinitionMap() const;
	

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCharacterMemoryIdsByCharacterId(const FName& CharacterId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FMemoryDefinition GetCharacterMemoryDefinitionById(const FName& CharacterId, const FName& MemoryId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FMemoryDefinition> GetCharacterMemoryDefinitionsByCharacterId(const FName& CharacterId) const;


	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCgIds() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FDialogImageDefinition> GetCgDefinitions() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCgGroupIds() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCgIdsByGroupId(const FName& CgGroupId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FDialogImageDefinition GetCgDefinitionById(const FName& CgId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCgLayersById(const FName& CgId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetCgLayerImagesById(const FName& CgId, const FName& LayerId) const;
	
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetSceneBackgroundIds() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FDialogImageDefinition GetSceneBackgroundDefinitionById(const FName& SceneBackgroundId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetSceneBackgroundLayersById(const FName& SceneBackgroundId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetSceneBackgroundLayerImagesById(const FName& SceneBackgroundId, const FName& LayerId) const;
	
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetBackgroundMusicIds() const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FString> GetBackgroundMusicIdsAsString() const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetSoundEffectIds() const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FString> GetSoundEffectIdsAsString() const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetVoiceOverIds() const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetVoiceOverIdsByDialogClass(const TSubclassOf<UDialogObject> DialogObjectClass) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetVoiceOverIdsByDialogId(const FName& DialogId) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	FVoiceOverDefinition GetVoiceOverDefintionByDialogId(const FName& DialogId, const FName& VoiceOverId) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetVoiceOverIdsByCharacterId(const FName& CharacterId) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	FVoiceOverDefinition GetVoiceOverDefintionByCharacterId(const FName& CharacterId, const FName& VoiceOverId) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FString> GetVoiceOverIdsByDialogIdAsString(const FName& DialogId) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FString> GetVoiceOverIdsByCharacterIdAsString(const FName& CharacterId) const;
	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FString> GetVoiceOverIdsAsString() const;

	
	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetDialogSceneIds() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FDialogSceneDefinition> GetDialogSceneDefinitions() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FDialogSceneDefinition GetDialogSceneDefinitionById(const FName& DialogSceneId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FActorIdentifier> GetDialogSceneCameraNamesByDialogSceneId(const FName& DialogSceneId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FName GetDialogSceneCameraInternalNameByDialogSceneIdAndCameraLabel(const FName& DialogSceneId, const FString& CameraLabel) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FActorIdentifier> GetDialogSceneSpawnLocationNamesByDialogSceneId(const FName& DialogSceneId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FName GetDialogSceneSpawnLocationInternalNameByDialogSceneIdAndLocationLabel(const FName& DialogSceneId, const FString& LocationLabel) const;
	

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetDialogIds() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FDialogDefinition> GetDialogDefinitions() const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FDialogDefinition GetDialogDefinitionById(const FName& DialogId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FDialogDefinition GetDialogDefinitionByClass(const TSubclassOf<UDialogObject> DialogObjectClass) const;
	

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FName> GetDialogMemoryIdsByDialogId(const FName& DialogId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	FMemoryDefinition GetDialogMemoryDefinitionById(const FName& DialogId, const FName& MemoryId) const;

	UFUNCTION(BlueprintPure, Category=Settings)
	TArray<FMemoryDefinition> GetDialogMemoryDefinitionsByDialogId(const FName& DialogId) const;

	UPROPERTY(config, EditAnywhere, BlueprintReadOnly, Category=Settings, meta=(ShowOnlyInnerProperties))
	FVisualNovelMachinerySettings Settings;
	
	
};
