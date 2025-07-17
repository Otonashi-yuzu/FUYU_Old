// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/BaseControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseControllerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent_NoRegister();
// End Cross Module References

// Begin Class UBaseControllerComponent
void UBaseControllerComponent::StaticRegisterNativesUBaseControllerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseControllerComponent);
UClass* Z_Construct_UClass_UBaseControllerComponent_NoRegister()
{
	return UBaseControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/BaseControllerComponent.h" },
		{ "ModuleRelativePath", "Public/Component/BaseControllerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseControllerComponent_Statics::ClassParams = {
	&UBaseControllerComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseControllerComponent()
{
	if (!Z_Registration_Info_UClass_UBaseControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseControllerComponent.OuterSingleton, Z_Construct_UClass_UBaseControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseControllerComponent>()
{
	return UBaseControllerComponent::StaticClass();
}
UBaseControllerComponent::UBaseControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseControllerComponent);
UBaseControllerComponent::~UBaseControllerComponent() {}
// End Class UBaseControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_BaseControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseControllerComponent, UBaseControllerComponent::StaticClass, TEXT("UBaseControllerComponent"), &Z_Registration_Info_UClass_UBaseControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseControllerComponent), 3020075470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_BaseControllerComponent_h_4146596464(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_BaseControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_BaseControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
