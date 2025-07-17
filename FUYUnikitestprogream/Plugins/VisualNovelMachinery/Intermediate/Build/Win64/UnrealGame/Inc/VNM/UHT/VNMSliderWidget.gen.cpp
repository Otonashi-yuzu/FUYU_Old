// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/VNMSliderWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMSliderWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMSliderWidget();
VNM_API UClass* Z_Construct_UClass_UVNMSliderWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnValueChangedDelegate
struct Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics
{
	struct VNMSliderWidget_eventOnValueChangedDelegate_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSliderWidget_eventOnValueChangedDelegate_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSliderWidget, nullptr, "OnValueChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::VNMSliderWidget_eventOnValueChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::VNMSliderWidget_eventOnValueChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVNMSliderWidget::FOnValueChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnValueChangedDelegate, const float NewValue)
{
	struct VNMSliderWidget_eventOnValueChangedDelegate_Parms
	{
		float NewValue;
	};
	VNMSliderWidget_eventOnValueChangedDelegate_Parms Parms;
	Parms.NewValue=NewValue;
	OnValueChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnValueChangedDelegate

// Begin Class UVNMSliderWidget Function SetMaxValue
struct Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics
{
	struct VNMSliderWidget_eventSetMaxValue_Parms
	{
		float NewMaxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::NewProp_NewMaxValue = { "NewMaxValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSliderWidget_eventSetMaxValue_Parms, NewMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaxValue_MetaData), NewProp_NewMaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::NewProp_NewMaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSliderWidget, nullptr, "SetMaxValue", nullptr, nullptr, Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::VNMSliderWidget_eventSetMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::VNMSliderWidget_eventSetMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSliderWidget::execSetMaxValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxValue(Z_Param_NewMaxValue);
	P_NATIVE_END;
}
// End Class UVNMSliderWidget Function SetMaxValue

// Begin Class UVNMSliderWidget Function SetMinValue
struct Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics
{
	struct VNMSliderWidget_eventSetMinValue_Parms
	{
		float NewMinValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMinValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMinValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::NewProp_NewMinValue = { "NewMinValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSliderWidget_eventSetMinValue_Parms, NewMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMinValue_MetaData), NewProp_NewMinValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::NewProp_NewMinValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSliderWidget, nullptr, "SetMinValue", nullptr, nullptr, Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::VNMSliderWidget_eventSetMinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::VNMSliderWidget_eventSetMinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSliderWidget_SetMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSliderWidget_SetMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSliderWidget::execSetMinValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMinValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinValue(Z_Param_NewMinValue);
	P_NATIVE_END;
}
// End Class UVNMSliderWidget Function SetMinValue

// Begin Class UVNMSliderWidget Function SetSliderValue
struct VNMSliderWidget_eventSetSliderValue_Parms
{
	float NewValue;
};
static FName NAME_UVNMSliderWidget_SetSliderValue = FName(TEXT("SetSliderValue"));
void UVNMSliderWidget::SetSliderValue(const float NewValue)
{
	VNMSliderWidget_eventSetSliderValue_Parms Parms;
	Parms.NewValue=NewValue;
	ProcessEvent(FindFunctionChecked(NAME_UVNMSliderWidget_SetSliderValue),&Parms);
}
struct Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSliderWidget_eventSetSliderValue_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSliderWidget, nullptr, "SetSliderValue", nullptr, nullptr, Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::PropPointers), sizeof(VNMSliderWidget_eventSetSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(VNMSliderWidget_eventSetSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSliderWidget::execSetSliderValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderValue_Implementation(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVNMSliderWidget Function SetSliderValue

// Begin Class UVNMSliderWidget Function SetStepValue
struct Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics
{
	struct VNMSliderWidget_eventSetStepValue_Parms
	{
		float NewStepValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slider" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStepValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStepValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::NewProp_NewStepValue = { "NewStepValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMSliderWidget_eventSetStepValue_Parms, NewStepValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStepValue_MetaData), NewProp_NewStepValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::NewProp_NewStepValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMSliderWidget, nullptr, "SetStepValue", nullptr, nullptr, Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::VNMSliderWidget_eventSetStepValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::VNMSliderWidget_eventSetStepValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMSliderWidget_SetStepValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMSliderWidget_SetStepValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMSliderWidget::execSetStepValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewStepValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepValue(Z_Param_NewStepValue);
	P_NATIVE_END;
}
// End Class UVNMSliderWidget Function SetStepValue

// Begin Class UVNMSliderWidget
void UVNMSliderWidget::StaticRegisterNativesUVNMSliderWidget()
{
	UClass* Class = UVNMSliderWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMaxValue", &UVNMSliderWidget::execSetMaxValue },
		{ "SetMinValue", &UVNMSliderWidget::execSetMinValue },
		{ "SetSliderValue", &UVNMSliderWidget::execSetSliderValue },
		{ "SetStepValue", &UVNMSliderWidget::execSetStepValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMSliderWidget);
UClass* Z_Construct_UClass_UVNMSliderWidget_NoRegister()
{
	return UVNMSliderWidget::StaticClass();
}
struct Z_Construct_UClass_UVNMSliderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/VNMSliderWidget.h" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Slider Value" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Slider Value" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Slider Value" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepValue_MetaData[] = {
		{ "Category", "Slider Value" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Slider Value" },
		{ "ModuleRelativePath", "Public/UI/VNMSliderWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature, "OnValueChangedDelegate__DelegateSignature" }, // 3350048695
		{ &Z_Construct_UFunction_UVNMSliderWidget_SetMaxValue, "SetMaxValue" }, // 1753783689
		{ &Z_Construct_UFunction_UVNMSliderWidget_SetMinValue, "SetMinValue" }, // 3035750371
		{ &Z_Construct_UFunction_UVNMSliderWidget_SetSliderValue, "SetSliderValue" }, // 2665740772
		{ &Z_Construct_UFunction_UVNMSliderWidget_SetStepValue, "SetStepValue" }, // 3723567582
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMSliderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMSliderWidget, OnValueChanged), Z_Construct_UDelegateFunction_UVNMSliderWidget_OnValueChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 3350048695
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMSliderWidget, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMSliderWidget, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_StepValue = { "StepValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMSliderWidget, StepValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepValue_MetaData), NewProp_StepValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMSliderWidget, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMSliderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_OnValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_StepValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMSliderWidget_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSliderWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMSliderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSliderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMSliderWidget_Statics::ClassParams = {
	&UVNMSliderWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMSliderWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSliderWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMSliderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMSliderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMSliderWidget()
{
	if (!Z_Registration_Info_UClass_UVNMSliderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMSliderWidget.OuterSingleton, Z_Construct_UClass_UVNMSliderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMSliderWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMSliderWidget>()
{
	return UVNMSliderWidget::StaticClass();
}
UVNMSliderWidget::UVNMSliderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMSliderWidget);
UVNMSliderWidget::~UVNMSliderWidget() {}
// End Class UVNMSliderWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMSliderWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMSliderWidget, UVNMSliderWidget::StaticClass, TEXT("UVNMSliderWidget"), &Z_Registration_Info_UClass_UVNMSliderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMSliderWidget), 235358401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMSliderWidget_h_124018378(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMSliderWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMSliderWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
