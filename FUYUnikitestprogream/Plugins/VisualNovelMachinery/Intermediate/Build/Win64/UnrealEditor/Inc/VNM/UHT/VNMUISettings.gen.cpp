// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/VNMUISettings.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMUISettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMBasePopUpWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMUISettings();
VNM_API UClass* Z_Construct_UClass_UVNMUISettings_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FInputConfigSettings();
// End Cross Module References

// Begin ScriptStruct FInputConfigSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputConfigSettings;
class UScriptStruct* FInputConfigSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputConfigSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputConfigSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputConfigSettings, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("InputConfigSettings"));
	}
	return Z_Registration_Info_UScriptStruct_InputConfigSettings.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FInputConfigSettings>()
{
	return FInputConfigSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputConfigSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseInputIcons_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadInputIcons_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyboardMouseInputIcons_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardMouseInputIcons_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeyboardMouseInputIcons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadInputIcons_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadInputIcons_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GamepadInputIcons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputConfigSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_KeyboardMouseInputIcons_ValueProp = { "KeyboardMouseInputIcons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_KeyboardMouseInputIcons_Key_KeyProp = { "KeyboardMouseInputIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_KeyboardMouseInputIcons = { "KeyboardMouseInputIcons", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputConfigSettings, KeyboardMouseInputIcons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseInputIcons_MetaData), NewProp_KeyboardMouseInputIcons_MetaData) }; // 658672854
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_GamepadInputIcons_ValueProp = { "GamepadInputIcons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_GamepadInputIcons_Key_KeyProp = { "GamepadInputIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_GamepadInputIcons = { "GamepadInputIcons", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputConfigSettings, GamepadInputIcons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadInputIcons_MetaData), NewProp_GamepadInputIcons_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputConfigSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_KeyboardMouseInputIcons_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_KeyboardMouseInputIcons_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_KeyboardMouseInputIcons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_GamepadInputIcons_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_GamepadInputIcons_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewProp_GamepadInputIcons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputConfigSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputConfigSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"InputConfigSettings",
	Z_Construct_UScriptStruct_FInputConfigSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputConfigSettings_Statics::PropPointers),
	sizeof(FInputConfigSettings),
	alignof(FInputConfigSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputConfigSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputConfigSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputConfigSettings()
{
	if (!Z_Registration_Info_UScriptStruct_InputConfigSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputConfigSettings.InnerSingleton, Z_Construct_UScriptStruct_FInputConfigSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputConfigSettings.InnerSingleton;
}
// End ScriptStruct FInputConfigSettings

// Begin Class UVNMUISettings
void UVNMUISettings::StaticRegisterNativesUVNMUISettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMUISettings);
UClass* Z_Construct_UClass_UVNMUISettings_NoRegister()
{
	return UVNMUISettings::StaticClass();
}
struct Z_Construct_UClass_UVNMUISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/VNMUISettings.h" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplePopUpClass_MetaData[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxPopUpClass_MetaData[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSettings_MetaData[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/VNMUISettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SimplePopUpClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TextBoxPopUpClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMUISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMUISettings_Statics::NewProp_SimplePopUpClass = { "SimplePopUpClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMUISettings, SimplePopUpClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMBasePopUpWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplePopUpClass_MetaData), NewProp_SimplePopUpClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMUISettings_Statics::NewProp_TextBoxPopUpClass = { "TextBoxPopUpClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMUISettings, TextBoxPopUpClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBoxPopUpClass_MetaData), NewProp_TextBoxPopUpClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMUISettings_Statics::NewProp_InputSettings = { "InputSettings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMUISettings, InputSettings), Z_Construct_UScriptStruct_FInputConfigSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSettings_MetaData), NewProp_InputSettings_MetaData) }; // 717989291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMUISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMUISettings_Statics::NewProp_SimplePopUpClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMUISettings_Statics::NewProp_TextBoxPopUpClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMUISettings_Statics::NewProp_InputSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMUISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMUISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMUISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMUISettings_Statics::ClassParams = {
	&UVNMUISettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMUISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMUISettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMUISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMUISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMUISettings()
{
	if (!Z_Registration_Info_UClass_UVNMUISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMUISettings.OuterSingleton, Z_Construct_UClass_UVNMUISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMUISettings.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMUISettings>()
{
	return UVNMUISettings::StaticClass();
}
UVNMUISettings::UVNMUISettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMUISettings);
UVNMUISettings::~UVNMUISettings() {}
// End Class UVNMUISettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMUISettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputConfigSettings::StaticStruct, Z_Construct_UScriptStruct_FInputConfigSettings_Statics::NewStructOps, TEXT("InputConfigSettings"), &Z_Registration_Info_UScriptStruct_InputConfigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputConfigSettings), 717989291U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMUISettings, UVNMUISettings::StaticClass, TEXT("UVNMUISettings"), &Z_Registration_Info_UClass_UVNMUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMUISettings), 1273746096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMUISettings_h_59401358(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMUISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMUISettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMUISettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMUISettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
