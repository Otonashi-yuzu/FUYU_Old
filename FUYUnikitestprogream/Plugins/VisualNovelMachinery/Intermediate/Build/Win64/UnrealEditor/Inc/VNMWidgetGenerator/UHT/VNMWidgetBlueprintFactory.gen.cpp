// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMWidgetGenerator/Public/Factories/VNMWidgetBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMWidgetBlueprintFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VNMWidgetGenerator();
VNMWIDGETGENERATOR_API UClass* Z_Construct_UClass_UVNMWidgetBlueprintFactory();
VNMWIDGETGENERATOR_API UClass* Z_Construct_UClass_UVNMWidgetBlueprintFactory_NoRegister();
VNMWIDGETGENERATOR_API UEnum* Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget();
// End Cross Module References

// Begin Class UVNMWidgetBlueprintFactory
void UVNMWidgetBlueprintFactory::StaticRegisterNativesUVNMWidgetBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMWidgetBlueprintFactory);
UClass* Z_Construct_UClass_UVNMWidgetBlueprintFactory_NoRegister()
{
	return UVNMWidgetBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VNMWidgetBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/VNMWidgetBlueprintFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/VNMWidgetBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalWidgetClass2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/VNMWidgetBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VNMWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/VNMWidgetBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "WidgetBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/Factories/VNMWidgetBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalWidgetClass2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VNMWidget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VNMWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMWidgetBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClass = { "AdditionalWidgetClass", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMWidgetBlueprintFactory, AdditionalWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalWidgetClass_MetaData), NewProp_AdditionalWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClass2 = { "AdditionalWidgetClass2", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMWidgetBlueprintFactory, AdditionalWidgetClass2), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalWidgetClass2_MetaData), NewProp_AdditionalWidgetClass2_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_VNMWidget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_VNMWidget = { "VNMWidget", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMWidgetBlueprintFactory, VNMWidget), Z_Construct_UEnum_VNMWidgetGenerator_EVNMWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VNMWidget_MetaData), NewProp_VNMWidget_MetaData) }; // 2588184914
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMWidgetBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClass2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_VNMWidget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_VNMWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMWidgetGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::ClassParams = {
	&UVNMWidgetBlueprintFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMWidgetBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UVNMWidgetBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMWidgetBlueprintFactory.OuterSingleton, Z_Construct_UClass_UVNMWidgetBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMWidgetBlueprintFactory.OuterSingleton;
}
template<> VNMWIDGETGENERATOR_API UClass* StaticClass<UVNMWidgetBlueprintFactory>()
{
	return UVNMWidgetBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMWidgetBlueprintFactory);
UVNMWidgetBlueprintFactory::~UVNMWidgetBlueprintFactory() {}
// End Class UVNMWidgetBlueprintFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_VNMWidgetBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMWidgetBlueprintFactory, UVNMWidgetBlueprintFactory::StaticClass, TEXT("UVNMWidgetBlueprintFactory"), &Z_Registration_Info_UClass_UVNMWidgetBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMWidgetBlueprintFactory), 1547805161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_VNMWidgetBlueprintFactory_h_3758682170(TEXT("/Script/VNMWidgetGenerator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_VNMWidgetBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_VNMWidgetBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
