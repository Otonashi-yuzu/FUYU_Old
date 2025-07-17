// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "DialogScenesDataAsset.h"
#include "Engine/DeveloperSettings.h"


#include "VNMChoiceGraphSettings.generated.h"

USTRUCT(BlueprintType)
struct FVisualNovelMachineryChoiceGraphSettings
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	UDialogScenesDataAsset* DialogScenesData;
};

/**
* Implements the settings for the Visual Novel Machinery Choice Graph
*/
UCLASS(config = Engine, defaultconfig)
class VNMCHOICEGRAPH_API UVNMChoiceGraphSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:	
	UFUNCTION(BlueprintPure, Category=Settings)
	static UVNMChoiceGraphSettings* GetVNMChoiceGraphSettings() { return GetMutableDefault<UVNMChoiceGraphSettings>(); }
	
	/** Gets the settings container name for the settings, either Project or Editor */
	virtual FName GetContainerName() const override { return TEXT("Project"); }
	/** Gets the category for the settings, some high level grouping like, Editor, Engine, Game...etc. */
	virtual FName GetCategoryName() const override { return TEXT("Plugins"); }
	/** The unique name for your section of settings, uses the class's FName. */
	virtual FName GetSectionName() const override { return TEXT("VNMChoiceGraphSettings"); }

#if WITH_EDITOR
	/** Gets the section text, uses the classes DisplayName by default. */
	virtual FText GetSectionText() const override { return NSLOCTEXT("VNMChoiceGraph", "RuntimeSettingsName", "Visual Novel Machinery Choice Graph"); }
	/** Gets the description for the section, uses the classes ToolTip by default. */
	virtual FText GetSectionDescription() const override { return NSLOCTEXT("VNMChoiceGraph", "RuntimeSettingsDescription", "Configure the Visual Novel Machinery Choice Graph"); }

#endif
	

	UPROPERTY(config, EditAnywhere, BlueprintReadOnly, Category=Settings)
	FVisualNovelMachineryChoiceGraphSettings Settings;
	
	
};
