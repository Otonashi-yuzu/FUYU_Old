// Copyright (c) 2022 Al_Fe

#include "VNMChoiceGraphModule.h"

#define LOCTEXT_NAMESPACE "VNM"

class FVNMChoiceGraphModule : public IVNMChoiceGraphModule
{
	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;
};

// General Log
DEFINE_LOG_CATEGORY(LogVNMChoiceGraph);

IMPLEMENT_MODULE(FVNMChoiceGraphModule, VNMChoiceGraph)

void FVNMChoiceGraphModule::StartupModule()
{
}

void FVNMChoiceGraphModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE