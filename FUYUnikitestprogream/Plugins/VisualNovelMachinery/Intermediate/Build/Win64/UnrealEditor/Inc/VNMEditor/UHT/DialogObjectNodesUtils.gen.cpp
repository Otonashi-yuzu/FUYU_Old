// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/DialogObjectNodesUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogObjectNodesUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogObjectNodesUtils();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogObjectNodesUtils_NoRegister();
// End Cross Module References

// Begin Class UDialogObjectNodesUtils
void UDialogObjectNodesUtils::StaticRegisterNativesUDialogObjectNodesUtils()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogObjectNodesUtils);
UClass* Z_Construct_UClass_UDialogObjectNodesUtils_NoRegister()
{
	return UDialogObjectNodesUtils::StaticClass();
}
struct Z_Construct_UClass_UDialogObjectNodesUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogObjectNodesUtils.h" },
		{ "ModuleRelativePath", "Public/DialogObjectNodesUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogObjectNodesUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogObjectNodesUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObjectNodesUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogObjectNodesUtils_Statics::ClassParams = {
	&UDialogObjectNodesUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObjectNodesUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogObjectNodesUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogObjectNodesUtils()
{
	if (!Z_Registration_Info_UClass_UDialogObjectNodesUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogObjectNodesUtils.OuterSingleton, Z_Construct_UClass_UDialogObjectNodesUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogObjectNodesUtils.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogObjectNodesUtils>()
{
	return UDialogObjectNodesUtils::StaticClass();
}
UDialogObjectNodesUtils::UDialogObjectNodesUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogObjectNodesUtils);
UDialogObjectNodesUtils::~UDialogObjectNodesUtils() {}
// End Class UDialogObjectNodesUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_DialogObjectNodesUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogObjectNodesUtils, UDialogObjectNodesUtils::StaticClass, TEXT("UDialogObjectNodesUtils"), &Z_Registration_Info_UClass_UDialogObjectNodesUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogObjectNodesUtils), 3062949621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_DialogObjectNodesUtils_h_900593271(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_DialogObjectNodesUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_DialogObjectNodesUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
