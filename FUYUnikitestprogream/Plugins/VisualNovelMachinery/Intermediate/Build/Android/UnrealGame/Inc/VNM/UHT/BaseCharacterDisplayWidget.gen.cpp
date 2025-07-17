// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseCharacterDisplayWidget.h"
#include "VNM/Public/VNMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterDisplayWidget() {}

// Begin Cross Module References
ADVANCEDLAYEREDIMAGE_API UClass* Z_Construct_UClass_UAdvancedLayeredImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseCharacterDisplayWidget();
VNM_API UClass* Z_Construct_UClass_UBaseCharacterDisplayWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterFlipState();
VNM_API UEnum* Z_Construct_UEnum_VNM_ECharacterPositioning();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefinition();
// End Cross Module References

// Begin Class UBaseCharacterDisplayWidget
void UBaseCharacterDisplayWidget::StaticRegisterNativesUBaseCharacterDisplayWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCharacterDisplayWidget);
UClass* Z_Construct_UClass_UBaseCharacterDisplayWidget_NoRegister()
{
	return UBaseCharacterDisplayWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseCharacterDisplayWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionId_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPositioning_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterPosition_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFlipState_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAnchorPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "Comment", "// Layer Id to Image Id\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
		{ "ToolTip", "Layer Id to Image Id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseCharacterDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterPositioning_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterPositioning;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCharacterPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterFlipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterFlipState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialAnchorPosition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterDisplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CharacterId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterId_MetaData), NewProp_CharacterId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_EmotionId = { "EmotionId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, EmotionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionId_MetaData), NewProp_EmotionId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterPositioning = { "CharacterPositioning", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CharacterPositioning), Z_Construct_UEnum_VNM_ECharacterPositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPositioning_MetaData), NewProp_CharacterPositioning_MetaData) }; // 2277953573
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CustomCharacterPosition = { "CustomCharacterPosition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CustomCharacterPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterPosition_MetaData), NewProp_CustomCharacterPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterFlipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterFlipState = { "CharacterFlipState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CharacterFlipState), Z_Construct_UEnum_VNM_ECharacterFlipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFlipState_MetaData), NewProp_CharacterFlipState_MetaData) }; // 3767235229
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_InitialAnchorPosition = { "InitialAnchorPosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, InitialAnchorPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAnchorPosition_MetaData), NewProp_InitialAnchorPosition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterLayers_ValueProp = { "CharacterLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterLayers_Key_KeyProp = { "CharacterLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterLayers = { "CharacterLayers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CharacterLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLayers_MetaData), NewProp_CharacterLayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterImage = { "CharacterImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CharacterImage), Z_Construct_UClass_UAdvancedLayeredImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterImage_MetaData), NewProp_CharacterImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDisplayWidget, CharacterDefinition), Z_Construct_UScriptStruct_FCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) }; // 904350531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_EmotionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterPositioning_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterPositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CustomCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterFlipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterFlipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_InitialAnchorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::NewProp_CharacterDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVNMWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::ClassParams = {
	&UBaseCharacterDisplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCharacterDisplayWidget()
{
	if (!Z_Registration_Info_UClass_UBaseCharacterDisplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterDisplayWidget.OuterSingleton, Z_Construct_UClass_UBaseCharacterDisplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCharacterDisplayWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseCharacterDisplayWidget>()
{
	return UBaseCharacterDisplayWidget::StaticClass();
}
UBaseCharacterDisplayWidget::UBaseCharacterDisplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterDisplayWidget);
UBaseCharacterDisplayWidget::~UBaseCharacterDisplayWidget() {}
// End Class UBaseCharacterDisplayWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCharacterDisplayWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterDisplayWidget, UBaseCharacterDisplayWidget::StaticClass, TEXT("UBaseCharacterDisplayWidget"), &Z_Registration_Info_UClass_UBaseCharacterDisplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterDisplayWidget), 2288182295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCharacterDisplayWidget_h_1571751891(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCharacterDisplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseCharacterDisplayWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
