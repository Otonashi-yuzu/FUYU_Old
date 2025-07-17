// Copyright (c) 2022 Al_Fe

#pragma once
#include "CoreMinimal.h"
#include "BlueprintEditor.h"
#include "Widgets/Docking/SDockTab.h"

class FVNMTab
{
public:
	static void Initialize();

protected:
	static void OnRegisterTabsForEditor(FWorkflowAllowedTabSet& TabFactories, FName ModeName, TSharedPtr<FBlueprintEditor> BlueprintEditor);
	static void OnRegisterLayoutExtensions(FLayoutExtender& LayoutExtender);
};
