// Copyright (c) 2022 Al_Fe

#include "VNMModule.h"

#define LOCTEXT_NAMESPACE "VNM"

class FVNMModule : public IVNMModule
{
	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;

private:
};

// General Log
DEFINE_LOG_CATEGORY(LogVNM);

IMPLEMENT_MODULE(FVNMModule, VNM)

void FVNMModule::StartupModule()
{
}

void FVNMModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE