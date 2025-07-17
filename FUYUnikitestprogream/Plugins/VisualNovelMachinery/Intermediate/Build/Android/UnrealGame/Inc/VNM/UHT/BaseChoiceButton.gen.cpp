// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/InGame/BaseChoiceButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseChoiceButton() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseChoiceButton();
VNM_API UClass* Z_Construct_UClass_UBaseChoiceButton_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnChoiceButtonClicked
struct Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics
{
	struct BaseChoiceButton_eventOnChoiceButtonClicked_Parms
	{
		UBaseChoiceButton* ClickedChoiceButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedChoiceButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedChoiceButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::NewProp_ClickedChoiceButton = { "ClickedChoiceButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChoiceButton_eventOnChoiceButtonClicked_Parms, ClickedChoiceButton), Z_Construct_UClass_UBaseChoiceButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedChoiceButton_MetaData), NewProp_ClickedChoiceButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::NewProp_ClickedChoiceButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseChoiceButton, nullptr, "OnChoiceButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::BaseChoiceButton_eventOnChoiceButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::BaseChoiceButton_eventOnChoiceButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseChoiceButton::FOnChoiceButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnChoiceButtonClicked, UBaseChoiceButton* ClickedChoiceButton)
{
	struct BaseChoiceButton_eventOnChoiceButtonClicked_Parms
	{
		UBaseChoiceButton* ClickedChoiceButton;
	};
	BaseChoiceButton_eventOnChoiceButtonClicked_Parms Parms;
	Parms.ClickedChoiceButton=ClickedChoiceButton;
	OnChoiceButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChoiceButtonClicked

// Begin Class UBaseChoiceButton Function OnButtonClicked
struct Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseChoiceButton, nullptr, "OnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseChoiceButton::execOnButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClicked();
	P_NATIVE_END;
}
// End Class UBaseChoiceButton Function OnButtonClicked

// Begin Class UBaseChoiceButton
void UBaseChoiceButton::StaticRegisterNativesUBaseChoiceButton()
{
	UClass* Class = UBaseChoiceButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonClicked", &UBaseChoiceButton::execOnButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseChoiceButton);
UClass* Z_Construct_UClass_UBaseChoiceButton_NoRegister()
{
	return UBaseChoiceButton::StaticClass();
}
struct Z_Construct_UClass_UBaseChoiceButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InGame/BaseChoiceButton.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChoiceButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalChoiceText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/InGame/BaseChoiceButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChoiceButtonClicked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButton;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OriginalChoiceText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseChoiceButton_OnButtonClicked, "OnButtonClicked" }, // 2268685556
		{ &Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature, "OnChoiceButtonClicked__DelegateSignature" }, // 650928357
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseChoiceButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_OnChoiceButtonClicked = { "OnChoiceButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseChoiceButton, OnChoiceButtonClicked), Z_Construct_UDelegateFunction_UBaseChoiceButton_OnChoiceButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChoiceButtonClicked_MetaData), NewProp_OnChoiceButtonClicked_MetaData) }; // 650928357
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseChoiceButton, ChoiceText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceText_MetaData), NewProp_ChoiceText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_ChoiceButton = { "ChoiceButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseChoiceButton, ChoiceButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButton_MetaData), NewProp_ChoiceButton_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_OriginalChoiceText = { "OriginalChoiceText", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseChoiceButton, OriginalChoiceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalChoiceText_MetaData), NewProp_OriginalChoiceText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseChoiceButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_OnChoiceButtonClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_ChoiceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_ChoiceButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseChoiceButton_Statics::NewProp_OriginalChoiceText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseChoiceButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseChoiceButton_Statics::ClassParams = {
	&UBaseChoiceButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseChoiceButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceButton_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseChoiceButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseChoiceButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseChoiceButton()
{
	if (!Z_Registration_Info_UClass_UBaseChoiceButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseChoiceButton.OuterSingleton, Z_Construct_UClass_UBaseChoiceButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseChoiceButton.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UBaseChoiceButton>()
{
	return UBaseChoiceButton::StaticClass();
}
UBaseChoiceButton::UBaseChoiceButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseChoiceButton);
UBaseChoiceButton::~UBaseChoiceButton() {}
// End Class UBaseChoiceButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseChoiceButton, UBaseChoiceButton::StaticClass, TEXT("UBaseChoiceButton"), &Z_Registration_Info_UClass_UBaseChoiceButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseChoiceButton), 2959062156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_3450790703(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_InGame_BaseChoiceButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
