// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/SaveGame/VNMBaseSaveGame.h"
#include "VNM/Public/Common/VNMDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMBaseSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMBaseSaveGame();
VNM_API UClass* Z_Construct_UClass_UVNMBaseSaveGame_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FGameSnapshot();
// End Cross Module References

// Begin Class UVNMBaseSaveGame
void UVNMBaseSaveGame::StaticRegisterNativesUVNMBaseSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMBaseSaveGame);
UClass* Z_Construct_UClass_UVNMBaseSaveGame_NoRegister()
{
	return UVNMBaseSaveGame::StaticClass();
}
struct Z_Construct_UClass_UVNMBaseSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGame/VNMBaseSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/VNMBaseSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/VNMBaseSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMBaseSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMBaseSaveGame_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBaseSaveGame, Snapshot), Z_Construct_UScriptStruct_FGameSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 1892054901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMBaseSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBaseSaveGame_Statics::NewProp_Snapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMBaseSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMBaseSaveGame_Statics::ClassParams = {
	&UVNMBaseSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMBaseSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseSaveGame_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMBaseSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMBaseSaveGame()
{
	if (!Z_Registration_Info_UClass_UVNMBaseSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMBaseSaveGame.OuterSingleton, Z_Construct_UClass_UVNMBaseSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMBaseSaveGame.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMBaseSaveGame>()
{
	return UVNMBaseSaveGame::StaticClass();
}
UVNMBaseSaveGame::UVNMBaseSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMBaseSaveGame);
UVNMBaseSaveGame::~UVNMBaseSaveGame() {}
// End Class UVNMBaseSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBaseSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMBaseSaveGame, UVNMBaseSaveGame::StaticClass, TEXT("UVNMBaseSaveGame"), &Z_Registration_Info_UClass_UVNMBaseSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMBaseSaveGame), 3083949345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBaseSaveGame_h_1872748574(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBaseSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_SaveGame_VNMBaseSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
