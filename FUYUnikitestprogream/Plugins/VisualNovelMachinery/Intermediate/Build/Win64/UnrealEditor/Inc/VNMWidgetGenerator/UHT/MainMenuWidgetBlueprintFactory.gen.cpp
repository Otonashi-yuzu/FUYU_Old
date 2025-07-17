// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMWidgetGenerator/Public/Factories/MainMenuWidgetBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidgetBlueprintFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VNMWidgetGenerator();
VNMWIDGETGENERATOR_API UClass* Z_Construct_UClass_UMainMenuWidgetBlueprintFactory();
VNMWIDGETGENERATOR_API UClass* Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_NoRegister();
VNMWIDGETGENERATOR_API UEnum* Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget();
// End Cross Module References

// Begin Class UMainMenuWidgetBlueprintFactory
void UMainMenuWidgetBlueprintFactory::StaticRegisterNativesUMainMenuWidgetBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidgetBlueprintFactory);
UClass* Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_NoRegister()
{
	return UMainMenuWidgetBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MainMenuWidgetBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/MainMenuWidgetBlueprintFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalWidgetClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/MainMenuWidgetBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAlternative_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/MainMenuWidgetBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/MainMenuWidgetBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "WidgetBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/Factories/MainMenuWidgetBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalWidgetClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalWidgetClasses;
	static void NewProp_bGenerateAlternative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAlternative;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuWidget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidgetBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClasses_Inner = { "AdditionalWidgetClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClasses = { "AdditionalWidgetClasses", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidgetBlueprintFactory, AdditionalWidgetClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalWidgetClasses_MetaData), NewProp_AdditionalWidgetClasses_MetaData) };
void Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_bGenerateAlternative_SetBit(void* Obj)
{
	((UMainMenuWidgetBlueprintFactory*)Obj)->bGenerateAlternative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_bGenerateAlternative = { "bGenerateAlternative", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMainMenuWidgetBlueprintFactory), &Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_bGenerateAlternative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAlternative_MetaData), NewProp_bGenerateAlternative_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_MenuWidget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidgetBlueprintFactory, MenuWidget), Z_Construct_UEnum_VNMWidgetGenerator_EVNMMenuWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) }; // 509015781
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidgetBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_AdditionalWidgetClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_bGenerateAlternative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_MenuWidget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_MenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMWidgetGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::ClassParams = {
	&UMainMenuWidgetBlueprintFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidgetBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidgetBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidgetBlueprintFactory.OuterSingleton, Z_Construct_UClass_UMainMenuWidgetBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidgetBlueprintFactory.OuterSingleton;
}
template<> VNMWIDGETGENERATOR_API UClass* StaticClass<UMainMenuWidgetBlueprintFactory>()
{
	return UMainMenuWidgetBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidgetBlueprintFactory);
UMainMenuWidgetBlueprintFactory::~UMainMenuWidgetBlueprintFactory() {}
// End Class UMainMenuWidgetBlueprintFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_MainMenuWidgetBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidgetBlueprintFactory, UMainMenuWidgetBlueprintFactory::StaticClass, TEXT("UMainMenuWidgetBlueprintFactory"), &Z_Registration_Info_UClass_UMainMenuWidgetBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidgetBlueprintFactory), 899292565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_MainMenuWidgetBlueprintFactory_h_1597369667(TEXT("/Script/VNMWidgetGenerator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_MainMenuWidgetBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMWidgetGenerator_Public_Factories_MainMenuWidgetBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
