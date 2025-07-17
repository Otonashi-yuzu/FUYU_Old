// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/VNMBaseTextBoxPopUpWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMBaseTextBoxPopUpWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UVNMBasePopUpWidget();
VNM_API UClass* Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget();
VNM_API UClass* Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnPopUpText
struct Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics
{
	struct VNMBaseTextBoxPopUpWidget_eventOnPopUpText_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBaseTextBoxPopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMBaseTextBoxPopUpWidget_eventOnPopUpText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget, nullptr, "OnPopUpText__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::VNMBaseTextBoxPopUpWidget_eventOnPopUpText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::VNMBaseTextBoxPopUpWidget_eventOnPopUpText_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVNMBaseTextBoxPopUpWidget::FOnPopUpText_DelegateWrapper(const FMulticastScriptDelegate& OnPopUpText, const FString& Text)
{
	struct VNMBaseTextBoxPopUpWidget_eventOnPopUpText_Parms
	{
		FString Text;
	};
	VNMBaseTextBoxPopUpWidget_eventOnPopUpText_Parms Parms;
	Parms.Text=Text;
	OnPopUpText.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPopUpText

// Begin Class UVNMBaseTextBoxPopUpWidget
void UVNMBaseTextBoxPopUpWidget::StaticRegisterNativesUVNMBaseTextBoxPopUpWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMBaseTextBoxPopUpWidget);
UClass* Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_NoRegister()
{
	return UVNMBaseTextBoxPopUpWidget::StaticClass();
}
struct Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/VNMBaseTextBoxPopUpWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBaseTextBoxPopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPopUpText_MetaData[] = {
		{ "Category", "Pop Ups" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBaseTextBoxPopUpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopUpTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Pop Ups" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/VNMBaseTextBoxPopUpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPopUpText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PopUpTextBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature, "OnPopUpText__DelegateSignature" }, // 1224605817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMBaseTextBoxPopUpWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::NewProp_OnPopUpText = { "OnPopUpText", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBaseTextBoxPopUpWidget, OnPopUpText), Z_Construct_UDelegateFunction_UVNMBaseTextBoxPopUpWidget_OnPopUpText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPopUpText_MetaData), NewProp_OnPopUpText_MetaData) }; // 1224605817
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::NewProp_PopUpTextBox = { "PopUpTextBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMBaseTextBoxPopUpWidget, PopUpTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopUpTextBox_MetaData), NewProp_PopUpTextBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::NewProp_OnPopUpText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::NewProp_PopUpTextBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVNMBasePopUpWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::ClassParams = {
	&UVNMBaseTextBoxPopUpWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget()
{
	if (!Z_Registration_Info_UClass_UVNMBaseTextBoxPopUpWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMBaseTextBoxPopUpWidget.OuterSingleton, Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMBaseTextBoxPopUpWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMBaseTextBoxPopUpWidget>()
{
	return UVNMBaseTextBoxPopUpWidget::StaticClass();
}
UVNMBaseTextBoxPopUpWidget::UVNMBaseTextBoxPopUpWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMBaseTextBoxPopUpWidget);
UVNMBaseTextBoxPopUpWidget::~UVNMBaseTextBoxPopUpWidget() {}
// End Class UVNMBaseTextBoxPopUpWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBaseTextBoxPopUpWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMBaseTextBoxPopUpWidget, UVNMBaseTextBoxPopUpWidget::StaticClass, TEXT("UVNMBaseTextBoxPopUpWidget"), &Z_Registration_Info_UClass_UVNMBaseTextBoxPopUpWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMBaseTextBoxPopUpWidget), 4048277719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBaseTextBoxPopUpWidget_h_725603342(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBaseTextBoxPopUpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_VNMBaseTextBoxPopUpWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
