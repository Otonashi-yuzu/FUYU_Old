#include "VNMWidgetGenerator.h"

#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "AssetActions/MainMenuWidgetAssetActions.h"
#include "AssetActions/VNMWidgetAssetActions.h"

#define LOCTEXT_NAMESPACE "FVNMWidgetGeneratorModule"

void FVNMWidgetGeneratorModule::StartupModule()
{
	IAssetTools &AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	{
		AssetTools.RegisterAdvancedAssetCategory(TEXT("VNM"), LOCTEXT("VNMCategory", "Visual Novel Machinery"));
		AssetTools.RegisterAssetTypeActions(MakeShareable(new FVNMWidgetAssetActions()));
		AssetTools.RegisterAssetTypeActions(MakeShareable(new FMainMenuWidgetAssetActions()));
	}
}

void FVNMWidgetGeneratorModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FVNMWidgetGeneratorModule, VNMWidgetGenerator)