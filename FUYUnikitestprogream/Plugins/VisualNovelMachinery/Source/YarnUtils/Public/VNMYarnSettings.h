// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YarnCommandBlueprintLibrary.h"
#include "YarnFunctionBlueprintLibrary.h"
#include "Engine/DeveloperSettings.h"
#include "VNMYarnSettings.generated.h"

/**
 * 
 */
UCLASS(Config=Engine, DefaultConfig)
class YARNUTILS_API UVNMYarnSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
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
	
	static UVNMYarnSettings* Get() { return GetMutableDefault<UVNMYarnSettings>(); }

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Config, Category="Yarn")
	TSubclassOf<UYarnFunctionBlueprintLibrary> YarnFunctionLibrary = UYarnFunctionBlueprintLibrary::StaticClass();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Config, Category="Yarn")
	TSubclassOf<UYarnCommandBlueprintLibrary> YarnCommandLibrary = UYarnCommandBlueprintLibrary::StaticClass();
};
