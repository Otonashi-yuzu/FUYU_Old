// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/Factories/DialogObjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogObjectFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogObjectFactory();
VNMEDITOR_API UClass* Z_Construct_UClass_UDialogObjectFactory_NoRegister();
// End Cross Module References

// Begin Class UDialogObjectFactory
void UDialogObjectFactory::StaticRegisterNativesUDialogObjectFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogObjectFactory);
UClass* Z_Construct_UClass_UDialogObjectFactory_NoRegister()
{
	return UDialogObjectFactory::StaticClass();
}
struct Z_Construct_UClass_UDialogObjectFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DialogObjectFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/DialogObjectFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[] = {
		{ "Category", "DialogObjectFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Public/Factories/DialogObjectFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "DialogObjectFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/Factories/DialogObjectFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogObjectFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogObjectFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogObjectFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintType_MetaData), NewProp_BlueprintType_MetaData) }; // 3915063642
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogObjectFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogObjectFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogObjectFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogObjectFactory_Statics::NewProp_BlueprintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogObjectFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObjectFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogObjectFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObjectFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogObjectFactory_Statics::ClassParams = {
	&UDialogObjectFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogObjectFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObjectFactory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogObjectFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogObjectFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogObjectFactory()
{
	if (!Z_Registration_Info_UClass_UDialogObjectFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogObjectFactory.OuterSingleton, Z_Construct_UClass_UDialogObjectFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogObjectFactory.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UDialogObjectFactory>()
{
	return UDialogObjectFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogObjectFactory);
UDialogObjectFactory::~UDialogObjectFactory() {}
// End Class UDialogObjectFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Factories_DialogObjectFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogObjectFactory, UDialogObjectFactory::StaticClass, TEXT("UDialogObjectFactory"), &Z_Registration_Info_UClass_UDialogObjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogObjectFactory), 2744095499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Factories_DialogObjectFactory_h_3542444881(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Factories_DialogObjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_Factories_DialogObjectFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
