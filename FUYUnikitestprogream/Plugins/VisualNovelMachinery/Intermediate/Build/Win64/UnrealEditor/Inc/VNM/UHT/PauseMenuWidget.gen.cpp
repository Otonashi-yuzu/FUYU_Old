// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/PauseMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenuWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_ULoadGameWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuContentWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UPauseMenuWidget();
VNM_API UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_USaveGameWidget_NoRegister();
// End Cross Module References

// Begin Class UPauseMenuWidget Function GoToLoadGameWidget
struct Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "GoToLoadGameWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execGoToLoadGameWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoToLoadGameWidget();
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function GoToLoadGameWidget

// Begin Class UPauseMenuWidget Function GoToSaveGameWidget
struct Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "GoToSaveGameWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execGoToSaveGameWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoToSaveGameWidget();
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function GoToSaveGameWidget

// Begin Class UPauseMenuWidget Function OnExitGameButtonClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics
{
	struct PauseMenuWidget_eventOnExitGameButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventOnExitGameButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnExitGameButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::PauseMenuWidget_eventOnExitGameButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::PauseMenuWidget_eventOnExitGameButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnExitGameButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitGameButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnExitGameButtonClicked

// Begin Class UPauseMenuWidget Function OnLoadGameButtonClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics
{
	struct PauseMenuWidget_eventOnLoadGameButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventOnLoadGameButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnLoadGameButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::PauseMenuWidget_eventOnLoadGameButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::PauseMenuWidget_eventOnLoadGameButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnLoadGameButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadGameButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnLoadGameButtonClicked

// Begin Class UPauseMenuWidget Function OnOptionsButtonClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics
{
	struct PauseMenuWidget_eventOnOptionsButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventOnOptionsButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnOptionsButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::PauseMenuWidget_eventOnOptionsButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::PauseMenuWidget_eventOnOptionsButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnOptionsButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOptionsButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnOptionsButtonClicked

// Begin Class UPauseMenuWidget Function OnReturnButtonClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics
{
	struct PauseMenuWidget_eventOnReturnButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventOnReturnButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnReturnButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::PauseMenuWidget_eventOnReturnButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::PauseMenuWidget_eventOnReturnButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnReturnButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnReturnButtonClicked

// Begin Class UPauseMenuWidget Function OnReturnToMainMenuButtonClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics
{
	struct PauseMenuWidget_eventOnReturnToMainMenuButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventOnReturnToMainMenuButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnReturnToMainMenuButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::PauseMenuWidget_eventOnReturnToMainMenuButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::PauseMenuWidget_eventOnReturnToMainMenuButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnReturnToMainMenuButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnToMainMenuButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnReturnToMainMenuButtonClicked

// Begin Class UPauseMenuWidget Function OnSaveGameButtonClicked
struct Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics
{
	struct PauseMenuWidget_eventOnSaveGameButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseMenuWidget_eventOnSaveGameButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnSaveGameButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::PauseMenuWidget_eventOnSaveGameButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::PauseMenuWidget_eventOnSaveGameButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnSaveGameButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveGameButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnSaveGameButtonClicked

// Begin Class UPauseMenuWidget Function OnSaveGameSelected
struct Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "OnSaveGameSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenuWidget::execOnSaveGameSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveGameSelected();
	P_NATIVE_END;
}
// End Class UPauseMenuWidget Function OnSaveGameSelected

// Begin Class UPauseMenuWidget Function ReceiveGoToLoadGameWidget
static FName NAME_UPauseMenuWidget_ReceiveGoToLoadGameWidget = FName(TEXT("ReceiveGoToLoadGameWidget"));
void UPauseMenuWidget::ReceiveGoToLoadGameWidget()
{
	ProcessEvent(FindFunctionChecked(NAME_UPauseMenuWidget_ReceiveGoToLoadGameWidget),NULL);
}
struct Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "DisplayName", "Go to Load Game Widget" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "ReceiveGoToLoadGameWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPauseMenuWidget Function ReceiveGoToLoadGameWidget

// Begin Class UPauseMenuWidget Function ReceiveGoToSaveGameWidget
static FName NAME_UPauseMenuWidget_ReceiveGoToSaveGameWidget = FName(TEXT("ReceiveGoToSaveGameWidget"));
void UPauseMenuWidget::ReceiveGoToSaveGameWidget()
{
	ProcessEvent(FindFunctionChecked(NAME_UPauseMenuWidget_ReceiveGoToSaveGameWidget),NULL);
}
struct Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "DisplayName", "Go to Save Game Widget" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuWidget, nullptr, "ReceiveGoToSaveGameWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPauseMenuWidget Function ReceiveGoToSaveGameWidget

// Begin Class UPauseMenuWidget
void UPauseMenuWidget::StaticRegisterNativesUPauseMenuWidget()
{
	UClass* Class = UPauseMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GoToLoadGameWidget", &UPauseMenuWidget::execGoToLoadGameWidget },
		{ "GoToSaveGameWidget", &UPauseMenuWidget::execGoToSaveGameWidget },
		{ "OnExitGameButtonClicked", &UPauseMenuWidget::execOnExitGameButtonClicked },
		{ "OnLoadGameButtonClicked", &UPauseMenuWidget::execOnLoadGameButtonClicked },
		{ "OnOptionsButtonClicked", &UPauseMenuWidget::execOnOptionsButtonClicked },
		{ "OnReturnButtonClicked", &UPauseMenuWidget::execOnReturnButtonClicked },
		{ "OnReturnToMainMenuButtonClicked", &UPauseMenuWidget::execOnReturnToMainMenuButtonClicked },
		{ "OnSaveGameButtonClicked", &UPauseMenuWidget::execOnSaveGameButtonClicked },
		{ "OnSaveGameSelected", &UPauseMenuWidget::execOnSaveGameSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseMenuWidget);
UClass* Z_Construct_UClass_UPauseMenuWidget_NoRegister()
{
	return UPauseMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UPauseMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/PauseMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuContentSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameContentWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGameContentWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGameWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsContentWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pause Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/PauseMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuContentSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameContentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadGameContentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadGameWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsContentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToMainMenuButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenuWidget_GoToLoadGameWidget, "GoToLoadGameWidget" }, // 3511660666
		{ &Z_Construct_UFunction_UPauseMenuWidget_GoToSaveGameWidget, "GoToSaveGameWidget" }, // 744475711
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnExitGameButtonClicked, "OnExitGameButtonClicked" }, // 1759436148
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnLoadGameButtonClicked, "OnLoadGameButtonClicked" }, // 804287641
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnOptionsButtonClicked, "OnOptionsButtonClicked" }, // 1442422283
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnReturnButtonClicked, "OnReturnButtonClicked" }, // 2210413093
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnReturnToMainMenuButtonClicked, "OnReturnToMainMenuButtonClicked" }, // 3270732661
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameButtonClicked, "OnSaveGameButtonClicked" }, // 2195534426
		{ &Z_Construct_UFunction_UPauseMenuWidget_OnSaveGameSelected, "OnSaveGameSelected" }, // 3375159693
		{ &Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToLoadGameWidget, "ReceiveGoToLoadGameWidget" }, // 30416035
		{ &Z_Construct_UFunction_UPauseMenuWidget_ReceiveGoToSaveGameWidget, "ReceiveGoToSaveGameWidget" }, // 2042395930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseMenuContentSwitcher = { "PauseMenuContentSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, PauseMenuContentSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuContentSwitcher_MetaData), NewProp_PauseMenuContentSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_SaveGameContentWidget = { "SaveGameContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, SaveGameContentWidget), Z_Construct_UClass_UMenuContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameContentWidget_MetaData), NewProp_SaveGameContentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_SaveGameWidget = { "SaveGameWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, SaveGameWidget), Z_Construct_UClass_USaveGameWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameWidget_MetaData), NewProp_SaveGameWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_LoadGameContentWidget = { "LoadGameContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, LoadGameContentWidget), Z_Construct_UClass_UMenuContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGameContentWidget_MetaData), NewProp_LoadGameContentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_LoadGameWidget = { "LoadGameWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, LoadGameWidget), Z_Construct_UClass_ULoadGameWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGameWidget_MetaData), NewProp_LoadGameWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_OptionsContentWidget = { "OptionsContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, OptionsContentWidget), Z_Construct_UClass_UMenuContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsContentWidget_MetaData), NewProp_OptionsContentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_SaveGameButton = { "SaveGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, SaveGameButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameButton_MetaData), NewProp_SaveGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_LoadGameButton = { "LoadGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, LoadGameButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGameButton_MetaData), NewProp_LoadGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_OptionsButton = { "OptionsButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, OptionsButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsButton_MetaData), NewProp_OptionsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ReturnToMainMenuButton = { "ReturnToMainMenuButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, ReturnToMainMenuButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToMainMenuButton_MetaData), NewProp_ReturnToMainMenuButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ExitGameButton = { "ExitGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, ExitGameButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitGameButton_MetaData), NewProp_ExitGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ReturnButton = { "ReturnButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenuWidget, ReturnButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnButton_MetaData), NewProp_ReturnButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_PauseMenuContentSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_SaveGameContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_SaveGameWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_LoadGameContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_LoadGameWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_OptionsContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_SaveGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_LoadGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_OptionsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ReturnToMainMenuButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ExitGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenuWidget_Statics::NewProp_ReturnButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams = {
	&UPauseMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPauseMenuWidget()
{
	if (!Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton, Z_Construct_UClass_UPauseMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseMenuWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UPauseMenuWidget>()
{
	return UPauseMenuWidget::StaticClass();
}
UPauseMenuWidget::UPauseMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenuWidget);
UPauseMenuWidget::~UPauseMenuWidget() {}
// End Class UPauseMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_PauseMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseMenuWidget, UPauseMenuWidget::StaticClass, TEXT("UPauseMenuWidget"), &Z_Registration_Info_UClass_UPauseMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseMenuWidget), 2545132542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_PauseMenuWidget_h_328510193(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_PauseMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_PauseMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
