// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/Data/ButtonStyling.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonStyling() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyling();
// End Cross Module References

// Begin ScriptStruct FButtonStyling
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ButtonStyling;
class UScriptStruct* FButtonStyling::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyling.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ButtonStyling.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonStyling, (UObject*)Z_Construct_UPackage__Script_VNM(), TEXT("ButtonStyling"));
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyling.OuterSingleton;
}
template<> VNM_API UScriptStruct* StaticStruct<FButtonStyling>()
{
	return FButtonStyling::StaticStruct();
}
struct Z_Construct_UScriptStruct_FButtonStyling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTextFont_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTextColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTextTransform_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/UI/Data/ButtonStyling.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressedTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedHoveredTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPressedTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdleColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdleTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdleTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedTextFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdleTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdleTextTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredTextTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedTextTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTextTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredTextTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedTextTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedTextTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonStyling>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTexture = { "IdleTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, IdleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleTexture_MetaData), NewProp_IdleTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTexture = { "HoveredTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, HoveredTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredTexture_MetaData), NewProp_HoveredTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTexture = { "PressedTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, PressedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTexture_MetaData), NewProp_PressedTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTexture = { "SelectedTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTexture_MetaData), NewProp_SelectedTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTexture = { "SelectedHoveredTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedHoveredTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredTexture_MetaData), NewProp_SelectedHoveredTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTexture = { "SelectedPressedTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedPressedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPressedTexture_MetaData), NewProp_SelectedPressedTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTexture = { "LockedTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, LockedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTexture_MetaData), NewProp_LockedTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleColor = { "IdleColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, IdleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleColor_MetaData), NewProp_IdleColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredColor = { "HoveredColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, HoveredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredColor_MetaData), NewProp_HoveredColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedColor = { "PressedColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, PressedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedColor_MetaData), NewProp_PressedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedColor = { "SelectedColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedColor_MetaData), NewProp_SelectedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredColor = { "SelectedHoveredColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedHoveredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredColor_MetaData), NewProp_SelectedHoveredColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedColor = { "SelectedPressedColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedPressedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPressedColor_MetaData), NewProp_SelectedPressedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedColor = { "LockedColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, LockedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedColor_MetaData), NewProp_LockedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTransform = { "IdleTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, IdleTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleTransform_MetaData), NewProp_IdleTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTransform = { "HoveredTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, HoveredTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredTransform_MetaData), NewProp_HoveredTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTransform = { "PressedTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, PressedTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTransform_MetaData), NewProp_PressedTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTransform = { "SelectedTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTransform_MetaData), NewProp_SelectedTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTransform = { "SelectedHoveredTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedHoveredTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredTransform_MetaData), NewProp_SelectedHoveredTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTransform = { "SelectedPressedTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedPressedTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPressedTransform_MetaData), NewProp_SelectedPressedTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTransform = { "LockedTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, LockedTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTransform_MetaData), NewProp_LockedTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTextFont = { "IdleTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, IdleTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleTextFont_MetaData), NewProp_IdleTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTextFont = { "HoveredTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, HoveredTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredTextFont_MetaData), NewProp_HoveredTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTextFont = { "PressedTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, PressedTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTextFont_MetaData), NewProp_PressedTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTextFont = { "SelectedTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTextFont_MetaData), NewProp_SelectedTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTextFont = { "SelectedHoveredTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedHoveredTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredTextFont_MetaData), NewProp_SelectedHoveredTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTextFont = { "SelectedPressedTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedPressedTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPressedTextFont_MetaData), NewProp_SelectedPressedTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTextFont = { "LockedTextFont", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, LockedTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTextFont_MetaData), NewProp_LockedTextFont_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTextColor = { "IdleTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, IdleTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleTextColor_MetaData), NewProp_IdleTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTextColor = { "HoveredTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, HoveredTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredTextColor_MetaData), NewProp_HoveredTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTextColor = { "PressedTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, PressedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTextColor_MetaData), NewProp_PressedTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTextColor = { "SelectedTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTextColor_MetaData), NewProp_SelectedTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTextColor = { "SelectedHoveredTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedHoveredTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredTextColor_MetaData), NewProp_SelectedHoveredTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTextColor = { "SelectedPressedTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedPressedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPressedTextColor_MetaData), NewProp_SelectedPressedTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTextColor = { "LockedTextColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, LockedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTextColor_MetaData), NewProp_LockedTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTextTransform = { "IdleTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, IdleTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleTextTransform_MetaData), NewProp_IdleTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTextTransform = { "HoveredTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, HoveredTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredTextTransform_MetaData), NewProp_HoveredTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTextTransform = { "PressedTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, PressedTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTextTransform_MetaData), NewProp_PressedTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTextTransform = { "SelectedTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTextTransform_MetaData), NewProp_SelectedTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTextTransform = { "SelectedHoveredTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedHoveredTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredTextTransform_MetaData), NewProp_SelectedHoveredTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTextTransform = { "SelectedPressedTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, SelectedPressedTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPressedTextTransform_MetaData), NewProp_SelectedPressedTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTextTransform = { "LockedTextTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FButtonStyling, LockedTextTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTextTransform_MetaData), NewProp_LockedTextTransform_MetaData) }; // 201331753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FButtonStyling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTextFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_IdleTextTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_HoveredTextTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_PressedTextTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedTextTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedHoveredTextTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_SelectedPressedTextTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonStyling_Statics::NewProp_LockedTextTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FButtonStyling_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
	nullptr,
	&NewStructOps,
	"ButtonStyling",
	Z_Construct_UScriptStruct_FButtonStyling_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyling_Statics::PropPointers),
	sizeof(FButtonStyling),
	alignof(FButtonStyling),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonStyling_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FButtonStyling_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FButtonStyling()
{
	if (!Z_Registration_Info_UScriptStruct_ButtonStyling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ButtonStyling.InnerSingleton, Z_Construct_UScriptStruct_FButtonStyling_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ButtonStyling.InnerSingleton;
}
// End ScriptStruct FButtonStyling

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ButtonStyling_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FButtonStyling::StaticStruct, Z_Construct_UScriptStruct_FButtonStyling_Statics::NewStructOps, TEXT("ButtonStyling"), &Z_Registration_Info_UScriptStruct_ButtonStyling, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FButtonStyling), 2873607832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ButtonStyling_h_3145927175(TEXT("/Script/VNM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ButtonStyling_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_Data_ButtonStyling_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
