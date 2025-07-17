// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/MenuInputButtonWidget.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "VNM/Public/UI/Data/ButtonStyling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuInputButtonWidget() {}

// Begin Cross Module References
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuIconButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuInputButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuInputButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuTextButtonWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyling();
// End Cross Module References

// Begin Delegate FOnInputButtonEvent
struct Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics
{
	struct MenuInputButtonWidget_eventOnInputButtonEvent_Parms
	{
		UMenuInputButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuInputButtonWidget_eventOnInputButtonEvent_Parms, ClickedButton), Z_Construct_UClass_UMenuInputButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuInputButtonWidget, nullptr, "OnInputButtonEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::MenuInputButtonWidget_eventOnInputButtonEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::MenuInputButtonWidget_eventOnInputButtonEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMenuInputButtonWidget::FOnInputButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnInputButtonEvent, UMenuInputButtonWidget* ClickedButton)
{
	struct MenuInputButtonWidget_eventOnInputButtonEvent_Parms
	{
		UMenuInputButtonWidget* ClickedButton;
	};
	MenuInputButtonWidget_eventOnInputButtonEvent_Parms Parms;
	Parms.ClickedButton=ClickedButton;
	OnInputButtonEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInputButtonEvent

// Begin Class UMenuInputButtonWidget Function BP_OnMenuInputButtonClicked
static FName NAME_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked = FName(TEXT("BP_OnMenuInputButtonClicked"));
void UMenuInputButtonWidget::BP_OnMenuInputButtonClicked()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked),NULL);
}
struct Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Input Button" },
		{ "DisplayName", "On Menu Input Button Clicked" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuInputButtonWidget, nullptr, "BP_OnMenuInputButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuInputButtonWidget Function BP_OnMenuInputButtonClicked

// Begin Class UMenuInputButtonWidget Function OnInternalButtonClicked
struct Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics
{
	struct MenuInputButtonWidget_eventOnInternalButtonClicked_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuInputButtonWidget_eventOnInternalButtonClicked_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuInputButtonWidget, nullptr, "OnInternalButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::MenuInputButtonWidget_eventOnInternalButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::MenuInputButtonWidget_eventOnInternalButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuInputButtonWidget::execOnInternalButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInternalButtonClicked(Z_Param_ClickedButton);
	P_NATIVE_END;
}
// End Class UMenuInputButtonWidget Function OnInternalButtonClicked

// Begin Class UMenuInputButtonWidget Function OnMenuInputButtonClicked
struct Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuInputButtonWidget, nullptr, "OnMenuInputButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuInputButtonWidget::execOnMenuInputButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMenuInputButtonClicked();
	P_NATIVE_END;
}
// End Class UMenuInputButtonWidget Function OnMenuInputButtonClicked

