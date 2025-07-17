// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Utility/EnumUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumUtility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UEnumUtility();
VNM_API UClass* Z_Construct_UClass_UEnumUtility_NoRegister();
// End Cross Module References

// Begin Class UEnumUtility
void UEnumUtility::StaticRegisterNativesUEnumUtility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnumUtility);
UClass* Z_Construct_UClass_UEnumUtility_NoRegister()
{
	return UEnumUtility::StaticClass();
}
struct Z_Construct_UClass_UEnumUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utility/EnumUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/EnumUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnumUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnumUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnumUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnumUtility_Statics::ClassParams = {
	&UEnumUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnumUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnumUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnumUtility()
{
	if (!Z_Registration_Info_UClass_UEnumUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnumUtility.OuterSingleton, Z_Construct_UClass_UEnumUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnumUtility.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UEnumUtility>()
{
	return UEnumUtility::StaticClass();
}
UEnumUtility::UEnumUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnumUtility);
UEnumUtility::~UEnumUtility() {}
// End Class UEnumUtility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_EnumUtility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnumUtility, UEnumUtility::StaticClass, TEXT("UEnumUtility"), &Z_Registration_Info_UClass_UEnumUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnumUtility), 1957578549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_EnumUtility_h_3263178963(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_EnumUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Utility_EnumUtility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
