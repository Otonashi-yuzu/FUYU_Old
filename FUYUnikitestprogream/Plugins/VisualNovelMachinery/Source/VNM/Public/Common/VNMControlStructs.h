// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "BaseImageChoiceWidget.h"
#include "BaseVNMActivatableWidget.h"
#include "CharacterFlipState.h"
#include "CharacterPositioning.h"
#include "TransitionEvent.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/AudioComponent.h"
#include "Framework/Text/TextLayout.h"
#include "VNMControlStructs.generated.h"

USTRUCT(BlueprintType)
struct FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Animation)
	ETransitionEvent TransitionEvent = ETransitionEvent::No_Transition;

	UPROPERTY(BlueprintReadWrite, Category=Animation)
	float AnimationPlaybackMultiplier = 1.f;

	UPROPERTY(BlueprintReadWrite, Category=Animation)
	FString CustomTransitionName = TEXT("");

	UPROPERTY(BlueprintReadWrite, Category=Animation)
	bool bDontWaitForTransitionToFinish = false;
};

USTRUCT(BlueprintType)
struct FImageLayerInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Layer)
	FName LayerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Layer)
	FName ImageId;
};

/*
 * Dialog Nodes
 */

USTRUCT(BlueprintType)
struct FBaseDialogNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Internal)
	FName NodeGUID;
};

USTRUCT(BlueprintType)
struct FDisplayDialogTextData : public FBaseDialogNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	FText TextToDisplay;

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	bool bSkipTypewriting = false;

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	float TypewritingSpeedMultiplier = 1.f;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	TEnumAsByte<ETextJustify::Type> TextJustification;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	TEnumAsByte<EHorizontalAlignment> CharacterNameAlignment = HAlign_Left;
};

USTRUCT(BlueprintType)
struct FDisplayDialogChoicesData : public FBaseDialogNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	TArray<FText> ChoicesToDisplay;

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	TArray<bool> ChoiceConditions;

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	TSubclassOf<UBaseImageChoiceWidget> ImageChoiceWidgetClass;

	UPROPERTY(BlueprintReadWrite, Category=Dialog)
	bool bIs3DChoice;
};

USTRUCT(BlueprintType)
struct FDialogWindowData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Animation)
	bool bSetToAutomatic;
};

USTRUCT(BlueprintType)
struct FPlayDialogWindowAnimationData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Animation)
	bool bPlayBackwards;
};

USTRUCT(BlueprintType)
struct FWidgetShowData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Widget)
	TSubclassOf<UBaseVNMActivatableWidget> ActivatableWidgetClass;

	UPROPERTY(BlueprintReadWrite, Category=Widget)
	bool bWaitForWidgetToCloseAgain;
};

USTRUCT(BlueprintType)
struct FWidgetHideData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Widget)
	TSubclassOf<UBaseVNMActivatableWidget> ActivatableWidgetClass;
};

/*
 * Character Nodes
 */

USTRUCT(BlueprintType)
struct FShowCharacterData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName EmotionId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	ECharacterPositioning CharacterPositioning;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CustomCharacterPosition;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	ECharacterFlipState CharacterFlipState;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	TArray<FImageLayerInfo> Layers;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	int32 ZOrderIndex = 0;
};

USTRUCT(BlueprintType)
struct FAddLayerToCharacterData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName LayerId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName ImageId;
};

USTRUCT(BlueprintType)
struct FMoveCharacterData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	ECharacterPositioning CharacterPositioning;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CustomCharacterPosition;
	
	UPROPERTY(BlueprintReadWrite, Category=Animation)
	bool bMoveWithAnimation;
};

USTRUCT(BlueprintType)
struct FRemoveLayerFromCharacterData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName LayerId;
};

USTRUCT(BlueprintType)
struct FHideCharacterData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;
};

USTRUCT(BlueprintType)
struct FPlayCharacterAnimationData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	bool bPlayBackwards;
};

