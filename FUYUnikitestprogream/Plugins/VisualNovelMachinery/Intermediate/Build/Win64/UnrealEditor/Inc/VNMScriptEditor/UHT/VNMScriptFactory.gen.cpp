// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMScriptEditor/Public/VNMScriptFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMScriptFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VNMScriptEditor();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNMSCRIPTEDITOR_API UClass* Z_Construct_UClass_UVNMScriptFactory();
VNMSCRIPTEDITOR_API UClass* Z_Construct_UClass_UVNMScriptFactory_NoRegister();
// End Cross Module References

// Begin Class UVNMScriptFactory
void UVNMScriptFactory::StaticRegisterNativesUVNMScriptFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMScriptFactory);
UClass* Z_Construct_UClass_UVNMScriptFactory_NoRegister()
{
	return UVNMScriptFactory::StaticClass();
}
struct Z_Construct_UClass_UVNMScriptFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VNMScriptFactory.h" },
		{ "ModuleRelativePath", "Public/VNMScriptFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "DialogObjectFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/VNMScriptFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMScriptFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMScriptFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMScriptFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMScriptFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMScriptFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMScriptFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMScriptFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMScriptEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMScriptFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMScriptFactory_Statics::ClassParams = {
	&UVNMScriptFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMScriptFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMScriptFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMScriptFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMScriptFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMScriptFactory()
{
	if (!Z_Registration_Info_UClass_UVNMScriptFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMScriptFactory.OuterSingleton, Z_Construct_UClass_UVNMScriptFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMScriptFactory.OuterSingleton;
}
template<> VNMSCRIPTEDITOR_API UClass* StaticClass<UVNMScriptFactory>()
{
	return UVNMScriptFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMScriptFactory);
UVNMScriptFactory::~UVNMScriptFactory() {}
// End Class UVNMScriptFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_VNMScriptFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMScriptFactory, UVNMScriptFactory::StaticClass, TEXT("UVNMScriptFactory"), &Z_Registration_Info_UClass_UVNMScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMScriptFactory), 10124231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_VNMScriptFactory_h_3882811142(TEXT("/Script/VNMScriptEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_VNMScriptFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMScriptEditor_Public_VNMScriptFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
