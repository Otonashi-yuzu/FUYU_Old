// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "VNMControlStructs.h"
#include "Engine/LatentActionManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VisualNovelNodeFunctionsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VNM_API UVisualNovelNodeFunctionsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	/*
	 * Dialog Nodes
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void DisplayDialogText(UObject* WorldContextObject, FDisplayDialogTextData DisplayDialogTextData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void DisplayDialogChoices(UObject* WorldContextObject, FDisplayDialogChoicesData DisplayDialogChoicesData, FLatentActionInfo LatentInfo, FName& SelectedChoice);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void GetDialogPlayerInput(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& PlayerInput);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlayDialogWindowAnimation(UObject* WorldContextObject, FPlayDialogWindowAnimationData PlayDialogWindowAnimationData, FLatentActionInfo LatentInfo);

	/*
	 * Character Nodes
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowCharacter(UObject* WorldContextObject, FShowCharacterData ShowCharacterData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void AddLayerToCharacter(UObject* WorldContextObject, FAddLayerToCharacterData AddLayerToCharacterData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void MoveCharacter(UObject* WorldContextObject, FMoveCharacterData MoveCharacterData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void RemoveLayerFromCharacter(UObject* WorldContextObject, FRemoveLayerFromCharacterData RemoveLayerFromCharacterData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideCharacter(UObject* WorldContextObject, FHideCharacterData HideCharacterData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlayCharacterAnimation(UObject* WorldContextObject, FPlayCharacterAnimationData PlayCharacterAnimationData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void RenameCharacter(UObject* WorldContextObject, FRenameCharacterData RenameCharacterData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void InteractiveRenameCharacter(UObject* WorldContextObject, FInteractiveRenameCharacterData InteractiveRenameCharacterData, FLatentActionInfo LatentInfo);
	
	/*
	 * Dialog Window Nodes
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowDialogWindow(UObject* WorldContextObject, FDialogWindowData DialogWindowData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideDialogWindow(UObject* WorldContextObject, FDialogWindowData DialogWindowData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowWidget(UObject* WorldContextObject, FWidgetShowData WidgetShowData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideWidget(UObject* WorldContextObject, FWidgetHideData WidgetHideData, FLatentActionInfo LatentInfo);

	/*
	 * CG Nodes
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowCg(UObject* WorldContextObject, FShowCgData ShowCgData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void AddLayerToCg(UObject* WorldContextObject, FAddLayerToCgData AddLayerToCgData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void RemoveLayerFromCg(UObject* WorldContextObject, FRemoveLayerFromCgData RemoveLayerFromCgData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideCg(UObject* WorldContextObject, FHideCgData HideCgData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlayCgAnimation(UObject* WorldContextObject, FPlayCgAnimationData PlayCgAnimationData, FLatentActionInfo LatentInfo);

	/*
	 * SceneBackground Nodes
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowSceneBackground(UObject* WorldContextObject, FShowSceneBackgroundData ShowSceneBackgroundData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void AddLayerToSceneBackground(UObject* WorldContextObject, FAddLayerToSceneBackgroundData AddLayerToSceneBackgroundData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void RemoveLayerFromSceneBackground(UObject* WorldContextObject, FRemoveLayerFromSceneBackgroundData RemoveLayerFromSceneBackgroundData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideSceneBackground(UObject* WorldContextObject, FHideSceneBackgroundData HideSceneBackgroundData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlaySceneBackgroundAnimation(UObject* WorldContextObject, FPlaySceneBackgroundAnimationData PlaySceneBackgroundAnimationData, FLatentActionInfo LatentInfo);
	
	/*
	 * Dialog Scene Nodes
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowDialogScene(UObject* WorldContextObject, FShowDialogSceneData ShowDialogSceneData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideDialogScene(UObject* WorldContextObject, FHideDialogSceneData HideDialogSceneData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void SwitchToCamera(UObject* WorldContextObject, FSwitchToCameraData SwitchToCameraData, FLatentActionInfo LatentInfo);
	
	/*
	 * Character 3D Nodes
	*/
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void ShowCharacter3D(UObject* WorldContextObject, FShowCharacter3DData ShowCharacter3DData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void HideCharacter3D(UObject* WorldContextObject, FHideCharacter3DData HideCharacter3DData, FLatentActionInfo LatentInfo);

	/*
	 * Dialog Audio
	 */
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlayBackgroundMusic(UObject* WorldContextObject, FPlayDialogAudioBackgroundMusicData PlayDialogAudioBackgroundMusicData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlaySoundEffect(UObject* WorldContextObject, FPlayDialogAudioData PlayDialogAudioData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlayCharacterVoiceOver(UObject* WorldContextObject, FPlayDialogAudioCharacterVoiceOverData PlayDialogAudioCharacterVoiceOverData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", Latent, LatentInfo = "LatentInfo"), Category = "Visual Novel Machinery")
	static void PlayDialogVoiceOver(UObject* WorldContextObject, FPlayDialogAudioDialogVoiceOverData PlayDialogAudioDialogVoiceOverData, FLatentActionInfo LatentInfo);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void StopBackgroundMusic(UObject* WorldContextObject, FStopDialogAudioData StopDialogAudioData);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void StopSoundEffect(UObject* WorldContextObject, FStopDialogAudioData StopDialogAudioData);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void StopVoiceOver(UObject* WorldContextObject, FStopDialogAudioData StopDialogAudioData);

	/*
	 * Utility functions
	 */

	/** Converts a string to a  value, either 'true' or 'false' */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To String (Boolean)", CompactNodeTitle = "->", BlueprintAutocast), Category="Utilities|String")
	static bool Conv_StringToBool(const FString& InString);
	
	/** Converts a byte value to a string */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To String (Byte)", CompactNodeTitle = "->", BlueprintAutocast), Category="Utilities|String")
	static uint8 Conv_StringToByte(const FString& InString);
	
	/** Converts a int64 value to a string */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To String (Integer64)", CompactNodeTitle = "->", BlueprintAutocast), Category="Utilities|String")
	static int64 Conv_StringToInt64(const FString& InString);
	
};


