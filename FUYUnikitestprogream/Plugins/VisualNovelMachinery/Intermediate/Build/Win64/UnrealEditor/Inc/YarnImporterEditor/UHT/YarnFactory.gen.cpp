// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnImporterEditor/Public/YarnFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_YarnImporterEditor();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
YARNIMPORTEREDITOR_API UClass* Z_Construct_UClass_UYarnFactory();
YARNIMPORTEREDITOR_API UClass* Z_Construct_UClass_UYarnFactory_NoRegister();
// End Cross Module References

// Begin Class UYarnFactory
void UYarnFactory::StaticRegisterNativesUYarnFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYarnFactory);
UClass* Z_Construct_UClass_UYarnFactory_NoRegister()
{
	return UYarnFactory::StaticClass();
}
struct Z_Construct_UClass_UYarnFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "YarnFactory.h" },
		{ "ModuleRelativePath", "Public/YarnFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "DialogObjectFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/YarnFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYarnFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UYarnFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYarnFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYarnFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYarnFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYarnFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYarnFactory_Statics::ClassParams = {
	&UYarnFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UYarnFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UYarnFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYarnFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UYarnFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYarnFactory()
{
	if (!Z_Registration_Info_UClass_UYarnFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYarnFactory.OuterSingleton, Z_Construct_UClass_UYarnFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYarnFactory.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UClass* StaticClass<UYarnFactory>()
{
	return UYarnFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYarnFactory);
UYarnFactory::~UYarnFactory() {}
// End Class UYarnFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_YarnFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYarnFactory, UYarnFactory::StaticClass, TEXT("UYarnFactory"), &Z_Registration_Info_UClass_UYarnFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYarnFactory), 1977554144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_YarnFactory_h_1304720817(TEXT("/Script/YarnImporterEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_YarnFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Public_YarnFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
