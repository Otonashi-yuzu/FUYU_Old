// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseImageChoiceWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseImageChoiceWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceButton_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceWidget();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister();
// End Cross Module References

// Begin Class UBaseImageChoiceWidget Function OnImageChoiceButtonClicked
struct Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics
{
	struct BaseImageChoiceWidget_eventOnImageChoiceButtonClicked_Parms
	{
		UBaseImageChoiceButton* ClickedChoiceButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedChoiceButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedChoiceButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::NewProp_ClickedChoiceButton = { "ClickedChoiceButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseImageChoiceWidget_eventOnImageChoiceButtonClicked_Parms, ClickedChoiceButton), Z_Construct_UClass_UBaseImageChoiceButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedChoiceButton_MetaData), NewProp_ClickedChoiceButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::NewProp_ClickedChoiceButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseImageChoiceWidget, nullptr, "OnImageChoiceButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::BaseImageChoiceWidget_eventOnImageChoiceButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::BaseImageChoiceWidget_eventOnImageChoiceButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseImageChoiceWidget::execOnImageChoiceButtonClicked)
{
	P_GET_OBJECT(UBaseImageChoiceButton,Z_Param_ClickedChoiceButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnImageChoiceButtonClicked(Z_Param_ClickedChoiceButton);
	P_NATIVE_END;
}
// End Class UBaseImageChoiceWidget Function OnImageChoiceButtonClicked

// Begin Class UBaseImageChoiceWidget
void UBaseImageChoiceWidget::StaticRegisterNativesUBaseImageChoiceWidget()
{
	UClass* Class = UBaseImageChoiceWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnImageChoiceButtonClicked", &UBaseImageChoiceWidget::execOnImageChoiceButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseImageChoiceWidget);
UClass* Z_Construct_UClass_UBaseImageChoiceWidget_NoRegister()
{
	return UBaseImageChoiceWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseImageChoiceWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseImageChoiceWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButtonsList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButtonsList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseImageChoiceWidget_OnImageChoiceButtonClicked, "OnImageChoiceButtonClicked" }, // 3159121338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseImageChoiceWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseImageChoiceWidget_Statics::NewProp_ChoiceButtonsList = { "ChoiceButtonsList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseImageChoiceWidget, ChoiceButtonsList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButtonsList_MetaData), NewProp_ChoiceButtonsList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseImageChoiceWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseImageChoiceWidget_Statics::NewProp_ChoiceButtonsList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseImageChoiceWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseImageChoiceWidget_Statics::ClassParams = {
	&UBaseImageChoiceWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseImageChoiceWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseImageChoiceWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseImageChoiceWidget()
{
	if (!Z_Registration_Info_UClass_UBaseImageChoiceWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseImageChoiceWidget.OuterSingleton, Z_Construct_UClass_UBaseImageChoiceWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseImageChoiceWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseImageChoiceWidget>()
{
	return UBaseImageChoiceWidget::StaticClass();
}
UBaseImageChoiceWidget::UBaseImageChoiceWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseImageChoiceWidget);
UBaseImageChoiceWidget::~UBaseImageChoiceWidget() {}
// End Class UBaseImageChoiceWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseImageChoiceWidget, UBaseImageChoiceWidget::StaticClass, TEXT("UBaseImageChoiceWidget"), &Z_Registration_Info_UClass_UBaseImageChoiceWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseImageChoiceWidget), 1166445889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceWidget_h_2720098841(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
