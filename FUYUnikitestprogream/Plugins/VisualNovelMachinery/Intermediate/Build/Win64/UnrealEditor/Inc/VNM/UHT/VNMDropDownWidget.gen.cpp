// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/VNMDropDownWidget.h"
#include "VNM/Public/UI/Data/ButtonStyling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMDropDownWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownContentWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownItemWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownWidget();
VNM_API UClass* Z_Construct_UClass_UVNMDropDownWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyling();
// End Cross Module References

// Begin Delegate FOnSelectionChangedEvent
struct Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics
{
	struct VNMDropDownWidget_eventOnSelectionChangedEvent_Parms
	{
		FString SelectedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMDropDownWidget_eventOnSelectionChangedEvent_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMDropDownWidget, nullptr, "OnSelectionChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::VNMDropDownWidget_eventOnSelectionChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::VNMDropDownWidget_eventOnSelectionChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVNMDropDownWidget::FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, const FString& SelectedItem)
{
	struct VNMDropDownWidget_eventOnSelectionChangedEvent_Parms
	{
		FString SelectedItem;
	};
	VNMDropDownWidget_eventOnSelectionChangedEvent_Parms Parms;
	Parms.SelectedItem=SelectedItem;
	OnSelectionChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSelectionChangedEvent

// Begin Class UVNMDropDownWidget Function AddOption
struct Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics
{
	struct VNMDropDownWidget_eventAddOption_Parms
	{
		FString NewOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::NewProp_NewOption = { "NewOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMDropDownWidget_eventAddOption_Parms, NewOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOption_MetaData), NewProp_NewOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::NewProp_NewOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMDropDownWidget, nullptr, "AddOption", nullptr, nullptr, Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::VNMDropDownWidget_eventAddOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::VNMDropDownWidget_eventAddOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMDropDownWidget_AddOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMDropDownWidget_AddOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMDropDownWidget::execAddOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOption(Z_Param_NewOption);
	P_NATIVE_END;
}
// End Class UVNMDropDownWidget Function AddOption

// Begin Class UVNMDropDownWidget Function OnDropdownButtonClicked
struct Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMDropDownWidget, nullptr, "OnDropdownButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMDropDownWidget::execOnDropdownButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropdownButtonClicked();
	P_NATIVE_END;
}
// End Class UVNMDropDownWidget Function OnDropdownButtonClicked

// Begin Class UVNMDropDownWidget Function SetOptions
struct Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics
{
	struct VNMDropDownWidget_eventSetOptions_Parms
	{
		TArray<FString> InOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMDropDownWidget_eventSetOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptions_MetaData), NewProp_InOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::NewProp_InOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::NewProp_InOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMDropDownWidget, nullptr, "SetOptions", nullptr, nullptr, Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::VNMDropDownWidget_eventSetOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::VNMDropDownWidget_eventSetOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMDropDownWidget_SetOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMDropDownWidget_SetOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMDropDownWidget::execSetOptions)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOptions(Z_Param_Out_InOptions);
	P_NATIVE_END;
}
// End Class UVNMDropDownWidget Function SetOptions

// Begin Class UVNMDropDownWidget Function SetSelectedOption
struct Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics
{
	struct VNMDropDownWidget_eventSetSelectedOption_Parms
	{
		FString SelectedOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMDropDownWidget_eventSetSelectedOption_Parms, SelectedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOption_MetaData), NewProp_SelectedOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::NewProp_SelectedOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMDropDownWidget, nullptr, "SetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::VNMDropDownWidget_eventSetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::VNMDropDownWidget_eventSetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMDropDownWidget::execSetSelectedOption)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedOption(Z_Param_SelectedOption);
	P_NATIVE_END;
}
// End Class UVNMDropDownWidget Function SetSelectedOption

// Begin Class UVNMDropDownWidget
void UVNMDropDownWidget::StaticRegisterNativesUVNMDropDownWidget()
{
	UClass* Class = UVNMDropDownWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOption", &UVNMDropDownWidget::execAddOption },
		{ "OnDropdownButtonClicked", &UVNMDropDownWidget::execOnDropdownButtonClicked },
		{ "SetOptions", &UVNMDropDownWidget::execSetOptions },
		{ "SetSelectedOption", &UVNMDropDownWidget::execSetSelectedOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMDropDownWidget);
UClass* Z_Construct_UClass_UVNMDropDownWidget_NoRegister()
{
	return UVNMDropDownWidget::StaticClass();
}
struct Z_Construct_UClass_UVNMDropDownWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/VNMDropDownWidget.h" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownArrowImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownValueText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownStyling_MetaData[] = {
		{ "Category", "Styling" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStyling_MetaData[] = {
		{ "Category", "Styling" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownContentWidgetClass_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownItemWidgetClass_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropdownContentWidget_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDropDownExpanded_MetaData[] = {
		{ "Category", "Dropdown" },
		{ "ModuleRelativePath", "Public/UI/VNMDropDownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropdownArrowImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropdownButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropdownValueText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropdownStyling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStyling;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropdownContentWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropdownItemWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropdownContentWidget;
	static void NewProp_bIsDropDownExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDropDownExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVNMDropDownWidget_AddOption, "AddOption" }, // 1808680336
		{ &Z_Construct_UFunction_UVNMDropDownWidget_OnDropdownButtonClicked, "OnDropdownButtonClicked" }, // 3279784235
		{ &Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature, "OnSelectionChangedEvent__DelegateSignature" }, // 1914338680
		{ &Z_Construct_UFunction_UVNMDropDownWidget_SetOptions, "SetOptions" }, // 1242312997
		{ &Z_Construct_UFunction_UVNMDropDownWidget_SetSelectedOption, "SetSelectedOption" }, // 218434145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMDropDownWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, OnSelectionChanged), Z_Construct_UDelegateFunction_UVNMDropDownWidget_OnSelectionChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 1914338680
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, BackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownArrowImage = { "DropdownArrowImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownArrowImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownArrowImage_MetaData), NewProp_DropdownArrowImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownButton = { "DropdownButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownButton_MetaData), NewProp_DropdownButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownValueText = { "DropdownValueText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownValueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownValueText_MetaData), NewProp_DropdownValueText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownStyling = { "DropdownStyling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownStyling), Z_Construct_UScriptStruct_FButtonStyling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownStyling_MetaData), NewProp_DropdownStyling_MetaData) }; // 2873607832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_ItemStyling = { "ItemStyling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, ItemStyling), Z_Construct_UScriptStruct_FButtonStyling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStyling_MetaData), NewProp_ItemStyling_MetaData) }; // 2873607832
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownContentWidgetClass = { "DropdownContentWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownContentWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMDropDownContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownContentWidgetClass_MetaData), NewProp_DropdownContentWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownItemWidgetClass = { "DropdownItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVNMDropDownItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownItemWidgetClass_MetaData), NewProp_DropdownItemWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownContentWidget = { "DropdownContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMDropDownWidget, DropdownContentWidget), Z_Construct_UClass_UVNMDropDownContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropdownContentWidget_MetaData), NewProp_DropdownContentWidget_MetaData) };
void Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_bIsDropDownExpanded_SetBit(void* Obj)
{
	((UVNMDropDownWidget*)Obj)->bIsDropDownExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_bIsDropDownExpanded = { "bIsDropDownExpanded", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVNMDropDownWidget), &Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_bIsDropDownExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDropDownExpanded_MetaData), NewProp_bIsDropDownExpanded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMDropDownWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownArrowImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownStyling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_ItemStyling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownContentWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownItemWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_DropdownContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMDropDownWidget_Statics::NewProp_bIsDropDownExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMDropDownWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMDropDownWidget_Statics::ClassParams = {
	&UVNMDropDownWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMDropDownWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMDropDownWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMDropDownWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMDropDownWidget()
{
	if (!Z_Registration_Info_UClass_UVNMDropDownWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMDropDownWidget.OuterSingleton, Z_Construct_UClass_UVNMDropDownWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMDropDownWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMDropDownWidget>()
{
	return UVNMDropDownWidget::StaticClass();
}
UVNMDropDownWidget::UVNMDropDownWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMDropDownWidget);
UVNMDropDownWidget::~UVNMDropDownWidget() {}
// End Class UVNMDropDownWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMDropDownWidget, UVNMDropDownWidget::StaticClass, TEXT("UVNMDropDownWidget"), &Z_Registration_Info_UClass_UVNMDropDownWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMDropDownWidget), 885669385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownWidget_h_2084540556(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMDropDownWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
