// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/OptionsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionsWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UOptionsWidget();
VNM_API UClass* Z_Construct_UClass_UOptionsWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMSliderWidget_NoRegister();
// End Cross Module References

// Begin Class UOptionsWidget Function OnAutoForwardTimeSliderValueChanged
struct Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics
{
	struct OptionsWidget_eventOnAutoForwardTimeSliderValueChanged_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsWidget_eventOnAutoForwardTimeSliderValueChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsWidget, nullptr, "OnAutoForwardTimeSliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::OptionsWidget_eventOnAutoForwardTimeSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::OptionsWidget_eventOnAutoForwardTimeSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsWidget::execOnAutoForwardTimeSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAutoForwardTimeSliderValueChanged(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOptionsWidget Function OnAutoForwardTimeSliderValueChanged

// Begin Class UOptionsWidget Function OnDisplayOptionFullScreenCheckedStateChanged
struct Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics
{
	struct OptionsWidget_eventOnDisplayOptionFullScreenCheckedStateChanged_Parms
	{
		UMenuButtonWidget* ClickedButton;
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsWidget_eventOnDisplayOptionFullScreenCheckedStateChanged_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
void Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((OptionsWidget_eventOnDisplayOptionFullScreenCheckedStateChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptionsWidget_eventOnDisplayOptionFullScreenCheckedStateChanged_Parms), &Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::NewProp_ClickedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsWidget, nullptr, "OnDisplayOptionFullScreenCheckedStateChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::OptionsWidget_eventOnDisplayOptionFullScreenCheckedStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::OptionsWidget_eventOnDisplayOptionFullScreenCheckedStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsWidget::execOnDisplayOptionFullScreenCheckedStateChanged)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_GET_UBOOL(Z_Param_bIsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplayOptionFullScreenCheckedStateChanged(Z_Param_ClickedButton,Z_Param_bIsSelected);
	P_NATIVE_END;
}
// End Class UOptionsWidget Function OnDisplayOptionFullScreenCheckedStateChanged

// Begin Class UOptionsWidget Function OnDisplayOptionWindowedCheckedStateChanged
struct Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics
{
	struct OptionsWidget_eventOnDisplayOptionWindowedCheckedStateChanged_Parms
	{
		UMenuButtonWidget* ClickedButton;
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsWidget_eventOnDisplayOptionWindowedCheckedStateChanged_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
void Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((OptionsWidget_eventOnDisplayOptionWindowedCheckedStateChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptionsWidget_eventOnDisplayOptionWindowedCheckedStateChanged_Parms), &Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::NewProp_ClickedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsWidget, nullptr, "OnDisplayOptionWindowedCheckedStateChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::OptionsWidget_eventOnDisplayOptionWindowedCheckedStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::OptionsWidget_eventOnDisplayOptionWindowedCheckedStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsWidget::execOnDisplayOptionWindowedCheckedStateChanged)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_GET_UBOOL(Z_Param_bIsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplayOptionWindowedCheckedStateChanged(Z_Param_ClickedButton,Z_Param_bIsSelected);
	P_NATIVE_END;
}
// End Class UOptionsWidget Function OnDisplayOptionWindowedCheckedStateChanged

// Begin Class UOptionsWidget Function OnDisplayOptionWindowedFullScreenCheckedStateChanged
struct Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics
{
	struct OptionsWidget_eventOnDisplayOptionWindowedFullScreenCheckedStateChanged_Parms
	{
		UMenuButtonWidget* ClickedButton;
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsWidget_eventOnDisplayOptionWindowedFullScreenCheckedStateChanged_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
void Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((OptionsWidget_eventOnDisplayOptionWindowedFullScreenCheckedStateChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptionsWidget_eventOnDisplayOptionWindowedFullScreenCheckedStateChanged_Parms), &Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::NewProp_ClickedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsWidget, nullptr, "OnDisplayOptionWindowedFullScreenCheckedStateChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::OptionsWidget_eventOnDisplayOptionWindowedFullScreenCheckedStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::OptionsWidget_eventOnDisplayOptionWindowedFullScreenCheckedStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsWidget::execOnDisplayOptionWindowedFullScreenCheckedStateChanged)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_GET_UBOOL(Z_Param_bIsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisplayOptionWindowedFullScreenCheckedStateChanged(Z_Param_ClickedButton,Z_Param_bIsSelected);
	P_NATIVE_END;
}
// End Class UOptionsWidget Function OnDisplayOptionWindowedFullScreenCheckedStateChanged

// Begin Class UOptionsWidget Function OnResolutionChanged
struct Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics
{
	struct OptionsWidget_eventOnResolutionChanged_Parms
	{
		FString SelectedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsWidget_eventOnResolutionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::NewProp_SelectedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsWidget, nullptr, "OnResolutionChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::OptionsWidget_eventOnResolutionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::OptionsWidget_eventOnResolutionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsWidget::execOnResolutionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResolutionChanged(Z_Param_SelectedItem);
	P_NATIVE_END;
}
// End Class UOptionsWidget Function OnResolutionChanged

// Begin Class UOptionsWidget Function OnTypeWritingSpeedSliderValueChanged
struct Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics
{
	struct OptionsWidget_eventOnTypeWritingSpeedSliderValueChanged_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsWidget_eventOnTypeWritingSpeedSliderValueChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsWidget, nullptr, "OnTypeWritingSpeedSliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::OptionsWidget_eventOnTypeWritingSpeedSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::OptionsWidget_eventOnTypeWritingSpeedSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsWidget::execOnTypeWritingSpeedSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTypeWritingSpeedSliderValueChanged(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOptionsWidget Function OnTypeWritingSpeedSliderValueChanged

// Begin Class UOptionsWidget
void UOptionsWidget::StaticRegisterNativesUOptionsWidget()
{
	UClass* Class = UOptionsWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAutoForwardTimeSliderValueChanged", &UOptionsWidget::execOnAutoForwardTimeSliderValueChanged },
		{ "OnDisplayOptionFullScreenCheckedStateChanged", &UOptionsWidget::execOnDisplayOptionFullScreenCheckedStateChanged },
		{ "OnDisplayOptionWindowedCheckedStateChanged", &UOptionsWidget::execOnDisplayOptionWindowedCheckedStateChanged },
		{ "OnDisplayOptionWindowedFullScreenCheckedStateChanged", &UOptionsWidget::execOnDisplayOptionWindowedFullScreenCheckedStateChanged },
		{ "OnResolutionChanged", &UOptionsWidget::execOnResolutionChanged },
		{ "OnTypeWritingSpeedSliderValueChanged", &UOptionsWidget::execOnTypeWritingSpeedSliderValueChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionsWidget);
UClass* Z_Construct_UClass_UOptionsWidget_NoRegister()
{
	return UOptionsWidget::StaticClass();
}
struct Z_Construct_UClass_UOptionsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/OptionsWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeWritingSpeedSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoForwardTimeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOptionFullScreen_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOptionWindowed_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOptionWindowedFullScreen_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayResolutions_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Options" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullscreenResolutions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowedResolutions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/OptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeWritingSpeedSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoForwardTimeSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayOptionFullScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayOptionWindowed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayOptionWindowedFullScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayResolutions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullscreenResolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FullscreenResolutions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WindowedResolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WindowedResolutions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionsWidget_OnAutoForwardTimeSliderValueChanged, "OnAutoForwardTimeSliderValueChanged" }, // 625145536
		{ &Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionFullScreenCheckedStateChanged, "OnDisplayOptionFullScreenCheckedStateChanged" }, // 411333535
		{ &Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedCheckedStateChanged, "OnDisplayOptionWindowedCheckedStateChanged" }, // 884195544
		{ &Z_Construct_UFunction_UOptionsWidget_OnDisplayOptionWindowedFullScreenCheckedStateChanged, "OnDisplayOptionWindowedFullScreenCheckedStateChanged" }, // 4214135772
		{ &Z_Construct_UFunction_UOptionsWidget_OnResolutionChanged, "OnResolutionChanged" }, // 1564185727
		{ &Z_Construct_UFunction_UOptionsWidget_OnTypeWritingSpeedSliderValueChanged, "OnTypeWritingSpeedSliderValueChanged" }, // 1133038543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_TypeWritingSpeedSlider = { "TypeWritingSpeedSlider", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, TypeWritingSpeedSlider), Z_Construct_UClass_UVNMSliderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeWritingSpeedSlider_MetaData), NewProp_TypeWritingSpeedSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_AutoForwardTimeSlider = { "AutoForwardTimeSlider", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, AutoForwardTimeSlider), Z_Construct_UClass_UVNMSliderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoForwardTimeSlider_MetaData), NewProp_AutoForwardTimeSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayOptionFullScreen = { "DisplayOptionFullScreen", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, DisplayOptionFullScreen), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayOptionFullScreen_MetaData), NewProp_DisplayOptionFullScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayOptionWindowed = { "DisplayOptionWindowed", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, DisplayOptionWindowed), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayOptionWindowed_MetaData), NewProp_DisplayOptionWindowed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayOptionWindowedFullScreen = { "DisplayOptionWindowedFullScreen", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, DisplayOptionWindowedFullScreen), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayOptionWindowedFullScreen_MetaData), NewProp_DisplayOptionWindowedFullScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayResolutions = { "DisplayResolutions", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, DisplayResolutions), Z_Construct_UClass_UVNMDropDownWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayResolutions_MetaData), NewProp_DisplayResolutions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_FullscreenResolutions_Inner = { "FullscreenResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_FullscreenResolutions = { "FullscreenResolutions", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, FullscreenResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullscreenResolutions_MetaData), NewProp_FullscreenResolutions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_WindowedResolutions_Inner = { "WindowedResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptionsWidget_Statics::NewProp_WindowedResolutions = { "WindowedResolutions", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsWidget, WindowedResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowedResolutions_MetaData), NewProp_WindowedResolutions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_TypeWritingSpeedSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_AutoForwardTimeSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayOptionFullScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayOptionWindowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayOptionWindowedFullScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_DisplayResolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_FullscreenResolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_FullscreenResolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_WindowedResolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsWidget_Statics::NewProp_WindowedResolutions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionsWidget_Statics::ClassParams = {
	&UOptionsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptionsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionsWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionsWidget()
{
	if (!Z_Registration_Info_UClass_UOptionsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionsWidget.OuterSingleton, Z_Construct_UClass_UOptionsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionsWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UOptionsWidget>()
{
	return UOptionsWidget::StaticClass();
}
UOptionsWidget::UOptionsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsWidget);
UOptionsWidget::~UOptionsWidget() {}
// End Class UOptionsWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_OptionsWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionsWidget, UOptionsWidget::StaticClass, TEXT("UOptionsWidget"), &Z_Registration_Info_UClass_UOptionsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionsWidget), 397813639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_OptionsWidget_h_3364197310(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_OptionsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_OptionsWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
