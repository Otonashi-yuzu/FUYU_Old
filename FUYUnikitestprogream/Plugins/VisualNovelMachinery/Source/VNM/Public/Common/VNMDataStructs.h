#pragma once

#include "CoreMinimal.h"
#include "CharacterFlipState.h"
#include "CharacterPositioning.h"

#include "VNMDataStructs.generated.h"

USTRUCT()
struct FBaseCharacterDisplayedData
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	FName CharacterId;

	UPROPERTY()
	FName EmotionId;

	FBaseCharacterDisplayedData(const FName& InCharacterId, const FName& InEmotionId)
	: CharacterId(InCharacterId)
	, EmotionId(InEmotionId)
	{}
	
	FBaseCharacterDisplayedData() {}
};

USTRUCT()
struct FCharacterDisplayedData : public FBaseCharacterDisplayedData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ECharacterPositioning CharacterPositioning = ECharacterPositioning::CENTER;
	
	UPROPERTY()
	FName CustomCharacterPosition;
	
	UPROPERTY()
	ECharacterFlipState CharacterFlipState = ECharacterFlipState::INHERIT;
	
	UPROPERTY()
	int32 ZOrderIndex = INDEX_NONE;

	UPROPERTY()
	TMap<FName, FName> Layers;

	FCharacterDisplayedData(const FName& InCharacterId, const FName& InEmotionId, const ECharacterPositioning InCharacterPositioning, const FName& InCustomCharacterPosition, const ECharacterFlipState InCharacterFlipState, TMap<FName, FName> InLayers, const int32 InZOrderIndex)
    : FBaseCharacterDisplayedData(InCharacterId, InEmotionId)
	, CharacterPositioning(InCharacterPositioning)
	, CustomCharacterPosition(InCustomCharacterPosition)
	, CharacterFlipState(InCharacterFlipState)
	, ZOrderIndex(InZOrderIndex)
	, Layers(InLayers)
	{}

	FCharacterDisplayedData() {}
};


USTRUCT()
struct FCharacter3DDisplayedData : public FBaseCharacterDisplayedData
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FName SpawnLocation;

	FCharacter3DDisplayedData(const FName& InCharacterId, const FName& InEmotionId, const FName& InSpawnLocation)
	: FBaseCharacterDisplayedData(InCharacterId, InEmotionId)
	, SpawnLocation(InSpawnLocation)
	{}

	FCharacter3DDisplayedData() {}
};

USTRUCT()
struct FDialogSceneData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName DialogSceneId;

	UPROPERTY()
	FName ActiveCamera;

	FDialogSceneData(const FName& InDialogSceneId, const FName& InActiveCamera)
	: DialogSceneId(InDialogSceneId)
	, ActiveCamera(InActiveCamera)
	{}

	FDialogSceneData() {}
};

USTRUCT()
struct FDialogImageData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName ImageId;

	UPROPERTY()
	TMap<FName, FName> Layers;

	FDialogImageData(const FName& InImageId, TMap<FName, FName> InLayers)
	: ImageId(InImageId)
	, Layers(InLayers)
	{}

	FDialogImageData() {}
};


USTRUCT()
struct FVNMBaseData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName DialogObjectToContinueIn;
	
	UPROPERTY()
	FName NodeToContinueGUID;

	UPROPERTY()
	TArray<FCharacterDisplayedData> CharactersDisplayed;

	UPROPERTY()
	TArray<FCharacter3DDisplayedData> Characters3DDisplayed;

	UPROPERTY()
	FDialogSceneData CurrentDialogScene;

	UPROPERTY()
	FDialogImageData CgDisplayed;
	
	UPROPERTY()
	FDialogImageData SceneBackgroundDisplayed;

	UPROPERTY()
	FText LastDialogTextDisplayedAtChoice;

	UPROPERTY()
	FName LastTalkingCharacterIdAtChoice;

	UPROPERTY()
	bool bIsDialogBoxVisible;

	UPROPERTY()
	bool bIsDialogBoxVisibilityInAutoMode;

	UPROPERTY()
	FString LocalVariablesValuesJson;
};

USTRUCT()
struct FMemoryData
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<FName, FString> MemoryValues;
};

USTRUCT(BlueprintType)
struct FGameSnapshot
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	FVNMBaseData ActiveDialogData;

	UPROPERTY()
	TMap<FName, FMemoryData> CharacterMemories;

	UPROPERTY()
	TMap<FName, FMemoryData> DialogMemories;

	UPROPERTY(BlueprintReadWrite, Category=GameSnapshot)
	FString AdditionalData;
	
	UPROPERTY()
	TMap<FName, FString> RenamedCharacters;

	bool IsValid() const
	{
		return !ActiveDialogData.DialogObjectToContinueIn.IsNone();
	}
};