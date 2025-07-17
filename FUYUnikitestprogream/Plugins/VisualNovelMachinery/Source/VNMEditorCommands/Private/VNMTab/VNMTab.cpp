// Copyright (c) 2022 Al_Fe

#include "VNMTab.h"

#include "BlueprintEditorModule.h"
#include "BlueprintEditorTabs.h"
#include "DialogObject.h"
#include "SVNMTab.h"
#include "VNMTabSummoner.h"
#include "Framework/Docking/LayoutExtender.h"
#include "Modules/ModuleManager.h"
#include "WorkflowOrientedApp/ApplicationMode.h"

void FVNMTab::Initialize()
{
	auto& BlueprintModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
	BlueprintModule.OnRegisterTabsForEditor().AddStatic(&FVNMTab::OnRegisterTabsForEditor);
	BlueprintModule.OnRegisterLayoutExtensions().AddStatic(&FVNMTab::OnRegisterLayoutExtensions);
}

void FVNMTab::OnRegisterTabsForEditor(FWorkflowAllowedTabSet& TabFactories, FName ModeName, TSharedPtr<FBlueprintEditor> BlueprintEditor)
{
	UBlueprint* Blueprint = BlueprintEditor->GetBlueprintObj();
	if (Blueprint == nullptr)
		return;
	if (Blueprint->ParentClass == nullptr)
		return;
	if (Blueprint->ParentClass->IsChildOf(UDialogObject::StaticClass()) == false)
		return;

	TabFactories.RegisterFactory(MakeShared<FVNMTabSummoner>(BlueprintEditor));
}

void FVNMTab::OnRegisterLayoutExtensions(FLayoutExtender& LayoutExtender)
{
	LayoutExtender.ExtendLayout(FBlueprintEditorTabs::DetailsID, ELayoutExtensionPosition::After, FTabManager::FTab(FTabId(TEXT("VNMTab")), ETabState::OpenedTab));
}
