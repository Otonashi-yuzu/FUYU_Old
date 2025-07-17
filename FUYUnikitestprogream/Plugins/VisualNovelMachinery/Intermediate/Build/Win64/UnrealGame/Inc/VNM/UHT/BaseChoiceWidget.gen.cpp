// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseChoiceWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseChoiceWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseChoiceButton_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseChoiceWidget();
VNM_API UClass* Z_Construct_UClass_UBaseChoiceWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseVNMWidget();
// End Cross Module References

// Begin Class UBaseChoiceWidget Function OnChoiceButtonAdded
struct BaseChoiceWidget_eventOnChoiceButtonAdded_Parms
{
	UBaseChoiceButton* Button;
};
static FName NAME_UBaseChoiceWidget_OnChoiceButtonAdded = FName(TEXT("OnChoiceButtonAdded"));
void UBaseChoiceWidget::OnChoiceButtonAdded(UBaseChoiceButton* Button)
{
	BaseChoiceWidget_eventOnChoiceButtonAdded_Parms Parms;
	Parms.Button=Button;
	ProcessEvent(FindFunctionChecked(NAME_UBaseChoiceWidget_OnChoiceButtonAdded),&Parms);
}
struct Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChoiceWidget_eventOnChoiceButtonAdded_Parms, Button), Z_Construct_UClass_UBaseChoiceButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseChoiceWidget, nullptr, "OnChoiceButtonAdded", nullptr, nullptr, Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::PropPointers), sizeof(BaseChoiceWidget_eventOnChoiceButtonAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseChoiceWidget_eventOnChoiceButtonAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseChoiceWidget Function OnChoiceButtonAdded

// Begin Class UBaseChoiceWidget Function OnChoiceButtonClicked
struct Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics
{
	struct BaseChoiceWidget_eventOnChoiceButtonClicked_Parms
	{
		UBaseChoiceButton* ClickedChoiceButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedChoiceButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedChoiceButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::NewProp_ClickedChoiceButton = { "ClickedChoiceButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChoiceWidget_eventOnChoiceButtonClicked_Parms, ClickedChoiceButton), Z_Construct_UClass_UBaseChoiceButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedChoiceButton_MetaData), NewProp_ClickedChoiceButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::NewProp_ClickedChoiceButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseChoiceWidget, nullptr, "OnChoiceButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::BaseChoiceWidget_eventOnChoiceButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::BaseChoiceWidget_eventOnChoiceButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseChoiceWidget::execOnChoiceButtonClicked)
{
	P_GET_OBJECT(UBaseChoiceButton,Z_Param_ClickedChoiceButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChoiceButtonClicked(Z_Param_ClickedChoiceButton);
	P_NATIVE_END;
}
// End Class UBaseChoiceWidget Function OnChoiceButtonClicked

// Begin Class UBaseChoiceWidget
void UBaseChoiceWidget::StaticRegisterNativesUBaseChoiceWidget()
{
	UClass* Class = UBaseChoiceWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChoiceButtonClicked", &UBaseChoiceWidget::execOnChoiceButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseChoiceWidget);
UClass* Z_Construct_UClass_UBaseChoiceWidget_NoRegister()
{
	return UBaseChoiceWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseChoiceWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseChoiceWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButtonClass_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButtonsList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChoiceButtonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButtonsList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonAdded, "OnChoiceButtonAdded" }, // 1791214344
		{ &Z_Construct_UFunction_UBaseChoiceWidget_OnChoiceButtonClicked, "OnChoiceButtonClicked" }, // 1820481502
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseChoiceWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseChoiceWidget_Statics::NewProp_ChoiceButtonClass = { "ChoiceButtonClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseChoiceWidget, ChoiceButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseChoiceButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButtonClass_MetaData), NewProp_ChoiceButtonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseChoiceWidget_Statics::NewProp_ChoiceButtonsList = { "ChoiceButtonsList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseChoiceWidget, ChoiceButtonsList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButtonsList_MetaData), NewProp_ChoiceButtonsList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseChoiceWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseChoiceWidget_Statics::NewProp_ChoiceButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseChoiceWidget_Statics::NewProp_ChoiceButtonsList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseChoiceWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVNMWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseChoiceWidget_Statics::ClassParams = {
	&UBaseChoiceWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseChoiceWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseChoiceWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseChoiceWidget()
{
	if (!Z_Registration_Info_UClass_UBaseChoiceWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseChoiceWidget.OuterSingleton, Z_Construct_UClass_UBaseChoiceWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseChoiceWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseChoiceWidget>()
{
	return UBaseChoiceWidget::StaticClass();
}
UBaseChoiceWidget::UBaseChoiceWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseChoiceWidget);
UBaseChoiceWidget::~UBaseChoiceWidget() {}
// End Class UBaseChoiceWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseChoiceWidget, UBaseChoiceWidget::StaticClass, TEXT("UBaseChoiceWidget"), &Z_Registration_Info_UClass_UBaseChoiceWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseChoiceWidget), 88386121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceWidget_h_3381739609(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
