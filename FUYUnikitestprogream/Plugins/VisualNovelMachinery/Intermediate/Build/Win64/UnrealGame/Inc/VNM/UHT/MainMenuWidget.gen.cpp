// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/MainMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_ULoadGameWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMainMenuWidget();
VNM_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuContentWidget_NoRegister();
// End Cross Module References

// Begin Class UMainMenuWidget Function OnExitGameButtonClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics
{
	struct MainMenuWidget_eventOnExitGameButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventOnExitGameButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnExitGameButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::MainMenuWidget_eventOnExitGameButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::MainMenuWidget_eventOnExitGameButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnExitGameButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitGameButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnExitGameButtonClicked

// Begin Class UMainMenuWidget Function OnGalleryButtonClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics
{
	struct MainMenuWidget_eventOnGalleryButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventOnGalleryButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnGalleryButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::MainMenuWidget_eventOnGalleryButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::MainMenuWidget_eventOnGalleryButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnGalleryButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGalleryButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnGalleryButtonClicked

// Begin Class UMainMenuWidget Function OnLoadGameButtonClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics
{
	struct MainMenuWidget_eventOnLoadGameButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventOnLoadGameButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnLoadGameButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::MainMenuWidget_eventOnLoadGameButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::MainMenuWidget_eventOnLoadGameButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnLoadGameButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadGameButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnLoadGameButtonClicked

// Begin Class UMainMenuWidget Function OnOptionsButtonClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics
{
	struct MainMenuWidget_eventOnOptionsButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventOnOptionsButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnOptionsButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::MainMenuWidget_eventOnOptionsButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::MainMenuWidget_eventOnOptionsButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnOptionsButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOptionsButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnOptionsButtonClicked

// Begin Class UMainMenuWidget Function OnStartGameButtonClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics
{
	struct MainMenuWidget_eventOnStartGameButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuWidget_eventOnStartGameButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnStartGameButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::MainMenuWidget_eventOnStartGameButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::MainMenuWidget_eventOnStartGameButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnStartGameButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartGameButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnStartGameButtonClicked

// Begin Class UMainMenuWidget
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitGameButtonClicked", &UMainMenuWidget::execOnExitGameButtonClicked },
		{ "OnGalleryButtonClicked", &UMainMenuWidget::execOnGalleryButtonClicked },
		{ "OnLoadGameButtonClicked", &UMainMenuWidget::execOnLoadGameButtonClicked },
		{ "OnOptionsButtonClicked", &UMainMenuWidget::execOnOptionsButtonClicked },
		{ "OnStartGameButtonClicked", &UMainMenuWidget::execOnStartGameButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidget);
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuContentSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGameContentWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGameWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsContentWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryContentWidget_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Main Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuContentSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadGameContentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadGameWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsContentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryContentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadGameButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitGameButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnExitGameButtonClicked, "OnExitGameButtonClicked" }, // 2335579599
		{ &Z_Construct_UFunction_UMainMenuWidget_OnGalleryButtonClicked, "OnGalleryButtonClicked" }, // 1195894742
		{ &Z_Construct_UFunction_UMainMenuWidget_OnLoadGameButtonClicked, "OnLoadGameButtonClicked" }, // 2310308874
		{ &Z_Construct_UFunction_UMainMenuWidget_OnOptionsButtonClicked, "OnOptionsButtonClicked" }, // 4211294582
		{ &Z_Construct_UFunction_UMainMenuWidget_OnStartGameButtonClicked, "OnStartGameButtonClicked" }, // 481935442
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MainMenuContentSwitcher = { "MainMenuContentSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, MainMenuContentSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuContentSwitcher_MetaData), NewProp_MainMenuContentSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LoadGameContentWidget = { "LoadGameContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, LoadGameContentWidget), Z_Construct_UClass_UMenuContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGameContentWidget_MetaData), NewProp_LoadGameContentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LoadGameWidget = { "LoadGameWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, LoadGameWidget), Z_Construct_UClass_ULoadGameWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGameWidget_MetaData), NewProp_LoadGameWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_OptionsContentWidget = { "OptionsContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, OptionsContentWidget), Z_Construct_UClass_UMenuContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsContentWidget_MetaData), NewProp_OptionsContentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_GalleryContentWidget = { "GalleryContentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, GalleryContentWidget), Z_Construct_UClass_UMenuContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryContentWidget_MetaData), NewProp_GalleryContentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, StartGameButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGameButton_MetaData), NewProp_StartGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LoadGameButton = { "LoadGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, LoadGameButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGameButton_MetaData), NewProp_LoadGameButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_OptionsButton = { "OptionsButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, OptionsButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsButton_MetaData), NewProp_OptionsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_GalleryButton = { "GalleryButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, GalleryButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryButton_MetaData), NewProp_GalleryButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton = { "ExitGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, ExitGameButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitGameButton_MetaData), NewProp_ExitGameButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_MainMenuContentSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LoadGameContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LoadGameWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_OptionsContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_GalleryContentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_StartGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_LoadGameButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_OptionsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_GalleryButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ExitGameButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMainMenuWidget>()
{
	return UMainMenuWidget::StaticClass();
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// End Class UMainMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MainMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 593887498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MainMenuWidget_h_351141277(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MainMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MainMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
