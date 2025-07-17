// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VNMGeneralUtils.generated.h"

class UCharacter3DControllerComponent;
class UMemoryControllerComponent;
class UDialogImageControllerComponent;
class UDialogSceneControllerComponent;
class UDialogControllerComponent;
class UCharacterControllerComponent;
/**
 * 
 */
UCLASS()
class VNM_API UVNMGeneralUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category="VNM General Utils")
	static FString GetProjectVersion();

	UFUNCTION(BlueprintPure, Category="VNM General Utils")
	static FString GetProjectName();

	UFUNCTION(BlueprintPure, Category="VNM General Utils")
	static FString GetCompanyName();

	UFUNCTION(BlueprintPure, Category="VNM General Utils")
	static FString GetVisualNovelMachineryVersion();

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UCharacterControllerComponent* GetCharacterControllerComponent(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UCharacter3DControllerComponent* GetCharacter3DControllerComponent(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UDialogControllerComponent* GetDialogControllerComponent(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UDialogSceneControllerComponent* GetDialogSceneControllerComponent(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UDialogImageControllerComponent* GetDialogImageControllerComponent(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UMemoryControllerComponent* GetMemoryControllerComponent(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category="VNM General Utils", meta = (WorldContext = "WorldContextObject"))
	static UDialogAudioControllerComponent* GetDialogAudioControllerComponent(UObject* WorldContextObject);
};
