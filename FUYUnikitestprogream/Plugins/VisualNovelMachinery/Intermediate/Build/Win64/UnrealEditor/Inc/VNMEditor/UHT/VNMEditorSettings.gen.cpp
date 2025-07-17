// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNMEditor/Public/VNMEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_VNMEditor();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMEditorSettings();
VNMEDITOR_API UClass* Z_Construct_UClass_UVNMEditorSettings_NoRegister();
VNMEDITOR_API UEnum* Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType();
// End Cross Module References

// Begin Enum EDialogTextNodeFieldStyleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType;
static UEnum* EDialogTextNodeFieldStyleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType, (UObject*)Z_Construct_UPackage__Script_VNMEditor(), TEXT("EDialogTextNodeFieldStyleType"));
	}
	return Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType.OuterSingleton;
}
template<> VNMEDITOR_API UEnum* StaticEnum<EDialogTextNodeFieldStyleType>()
{
	return EDialogTextNodeFieldStyleType_StaticEnum();
}
struct Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
		{ "MULTILINE_TEXT.Name", "EDialogTextNodeFieldStyleType::MULTILINE_TEXT" },
		{ "SINGLE_LINE_TEXT.Name", "EDialogTextNodeFieldStyleType::SINGLE_LINE_TEXT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogTextNodeFieldStyleType::MULTILINE_TEXT", (int64)EDialogTextNodeFieldStyleType::MULTILINE_TEXT },
		{ "EDialogTextNodeFieldStyleType::SINGLE_LINE_TEXT", (int64)EDialogTextNodeFieldStyleType::SINGLE_LINE_TEXT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VNMEditor,
	nullptr,
	"EDialogTextNodeFieldStyleType",
	"EDialogTextNodeFieldStyleType",
	Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType()
{
	if (!Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType.InnerSingleton, Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType.InnerSingleton;
}
// End Enum EDialogTextNodeFieldStyleType

// Begin Class UVNMEditorSettings
void UVNMEditorSettings::StaticRegisterNativesUVNMEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMEditorSettings);
UClass* Z_Construct_UClass_UVNMEditorSettings_NoRegister()
{
	return UVNMEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UVNMEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the Visual Novel Machinery plugin.\n*/" },
		{ "IncludePath", "VNMEditorSettings.h" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for the Visual Novel Machinery plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTextNodeFieldStyle_MetaData[] = {
		{ "Category", "Dialog Text Node" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoWrapDialogTextInNodeAt_MetaData[] = {
		{ "Category", "Dialog Text Node" },
		{ "EditCondition", "DialogTextNodeFieldStyle==EDialogTextNodeFieldStyleType::MULTILINE_TEXT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTextNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogChoiceNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogEndNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogStartSubDialogNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogWindowNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNodesColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryNodesColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneBackgroundNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneNodeColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogAudioColor_MetaData[] = {
		{ "Category", "Node Colors" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveDialogBlueprintOnBuildingChoiceData_MetaData[] = {
		{ "Category", "Choice Graph" },
		{ "ModuleRelativePath", "Public/VNMEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogTextNodeFieldStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogTextNodeFieldStyle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoWrapDialogTextInNodeAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogTextNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogChoiceNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogEndNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogStartSubDialogNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogWindowNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterNodesColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemoryNodesColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CgNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneBackgroundNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogSceneNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogAudioColor;
	static void NewProp_bSaveDialogBlueprintOnBuildingChoiceData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveDialogBlueprintOnBuildingChoiceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogTextNodeFieldStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogTextNodeFieldStyle = { "DialogTextNodeFieldStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogTextNodeFieldStyle), Z_Construct_UEnum_VNMEditor_EDialogTextNodeFieldStyleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTextNodeFieldStyle_MetaData), NewProp_DialogTextNodeFieldStyle_MetaData) }; // 2361467526
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_AutoWrapDialogTextInNodeAt = { "AutoWrapDialogTextInNodeAt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, AutoWrapDialogTextInNodeAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoWrapDialogTextInNodeAt_MetaData), NewProp_AutoWrapDialogTextInNodeAt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogTextNodeColor = { "DialogTextNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogTextNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTextNodeColor_MetaData), NewProp_DialogTextNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogChoiceNodeColor = { "DialogChoiceNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogChoiceNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogChoiceNodeColor_MetaData), NewProp_DialogChoiceNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogEndNodeColor = { "DialogEndNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogEndNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogEndNodeColor_MetaData), NewProp_DialogEndNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogStartSubDialogNodeColor = { "DialogStartSubDialogNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogStartSubDialogNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogStartSubDialogNodeColor_MetaData), NewProp_DialogStartSubDialogNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogWindowNodeColor = { "DialogWindowNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogWindowNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogWindowNodeColor_MetaData), NewProp_DialogWindowNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_CharacterNodesColor = { "CharacterNodesColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, CharacterNodesColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNodesColor_MetaData), NewProp_CharacterNodesColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_MemoryNodesColor = { "MemoryNodesColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, MemoryNodesColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryNodesColor_MetaData), NewProp_MemoryNodesColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_CgNodeColor = { "CgNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, CgNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgNodeColor_MetaData), NewProp_CgNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_SceneBackgroundNodeColor = { "SceneBackgroundNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, SceneBackgroundNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneBackgroundNodeColor_MetaData), NewProp_SceneBackgroundNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogSceneNodeColor = { "DialogSceneNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogSceneNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneNodeColor_MetaData), NewProp_DialogSceneNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogAudioColor = { "DialogAudioColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMEditorSettings, DialogAudioColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogAudioColor_MetaData), NewProp_DialogAudioColor_MetaData) };
void Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_bSaveDialogBlueprintOnBuildingChoiceData_SetBit(void* Obj)
{
	((UVNMEditorSettings*)Obj)->bSaveDialogBlueprintOnBuildingChoiceData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_bSaveDialogBlueprintOnBuildingChoiceData = { "bSaveDialogBlueprintOnBuildingChoiceData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVNMEditorSettings), &Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_bSaveDialogBlueprintOnBuildingChoiceData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveDialogBlueprintOnBuildingChoiceData_MetaData), NewProp_bSaveDialogBlueprintOnBuildingChoiceData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogTextNodeFieldStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogTextNodeFieldStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_AutoWrapDialogTextInNodeAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogTextNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogChoiceNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogEndNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogStartSubDialogNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogWindowNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_CharacterNodesColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_MemoryNodesColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_CgNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_SceneBackgroundNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogSceneNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_DialogAudioColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMEditorSettings_Statics::NewProp_bSaveDialogBlueprintOnBuildingChoiceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VNMEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMEditorSettings_Statics::ClassParams = {
	&UVNMEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVNMEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMEditorSettings()
{
	if (!Z_Registration_Info_UClass_UVNMEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMEditorSettings.OuterSingleton, Z_Construct_UClass_UVNMEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMEditorSettings.OuterSingleton;
}
template<> VNMEDITOR_API UClass* StaticClass<UVNMEditorSettings>()
{
	return UVNMEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMEditorSettings);
UVNMEditorSettings::~UVNMEditorSettings() {}
// End Class UVNMEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogTextNodeFieldStyleType_StaticEnum, TEXT("EDialogTextNodeFieldStyleType"), &Z_Registration_Info_UEnum_EDialogTextNodeFieldStyleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2361467526U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMEditorSettings, UVNMEditorSettings::StaticClass, TEXT("UVNMEditorSettings"), &Z_Registration_Info_UClass_UVNMEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMEditorSettings), 292937822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_389123173(TEXT("/Script/VNMEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNMEditor_Public_VNMEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