// Begin Class UMenuInputButtonWidget
void UMenuInputButtonWidget::StaticRegisterNativesUMenuInputButtonWidget()
{
	UClass* Class = UMenuInputButtonWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInternalButtonClicked", &UMenuInputButtonWidget::execOnInternalButtonClicked },
		{ "OnMenuInputButtonClicked", &UMenuInputButtonWidget::execOnMenuInputButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuInputButtonWidget);
UClass* Z_Construct_UClass_UMenuInputButtonWidget_NoRegister()
{
	return UMenuInputButtonWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuInputButtonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/MenuInputButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Input Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Input Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Input Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputVisualizationSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Input Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "Comment", "// The name of the input action to be triggered.\n// When the input action is triggered, it will trigger the click event\n" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
		{ "ToolTip", "The name of the input action to be triggered.\nWhen the input action is triggered, it will trigger the click event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowTouchIcon_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideInputKeyIcon_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingText_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchButtonStyle_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardKey_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadKey_MetaData[] = {
		{ "Category", "Menu Input Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuInputButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputVisualizationSwitcher;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionName;
	static void NewProp_bConsumeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
	static void NewProp_bAlwaysShowTouchIcon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowTouchIcon;
	static void NewProp_bHideInputKeyIcon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInputKeyIcon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BindingText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuInputButtonWidget_BP_OnMenuInputButtonClicked, "BP_OnMenuInputButtonClicked" }, // 3622543668
		{ &Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature, "OnInputButtonEvent__DelegateSignature" }, // 12556297
		{ &Z_Construct_UFunction_UMenuInputButtonWidget_OnInternalButtonClicked, "OnInternalButtonClicked" }, // 3108826108
		{ &Z_Construct_UFunction_UMenuInputButtonWidget_OnMenuInputButtonClicked, "OnMenuInputButtonClicked" }, // 1347229707
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuInputButtonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_OnButtonClicked = { "OnButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, OnButtonClicked), Z_Construct_UDelegateFunction_UMenuInputButtonWidget_OnInputButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonClicked_MetaData), NewProp_OnButtonClicked_MetaData) }; // 12556297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_KeyIcon = { "KeyIcon", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, KeyIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyIcon_MetaData), NewProp_KeyIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_TouchButton = { "TouchButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, TouchButton), Z_Construct_UClass_UMenuIconButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchButton_MetaData), NewProp_TouchButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_InputButton = { "InputButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, InputButton), Z_Construct_UClass_UMenuTextButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputButton_MetaData), NewProp_InputButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_InputVisualizationSwitcher = { "InputVisualizationSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, InputVisualizationSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputVisualizationSwitcher_MetaData), NewProp_InputVisualizationSwitcher_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_InputActionName = { "InputActionName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, InputActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionName_MetaData), NewProp_InputActionName_MetaData) };
void Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
{
	((UMenuInputButtonWidget*)Obj)->bConsumeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuInputButtonWidget), &Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeInput_MetaData), NewProp_bConsumeInput_MetaData) };
void Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bAlwaysShowTouchIcon_SetBit(void* Obj)
{
	((UMenuInputButtonWidget*)Obj)->bAlwaysShowTouchIcon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bAlwaysShowTouchIcon = { "bAlwaysShowTouchIcon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuInputButtonWidget), &Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bAlwaysShowTouchIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowTouchIcon_MetaData), NewProp_bAlwaysShowTouchIcon_MetaData) };
void Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bHideInputKeyIcon_SetBit(void* Obj)
{
	((UMenuInputButtonWidget*)Obj)->bHideInputKeyIcon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bHideInputKeyIcon = { "bHideInputKeyIcon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuInputButtonWidget), &Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bHideInputKeyIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideInputKeyIcon_MetaData), NewProp_bHideInputKeyIcon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_BindingText = { "BindingText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, BindingText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingText_MetaData), NewProp_BindingText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_TouchButtonStyle = { "TouchButtonStyle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, TouchButtonStyle), Z_Construct_UScriptStruct_FButtonStyling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchButtonStyle_MetaData), NewProp_TouchButtonStyle_MetaData) }; // 2873607832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_KeyboardKey = { "KeyboardKey", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, KeyboardKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardKey_MetaData), NewProp_KeyboardKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_GamepadKey = { "GamepadKey", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuInputButtonWidget, GamepadKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadKey_MetaData), NewProp_GamepadKey_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuInputButtonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_OnButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_KeyIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_TouchButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_InputButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_InputVisualizationSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_InputActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bConsumeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bAlwaysShowTouchIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_bHideInputKeyIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_BindingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_TouchButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_KeyboardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuInputButtonWidget_Statics::NewProp_GamepadKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuInputButtonWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuInputButtonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuInputButtonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuInputButtonWidget_Statics::ClassParams = {
	&UMenuInputButtonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuInputButtonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuInputButtonWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuInputButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuInputButtonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuInputButtonWidget()
{
	if (!Z_Registration_Info_UClass_UMenuInputButtonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuInputButtonWidget.OuterSingleton, Z_Construct_UClass_UMenuInputButtonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuInputButtonWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMenuInputButtonWidget>()
{
	return UMenuInputButtonWidget::StaticClass();
}
UMenuInputButtonWidget::UMenuInputButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuInputButtonWidget);
UMenuInputButtonWidget::~UMenuInputButtonWidget() {}
// End Class UMenuInputButtonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuInputButtonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuInputButtonWidget, UMenuInputButtonWidget::StaticClass, TEXT("UMenuInputButtonWidget"), &Z_Registration_Info_UClass_UMenuInputButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuInputButtonWidget), 2998556254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuInputButtonWidget_h_4121900795(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuInputButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuInputButtonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
