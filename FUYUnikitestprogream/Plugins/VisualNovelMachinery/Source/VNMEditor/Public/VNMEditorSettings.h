// Copyright (c) 2022 Al_Fe

#pragma once

#include "VNMEditorSettings.generated.h"

UENUM()
enum class EDialogTextNodeFieldStyleType : uint8
{
	MULTILINE_TEXT,
	SINGLE_LINE_TEXT
};

/**
* Implements the settings for the Visual Novel Machinery plugin.
*/
UCLASS(config = Editor, defaultconfig)
class VNMEDITOR_API UVNMEditorSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UVNMEditorSettings(const FObjectInitializer& ObjectInitializer);
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
	static UVNMEditorSettings* GetVNMEditorSettings() { return GetMutableDefault<UVNMEditorSettings>(); }

	UPROPERTY(config, EditAnywhere, Category = "Dialog Text Node")
	EDialogTextNodeFieldStyleType DialogTextNodeFieldStyle = EDialogTextNodeFieldStyleType::MULTILINE_TEXT;

	UPROPERTY(config, EditAnywhere, Category = "Dialog Text Node", meta=(EditCondition="DialogTextNodeFieldStyle==EDialogTextNodeFieldStyleType::MULTILINE_TEXT", EditConditionHides))
	float AutoWrapDialogTextInNodeAt = 300.f;

	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogTextNodeColor = FLinearColor(0.f, 1.f, 0.f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogChoiceNodeColor = FLinearColor(0.f, 0.f, 1.f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogEndNodeColor = FLinearColor(1.f, 0.f, 0.f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogStartSubDialogNodeColor = FLinearColor(1.f, 0.f, 0.f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogWindowNodeColor = FLinearColor(0.f, 0.f, 0.f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor CharacterNodesColor = FLinearColor(1.f, 1.f, 0.f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor MemoryNodesColor = FLinearColor::Yellow;
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor CgNodeColor = FLinearColor(0.278894f, 0.003677f,0.049707f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor SceneBackgroundNodeColor = FLinearColor(0.278894f, 0.003677f,0.049707f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogSceneNodeColor = FLinearColor(0.278894f, 0.003677f,0.049707f);
	
	UPROPERTY(config, EditAnywhere, Category = "Node Colors")
	FLinearColor DialogAudioColor = FLinearColor(0.228463f,0.0f, 0.278894f);

	UPROPERTY(Config, EditAnywhere, Category = "Choice Graph")
	bool bSaveDialogBlueprintOnBuildingChoiceData = true;
};
