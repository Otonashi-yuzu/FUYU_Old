// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "VNMBasePopUpWidget.h"
#include "VNMBaseTextBoxPopUpWidget.h"
#include "VNMUISettings.generated.h"

USTRUCT(BlueprintType)
struct FInputConfigSettings
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TMap<FKey, UTexture2D*> KeyboardMouseInputIcons;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input")
	TMap<FKey, UTexture2D*> GamepadInputIcons;
};
/**
 * 
 */
UCLASS(config = Engine, defaultconfig)
class VNM_API UVNMUISettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	static UVNMUISettings* Get() { return GetMutableDefault<UVNMUISettings>(); }

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Pop Ups")
	TSubclassOf<UVNMBasePopUpWidget> SimplePopUpClass;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Pop Ups")
	TSubclassOf<UVNMBaseTextBoxPopUpWidget> TextBoxPopUpClass;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Pop Ups", meta=(ShowOnlyInnerProperties))
	FInputConfigSettings InputSettings;

};
