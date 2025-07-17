// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Actors/VNMCineCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMCineCameraActor() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_AVNMCineCameraActor();
VNM_API UClass* Z_Construct_UClass_AVNMCineCameraActor_NoRegister();
// End Cross Module References

// Begin Class AVNMCineCameraActor
void AVNMCineCameraActor::StaticRegisterNativesAVNMCineCameraActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVNMCineCameraActor);
UClass* Z_Construct_UClass_AVNMCineCameraActor_NoRegister()
{
	return AVNMCineCameraActor::StaticClass();
}
struct Z_Construct_UClass_AVNMCineCameraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "Actors/VNMCineCameraActor.h" },
		{ "ModuleRelativePath", "Public/Actors/VNMCineCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVNMCineCameraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVNMCineCameraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCineCameraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVNMCineCameraActor_Statics::ClassParams = {
	&AVNMCineCameraActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVNMCineCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVNMCineCameraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVNMCineCameraActor()
{
	if (!Z_Registration_Info_UClass_AVNMCineCameraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVNMCineCameraActor.OuterSingleton, Z_Construct_UClass_AVNMCineCameraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVNMCineCameraActor.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<AVNMCineCameraActor>()
{
	return AVNMCineCameraActor::StaticClass();
}
AVNMCineCameraActor::AVNMCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVNMCineCameraActor);
AVNMCineCameraActor::~AVNMCineCameraActor() {}
// End Class AVNMCineCameraActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCineCameraActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVNMCineCameraActor, AVNMCineCameraActor::StaticClass, TEXT("AVNMCineCameraActor"), &Z_Registration_Info_UClass_AVNMCineCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVNMCineCameraActor), 886482942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCineCameraActor_h_1708204911(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCineCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Actors_VNMCineCameraActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
