// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/MenuButtonWidget.h"
#include "VNM/Public/UI/Data/ButtonStyling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuButtonWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature();
VNM_API UFunction* Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyling();
// End Cross Module References

// Begin Delegate FOnMenuButtonEvent
struct Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics
{
	struct MenuButtonWidget_eventOnMenuButtonEvent_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuButtonWidget_eventOnMenuButtonEvent_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::MenuButtonWidget_eventOnMenuButtonEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::MenuButtonWidget_eventOnMenuButtonEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMenuButtonWidget::FOnMenuButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonEvent, UMenuButtonWidget* ClickedButton)
{
	struct MenuButtonWidget_eventOnMenuButtonEvent_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
	MenuButtonWidget_eventOnMenuButtonEvent_Parms Parms;
	Parms.ClickedButton=ClickedButton;
	OnMenuButtonEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuButtonEvent

// Begin Delegate FOnMenuButtonFlagEvent
struct Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics
{
	struct MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms
	{
		UMenuButtonWidget* ClickedButton;
		bool FlagChanged;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static void NewProp_FlagChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlagChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
void Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::NewProp_FlagChanged_SetBit(void* Obj)
{
	((MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms*)Obj)->FlagChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::NewProp_FlagChanged = { "FlagChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms), &Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::NewProp_FlagChanged_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::NewProp_ClickedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::NewProp_FlagChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonFlagEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMenuButtonWidget::FOnMenuButtonFlagEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonFlagEvent, UMenuButtonWidget* ClickedButton, bool FlagChanged)
{
	struct MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms
	{
		UMenuButtonWidget* ClickedButton;
		bool FlagChanged;
	};
	MenuButtonWidget_eventOnMenuButtonFlagEvent_Parms Parms;
	Parms.ClickedButton=ClickedButton;
	Parms.FlagChanged=FlagChanged ? true : false;
	OnMenuButtonFlagEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuButtonFlagEvent

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonClicked
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonClicked = FName(TEXT("BP_OnMenuButtonClicked"));
void UMenuButtonWidget::BP_OnMenuButtonClicked()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonClicked),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Button Clicked" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonClicked

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonHovered
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonHovered = FName(TEXT("BP_OnMenuButtonHovered"));
void UMenuButtonWidget::BP_OnMenuButtonHovered()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonHovered),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Button Hovered" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonHovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonHovered

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonLockedStateChanged
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged = FName(TEXT("BP_OnMenuButtonLockedStateChanged"));
void UMenuButtonWidget::BP_OnMenuButtonLockedStateChanged()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Locked State Changed" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonLockedStateChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonLockedStateChanged

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonPressed
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonPressed = FName(TEXT("BP_OnMenuButtonPressed"));
void UMenuButtonWidget::BP_OnMenuButtonPressed()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonPressed),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Button Pressed" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonPressed

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonReleased
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonReleased = FName(TEXT("BP_OnMenuButtonReleased"));
void UMenuButtonWidget::BP_OnMenuButtonReleased()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonReleased),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Button Released" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonReleased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonReleased

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonSelectionChanged
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged = FName(TEXT("BP_OnMenuButtonSelectionChanged"));
void UMenuButtonWidget::BP_OnMenuButtonSelectionChanged()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Button Selection Changed" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonSelectionChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonSelectionChanged

// Begin Class UMenuButtonWidget Function BP_OnMenuButtonUnhovered
static FName NAME_UMenuButtonWidget_BP_OnMenuButtonUnhovered = FName(TEXT("BP_OnMenuButtonUnhovered"));
void UMenuButtonWidget::BP_OnMenuButtonUnhovered()
{
	ProcessEvent(FindFunctionChecked(NAME_UMenuButtonWidget_BP_OnMenuButtonUnhovered),NULL);
}
struct Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "DisplayName", "On Menu Button Unhovered" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "BP_OnMenuButtonUnhovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMenuButtonWidget Function BP_OnMenuButtonUnhovered

// Begin Class UMenuButtonWidget Function OnMenuButtonClicked
struct Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execOnMenuButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMenuButtonClicked();
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function OnMenuButtonClicked

// Begin Class UMenuButtonWidget Function OnMenuButtonHovered
struct Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonHovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execOnMenuButtonHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMenuButtonHovered();
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function OnMenuButtonHovered

// Begin Class UMenuButtonWidget Function OnMenuButtonPressed
struct Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execOnMenuButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMenuButtonPressed();
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function OnMenuButtonPressed

// Begin Class UMenuButtonWidget Function OnMenuButtonReleased
struct Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonReleased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execOnMenuButtonReleased)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMenuButtonReleased();
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function OnMenuButtonReleased

// Begin Class UMenuButtonWidget Function OnMenuButtonUnhovered
struct Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "OnMenuButtonUnhovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execOnMenuButtonUnhovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMenuButtonUnhovered();
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function OnMenuButtonUnhovered

// Begin Class UMenuButtonWidget Function SetButtonStyling
struct Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics
{
	struct MenuButtonWidget_eventSetButtonStyling_Parms
	{
		FButtonStyling NewButtonStyling;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewButtonStyling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewButtonStyling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::NewProp_NewButtonStyling = { "NewButtonStyling", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuButtonWidget_eventSetButtonStyling_Parms, NewButtonStyling), Z_Construct_UScriptStruct_FButtonStyling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewButtonStyling_MetaData), NewProp_NewButtonStyling_MetaData) }; // 2873607832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::NewProp_NewButtonStyling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "SetButtonStyling", nullptr, nullptr, Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::MenuButtonWidget_eventSetButtonStyling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::MenuButtonWidget_eventSetButtonStyling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execSetButtonStyling)
{
	P_GET_STRUCT_REF(FButtonStyling,Z_Param_Out_NewButtonStyling);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonStyling(Z_Param_Out_NewButtonStyling);
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function SetButtonStyling

// Begin Class UMenuButtonWidget Function SetIsSelected
struct Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics
{
	struct MenuButtonWidget_eventSetIsSelected_Parms
	{
		bool bInIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::NewProp_bInIsSelected_SetBit(void* Obj)
{
	((MenuButtonWidget_eventSetIsSelected_Parms*)Obj)->bInIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::NewProp_bInIsSelected = { "bInIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuButtonWidget_eventSetIsSelected_Parms), &Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::NewProp_bInIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::NewProp_bInIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "SetIsSelected", nullptr, nullptr, Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::MenuButtonWidget_eventSetIsSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::MenuButtonWidget_eventSetIsSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execSetIsSelected)
{
	P_GET_UBOOL(Z_Param_bInIsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsSelected(Z_Param_bInIsSelected);
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function SetIsSelected

// Begin Class UMenuButtonWidget Function SetLocked
struct Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics
{
	struct MenuButtonWidget_eventSetLocked_Parms
	{
		bool bInIsLocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
{
	((MenuButtonWidget_eventSetLocked_Parms*)Obj)->bInIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuButtonWidget_eventSetLocked_Parms), &Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::NewProp_bInIsLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuButtonWidget, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::MenuButtonWidget_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::MenuButtonWidget_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuButtonWidget_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuButtonWidget_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuButtonWidget::execSetLocked)
{
	P_GET_UBOOL(Z_Param_bInIsLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_bInIsLocked);
	P_NATIVE_END;
}
// End Class UMenuButtonWidget Function SetLocked

// Begin Class UMenuButtonWidget
void UMenuButtonWidget::StaticRegisterNativesUMenuButtonWidget()
{
	UClass* Class = UMenuButtonWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMenuButtonClicked", &UMenuButtonWidget::execOnMenuButtonClicked },
		{ "OnMenuButtonHovered", &UMenuButtonWidget::execOnMenuButtonHovered },
		{ "OnMenuButtonPressed", &UMenuButtonWidget::execOnMenuButtonPressed },
		{ "OnMenuButtonReleased", &UMenuButtonWidget::execOnMenuButtonReleased },
		{ "OnMenuButtonUnhovered", &UMenuButtonWidget::execOnMenuButtonUnhovered },
		{ "SetButtonStyling", &UMenuButtonWidget::execSetButtonStyling },
		{ "SetIsSelected", &UMenuButtonWidget::execSetIsSelected },
		{ "SetLocked", &UMenuButtonWidget::execSetLocked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuButtonWidget);
UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister()
{
	return UMenuButtonWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuButtonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/MenuButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonHovered_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonUnhovered_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonSelectionChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonLockedStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "Category", "Menu Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
		{ "Category", "Menu Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelectedOnClick_MetaData[] = {
		{ "Category", "Menu Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonHovered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonUnhovered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonReleased;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonLockedStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static void NewProp_bIsSelectedOnClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelectedOnClick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonClicked, "BP_OnMenuButtonClicked" }, // 3760527776
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonHovered, "BP_OnMenuButtonHovered" }, // 238820259
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonLockedStateChanged, "BP_OnMenuButtonLockedStateChanged" }, // 1097945679
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonPressed, "BP_OnMenuButtonPressed" }, // 2950830115
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonReleased, "BP_OnMenuButtonReleased" }, // 1130880318
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonSelectionChanged, "BP_OnMenuButtonSelectionChanged" }, // 384023060
		{ &Z_Construct_UFunction_UMenuButtonWidget_BP_OnMenuButtonUnhovered, "BP_OnMenuButtonUnhovered" }, // 4088941297
		{ &Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonClicked, "OnMenuButtonClicked" }, // 3128266045
		{ &Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature, "OnMenuButtonEvent__DelegateSignature" }, // 3539676638
		{ &Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature, "OnMenuButtonFlagEvent__DelegateSignature" }, // 3793267933
		{ &Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonHovered, "OnMenuButtonHovered" }, // 2024857562
		{ &Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonPressed, "OnMenuButtonPressed" }, // 4141662764
		{ &Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonReleased, "OnMenuButtonReleased" }, // 1508910101
		{ &Z_Construct_UFunction_UMenuButtonWidget_OnMenuButtonUnhovered, "OnMenuButtonUnhovered" }, // 1643930771
		{ &Z_Construct_UFunction_UMenuButtonWidget_SetButtonStyling, "SetButtonStyling" }, // 4121896455
		{ &Z_Construct_UFunction_UMenuButtonWidget_SetIsSelected, "SetIsSelected" }, // 2881880657
		{ &Z_Construct_UFunction_UMenuButtonWidget_SetLocked, "SetLocked" }, // 2456471711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuButtonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonClicked = { "OnButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonClicked), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonClicked_MetaData), NewProp_OnButtonClicked_MetaData) }; // 3539676638
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonHovered = { "OnButtonHovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonHovered), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonHovered_MetaData), NewProp_OnButtonHovered_MetaData) }; // 3539676638
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonUnhovered = { "OnButtonUnhovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonUnhovered), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonUnhovered_MetaData), NewProp_OnButtonUnhovered_MetaData) }; // 3539676638
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonPressed = { "OnButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonPressed), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonPressed_MetaData), NewProp_OnButtonPressed_MetaData) }; // 3539676638
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonReleased = { "OnButtonReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonReleased), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonReleased_MetaData), NewProp_OnButtonReleased_MetaData) }; // 3539676638
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonSelectionChanged = { "OnButtonSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonSelectionChanged), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonSelectionChanged_MetaData), NewProp_OnButtonSelectionChanged_MetaData) }; // 3793267933
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonLockedStateChanged = { "OnButtonLockedStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, OnButtonLockedStateChanged), Z_Construct_UDelegateFunction_UMenuButtonWidget_OnMenuButtonFlagEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonLockedStateChanged_MetaData), NewProp_OnButtonLockedStateChanged_MetaData) }; // 3793267933
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, MenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuButton_MetaData), NewProp_MenuButton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuButtonWidget, Style), Z_Construct_UScriptStruct_FButtonStyling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 2873607832
void Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((UMenuButtonWidget*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuButtonWidget), &Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
void Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((UMenuButtonWidget*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuButtonWidget), &Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelected_MetaData), NewProp_bIsSelected_MetaData) };
void Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelectedOnClick_SetBit(void* Obj)
{
	((UMenuButtonWidget*)Obj)->bIsSelectedOnClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelectedOnClick = { "bIsSelectedOnClick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuButtonWidget), &Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelectedOnClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelectedOnClick_MetaData), NewProp_bIsSelectedOnClick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuButtonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonUnhovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_OnButtonLockedStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_MenuButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuButtonWidget_Statics::NewProp_bIsSelectedOnClick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuButtonWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuButtonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuButtonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuButtonWidget_Statics::ClassParams = {
	&UMenuButtonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuButtonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuButtonWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuButtonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuButtonWidget()
{
	if (!Z_Registration_Info_UClass_UMenuButtonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuButtonWidget.OuterSingleton, Z_Construct_UClass_UMenuButtonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuButtonWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMenuButtonWidget>()
{
	return UMenuButtonWidget::StaticClass();
}
UMenuButtonWidget::UMenuButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuButtonWidget);
UMenuButtonWidget::~UMenuButtonWidget() {}
// End Class UMenuButtonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuButtonWidget, UMenuButtonWidget::StaticClass, TEXT("UMenuButtonWidget"), &Z_Registration_Info_UClass_UMenuButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuButtonWidget), 1377929551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_313764189(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuButtonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
