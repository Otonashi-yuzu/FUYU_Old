// Copyright (c) 2022 Al_Fe

#include "VNMEditorModule.h"


#include "AssetToolsModule.h"
#include "DialogObjectAssetActions.h"
#include "IAssetTools.h"
#include "ImageDefinitionCustomization.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "PropertyEditorModule.h"
#include "VNMSettings.h"
#include "DetailsCustomization/DialogSceneDefinitionCustomization.h"
#define LOCTEXT_NAMESPACE "VNM"

class FVNMEditorModule : public IVNMEditorModule
{
	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;

	FSlateStyleSet VNMStyleSet{ "VNM" };
};


// General Log
DEFINE_LOG_CATEGORY(LogVNMEditor);

IMPLEMENT_MODULE(FVNMEditorModule, VNMEditor)

void FVNMEditorModule::StartupModule()
{
	const FString contentDir = IPluginManager::Get().FindPlugin("VisualNovelMachinery")->GetBaseDir() + "/Content/Slate";

	auto addIcon = [&](FSlateStyleSet& set, const char* name, const char* filename, FVector2D size = { 16.0f, 16.0f })
	{
		set.Set(name, new FSlateImageBrush(contentDir + filename, size));
	};

	addIcon(VNMStyleSet, "NodeIcon.Settings", "/NodeIcons/VNM_Settings.png");
	addIcon(VNMStyleSet, "NodeIcon.Choice", "/NodeIcons/VNM_Choice.png");
	addIcon(VNMStyleSet, "NodeIcon.Dialog", "/NodeIcons/VNM_Dialog.png");
	addIcon(VNMStyleSet, "NodeIcon.End", "/NodeIcons/VNM_End.png");
	addIcon(VNMStyleSet, "NodeIcon.Start", "/NodeIcons/VNM_Start.png");
	addIcon(VNMStyleSet, "NodeIcon.Character", "/NodeIcons/VNM_Character.png");
	addIcon(VNMStyleSet, "NodeIcon.Memory", "/NodeIcons/VNM_Memory.png");
	addIcon(VNMStyleSet, "NodeIcon.Cg", "/NodeIcons/VNM_Cg.png");
	addIcon(VNMStyleSet, "NodeIcon.SceneBackground", "/NodeIcons/VNM_SceneBackground.png");
	addIcon(VNMStyleSet, "NodeIcon.Window", "/NodeIcons/VNM_Window.png");
	addIcon(VNMStyleSet, "NodeIcon.Audio", "/NodeIcons/VNM_Audio.png");
	
	addIcon(VNMStyleSet, "ClassIcon.DialogObject", "/ObjectIcons/VNM_DialogIconx16.png");
	addIcon(VNMStyleSet, "ClassThumbnail.DialogObject", "/ObjectIcons/VNM_DialogIconx64.png", FVector2D(64.f, 64.f));
	
	
	addIcon(VNMStyleSet, "ToolBarIcons.ChoiceGraphData.Small", "/ToolBarIcons/VNM_ChoiceGraphData_Small.png");
	addIcon(VNMStyleSet, "ToolBarIcons.ChoiceGraphData", "/ToolBarIcons/VNM_ChoiceGraphData.png", FVector2D(48.f, 48.f));
	addIcon(VNMStyleSet, "ToolBarIcons.ChoiceGraphDataBad.Small", "/ToolBarIcons/VNM_ChoiceGraphData_Bad_Small.png");
	addIcon(VNMStyleSet, "ToolBarIcons.ChoiceGraphDataBad", "/ToolBarIcons/VNM_ChoiceGraphData_Bad.png", FVector2D(48.f, 48.f));
	addIcon(VNMStyleSet, "ToolBarIcons.ChoiceGraphDataGood.Small", "/ToolBarIcons/VNM_ChoiceGraphData_Good_Small.png");
	addIcon(VNMStyleSet, "ToolBarIcons.ChoiceGraphDataGood", "/ToolBarIcons/VNM_ChoiceGraphData_Good.png", FVector2D(48.f, 48.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnTextNode.Small", "/ToolBarIcons/VNM_SpawnTextNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnTextNode", "/ToolBarIcons/VNM_SpawnTextNode.png", FVector2D(32.f, 32.f));
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnChoiceNode.Small", "/ToolBarIcons/VNM_SpawnChoiceNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnChoiceNode", "/ToolBarIcons/VNM_SpawnChoiceNode.png", FVector2D(32.f, 32.f));
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnWindowNode.Small", "/ToolBarIcons/VNM_SpawnDialogWindowNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnWindowNode", "/ToolBarIcons/VNM_SpawnDialogWindowNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnCharacterNode.Small", "/ToolBarIcons/VNM_SpawnCharacterNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnCharacterNode", "/ToolBarIcons/VNM_SpawnCharacterNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.MemoryNode.Small", "/ToolBarIcons/VNM_MemoryNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.MemoryNode", "/ToolBarIcons/VNM_MemoryNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.AudioNode.Small", "/ToolBarIcons/VNM_AudioNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.AudioNode", "/ToolBarIcons/VNM_AudioNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnCgNode.Small", "/ToolBarIcons/VNM_SpawnCgNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnCgNode", "/ToolBarIcons/VNM_SpawnCgNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnSceneBackgroundNode.Small", "/ToolBarIcons/VNM_SpawnSceneBackgroundNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnSceneBackgroundNode", "/ToolBarIcons/VNM_SpawnSceneBackgroundNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnDialogEndNode.Small", "/ToolBarIcons/VNM_SpawnDialogEndNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnDialogEndNode", "/ToolBarIcons/VNM_SpawnDialogEndNode.png", FVector2D(32.f, 32.f));
	
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnDialogStartNode.Small", "/ToolBarIcons/VNM_SpawnDialogStartNodeSmall.png");
	addIcon(VNMStyleSet, "ToolBarIcons.SpawnDialogStartNode", "/ToolBarIcons/VNM_SpawnDialogStartNode.png", FVector2D(32.f, 32.f));

	FSlateStyleRegistry::RegisterSlateStyle(VNMStyleSet);

	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomClassLayout(FDialogSceneDefinition::StaticStruct()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FDialogSceneDefinitionCustomization::MakeInstance));
		PropertyModule.RegisterCustomPropertyTypeLayout(FImageDefinition::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FImageDefinitionCustomization::MakeInstance));
		PropertyModule.NotifyCustomizationModuleChanged();
	}
	
	IAssetTools &AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	{
		AssetTools.RegisterAdvancedAssetCategory(TEXT("VNM"), LOCTEXT("VNMCategory", "Visual Novel Machinery"));
		AssetTools.RegisterAssetTypeActions(MakeShareable(new FDialogObjectAssetActions()));
	}
}

void FVNMEditorModule::ShutdownModule()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(VNMStyleSet);
}

FText VNMMenuCategory()
{
	return LOCTEXT("Nodes.MenuCategory", "Visual Novel Machinery");
}

#undef LOCTEXT_NAMESPACE