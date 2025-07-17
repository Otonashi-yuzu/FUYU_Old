// Copyright (c) 2022 Al_Fe

#include "VNMEditorCommandsModule.h"

#include "DialogEditorToolbar.h"
#include "VNMTab/VNMTab.h"

#define LOCTEXT_NAMESPACE "VNM"

class FVNMEditorCommandsModule : public IVNMEditorCommandsModule
{
	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;
};

// General Log
DEFINE_LOG_CATEGORY(LogVNMEditorCommands);

IMPLEMENT_MODULE(FVNMEditorCommandsModule, VNMEditorCommands)

void FVNMEditorCommandsModule::StartupModule()
{
	FDialogEditorToolbar::Initialize();
	FVNMTab::Initialize();
}

void FVNMEditorCommandsModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE