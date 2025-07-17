// Copyright (c) 2022 Al_Fe

#include "AdvancedLayeredImageModule.h"

#define LOCTEXT_NAMESPACE "ALI"

class FAdvancedLayeredImageModule : public IAdvancedLayeredImageModule
{
	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;
};

// General Log
DEFINE_LOG_CATEGORY(LogAdvancedLayeredImage);

IMPLEMENT_MODULE(FAdvancedLayeredImageModule, AdvancedLayeredImage)

void FAdvancedLayeredImageModule::StartupModule()
{
}

void FAdvancedLayeredImageModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE