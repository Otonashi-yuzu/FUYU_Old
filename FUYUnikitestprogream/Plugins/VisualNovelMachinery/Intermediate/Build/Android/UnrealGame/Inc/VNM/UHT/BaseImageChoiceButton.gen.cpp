// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseImageChoiceButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseImageChoiceButton() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceButton();
VNM_API UClass* Z_Construct_UClass_UBaseImageChoiceButton_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMenuIconButtonWidget();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnChoiceButtonClicked
struct Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics
{
	struct BaseImageChoiceButton_eventOnChoiceButtonClicked_Parms
	{
		UBaseImageChoiceButton* ClickedChoiceButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedChoiceButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedChoiceButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::NewProp_ClickedChoiceButton = { "ClickedChoiceButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseImageChoiceButton_eventOnChoiceButtonClicked_Parms, ClickedChoiceButton), Z_Construct_UClass_UBaseImageChoiceButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedChoiceButton_MetaData), NewProp_ClickedChoiceButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::NewProp_ClickedChoiceButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseImageChoiceButton, nullptr, "OnChoiceButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::BaseImageChoiceButton_eventOnChoiceButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::BaseImageChoiceButton_eventOnChoiceButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseImageChoiceButton::FOnChoiceButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnChoiceButtonClicked, UBaseImageChoiceButton* ClickedChoiceButton)
{
	struct BaseImageChoiceButton_eventOnChoiceButtonClicked_Parms
	{
		UBaseImageChoiceButton* ClickedChoiceButton;
	};
	BaseImageChoiceButton_eventOnChoiceButtonClicked_Parms Parms;
	Parms.ClickedChoiceButton=ClickedChoiceButton;
	OnChoiceButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChoiceButtonClicked

// Begin Class UBaseImageChoiceButton
void UBaseImageChoiceButton::StaticRegisterNativesUBaseImageChoiceButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseImageChoiceButton);
UClass* Z_Construct_UClass_UBaseImageChoiceButton_NoRegister()
{
	return UBaseImageChoiceButton::StaticClass();
}
struct Z_Construct_UClass_UBaseImageChoiceButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseImageChoiceButton.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChoiceButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceText_MetaData[] = {
		{ "Category", "Functionality" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseImageChoiceButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChoiceButtonClicked;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ChoiceText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature, "OnChoiceButtonClicked__DelegateSignature" }, // 137887762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseImageChoiceButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseImageChoiceButton_Statics::NewProp_OnChoiceButtonClicked = { "OnChoiceButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseImageChoiceButton, OnChoiceButtonClicked), Z_Construct_UDelegateFunction_UBaseImageChoiceButton_OnChoiceButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChoiceButtonClicked_MetaData), NewProp_OnChoiceButtonClicked_MetaData) }; // 137887762
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBaseImageChoiceButton_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseImageChoiceButton, ChoiceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceText_MetaData), NewProp_ChoiceText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseImageChoiceButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseImageChoiceButton_Statics::NewProp_OnChoiceButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseImageChoiceButton_Statics::NewProp_ChoiceText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseImageChoiceButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenuIconButtonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseImageChoiceButton_Statics::ClassParams = {
	&UBaseImageChoiceButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseImageChoiceButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseImageChoiceButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseImageChoiceButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseImageChoiceButton()
{
	if (!Z_Registration_Info_UClass_UBaseImageChoiceButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseImageChoiceButton.OuterSingleton, Z_Construct_UClass_UBaseImageChoiceButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseImageChoiceButton.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseImageChoiceButton>()
{
	return UBaseImageChoiceButton::StaticClass();
}
UBaseImageChoiceButton::UBaseImageChoiceButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseImageChoiceButton);
UBaseImageChoiceButton::~UBaseImageChoiceButton() {}
// End Class UBaseImageChoiceButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseImageChoiceButton, UBaseImageChoiceButton::StaticClass, TEXT("UBaseImageChoiceButton"), &Z_Registration_Info_UClass_UBaseImageChoiceButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseImageChoiceButton), 1800198641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceButton_h_1032286418(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseImageChoiceButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