USTRUCT(BlueprintType)
struct FRenameCharacterData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FText NewCharacterName;
};

USTRUCT(BlueprintType)
struct FInteractiveRenameCharacterData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;
};

/*
 * CG Nodes
 */

USTRUCT(BlueprintType)
struct FShowCgData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=CG)
	FName CgId;
};

USTRUCT(BlueprintType)
struct FAddLayerToCgData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=CG)
	FName CgId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName LayerId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName ImageId;
};

USTRUCT(BlueprintType)
struct FRemoveLayerFromCgData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=CG)
	FName CgId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName LayerId;
};

USTRUCT(BlueprintType)
struct FHideCgData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=CG)
	FName CgId;
};

USTRUCT(BlueprintType)
struct FPlayCgAnimationData : public FTransitionableNodeData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Character)
	bool bPlayBackwards;
};

/*
 * SceneBackground Nodes
 */

USTRUCT(BlueprintType)
struct FShowSceneBackgroundData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Scene Background")
	FName SceneBackgroundId;
};

USTRUCT(BlueprintType)
struct FAddLayerToSceneBackgroundData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Scene Background")
	FName SceneBackgroundId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName LayerId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName ImageId;
};

USTRUCT(BlueprintType)
struct FRemoveLayerFromSceneBackgroundData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Scene Background")
	FName SceneBackgroundId;

	UPROPERTY(BlueprintReadWrite, Category=Layer)
	FName LayerId;
};

USTRUCT(BlueprintType)
struct FHideSceneBackgroundData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Scene Background")
	FName SceneBackgroundId;
};

USTRUCT(BlueprintType)
struct FPlaySceneBackgroundAnimationData : public FTransitionableNodeData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category=Character)
	bool bPlayBackwards;
};

	
/*
 * Dialog Scene Nodes
 */

USTRUCT(BlueprintType)
struct FShowDialogSceneData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	FName DialogSceneId;

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	FName DialogCameraName;
};

USTRUCT(BlueprintType)
struct FHideDialogSceneData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	FName DialogSceneId;
};

USTRUCT(BlueprintType)
struct FSwitchToCameraData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	FName DialogSceneId;

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	FName DialogCameraName;

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	FViewTargetTransitionParams TransitionParams;

	UPROPERTY(BlueprintReadWrite, Category="Dialog Scene")
	bool bDontWaitForTransitionToFinish = false;
};


/*
 * Character 3D Nodes
 */

USTRUCT(BlueprintType)
struct FShowCharacter3DData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName EmotionId;

	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName LocationName;
	
};

USTRUCT(BlueprintType)
struct FHideCharacter3DData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Character)
	FName CharacterId;
	
};

/*
 * Dialog Audio Nodes
 */

USTRUCT(BlueprintType)
struct FPlayDialogAudioData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	FName DialogAudioId;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	float Volume = 1.f;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	float Pitch = 1.f;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	float StartTime = 0.f;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	float FadeTime = 0.f;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	EAudioFaderCurve AudioFadeCurve = EAudioFaderCurve::Linear;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	bool bWaitForAudioToFinish = false;
};

USTRUCT(BlueprintType)
struct FPlayDialogAudioDialogVoiceOverData : public FPlayDialogAudioData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	FName DialogId;
};

USTRUCT(BlueprintType)
struct FPlayDialogAudioCharacterVoiceOverData : public FPlayDialogAudioData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	FName CharacterId;
};

USTRUCT(BlueprintType)
struct FPlayDialogAudioBackgroundMusicData : public FPlayDialogAudioData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	bool bIsLooping = false;
};

USTRUCT(BlueprintType)
struct FStopDialogAudioData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	float FadeTime = 0.f;
	
	UPROPERTY(BlueprintReadWrite, Category=Audio)
	EAudioFaderCurve AudioFadeCurve = EAudioFaderCurve::Linear;
};