// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/DialogBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogBlueprintGeneratedClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UDialogBlueprintGeneratedClass();
VNM_API UClass* Z_Construct_UClass_UDialogBlueprintGeneratedClass_NoRegister();
// End Cross Module References

// Begin Class UDialogBlueprintGeneratedClass
void UDialogBlueprintGeneratedClass::StaticRegisterNativesUDialogBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UDialogBlueprintGeneratedClass_NoRegister()
{
	return UDialogBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/DialogBlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics::ClassParams = {
	&UDialogBlueprintGeneratedClass::StaticClass,
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
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UDialogBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UDialogBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogBlueprintGeneratedClass.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogBlueprintGeneratedClass>()
{
	return UDialogBlueprintGeneratedClass::StaticClass();
}
UDialogBlueprintGeneratedClass::UDialogBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogBlueprintGeneratedClass);
UDialogBlueprintGeneratedClass::~UDialogBlueprintGeneratedClass() {}
// End Class UDialogBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogBlueprintGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogBlueprintGeneratedClass, UDialogBlueprintGeneratedClass::StaticClass, TEXT("UDialogBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UDialogBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogBlueprintGeneratedClass), 3586565300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogBlueprintGeneratedClass_h_1054888375(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_DialogBlueprintGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
