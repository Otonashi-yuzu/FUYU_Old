// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Actors/VNMCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMCameraActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_AVNMCameraActor();
VNM_API UClass* Z_Construct_UClass_AVNMCameraActor_NoRegister();
// End Cross Module References

// Begin Class AVNMCameraActor
void AVNMCameraActor::StaticRegisterNativesAVNMCameraActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVNMCameraActor);
UClass* Z_Construct_UClass_AVNMCameraActor_NoRegister()
{
	return AVNMCameraActor::StaticClass();
}
struct Z_Construct_UClass_AVNMCameraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Actors/VNMCameraActor.h" },
		{ "ModuleRelativePath", "Public/Actors/VNMCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVNMCameraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVNMCameraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCameraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVNMCameraActor_Statics::ClassParams = {
	&AVNMCameraActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVNMCameraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVNMCameraActor()
{
	if (!Z_Registration_Info_UClass_AVNMCameraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVNMCameraActor.OuterSingleton, Z_Construct_UClass_AVNMCameraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVNMCameraActor.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<AVNMCameraActor>()
{
	return AVNMCameraActor::StaticClass();
}
AVNMCameraActor::AVNMCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVNMCameraActor);
AVNMCameraActor::~AVNMCameraActor() {}
// End Class AVNMCameraActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCameraActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVNMCameraActor, AVNMCameraActor::StaticClass, TEXT("AVNMCameraActor"), &Z_Registration_Info_UClass_AVNMCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVNMCameraActor), 3876715666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCameraActor_h_2524611129(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCameraActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
