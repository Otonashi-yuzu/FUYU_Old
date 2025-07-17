// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/VNMPagingWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNMPagingWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMPagingWidget();
VNM_API UClass* Z_Construct_UClass_UVNMPagingWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnPageChanged
struct Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics
{
	struct VNMPagingWidget_eventOnPageChanged_Parms
	{
		int32 PageIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMPagingWidget_eventOnPageChanged_Parms, PageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageIndex_MetaData), NewProp_PageIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::NewProp_PageIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMPagingWidget, nullptr, "OnPageChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::VNMPagingWidget_eventOnPageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::VNMPagingWidget_eventOnPageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVNMPagingWidget::FOnPageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPageChanged, const int32 PageIndex)
{
	struct VNMPagingWidget_eventOnPageChanged_Parms
	{
		int32 PageIndex;
	};
	VNMPagingWidget_eventOnPageChanged_Parms Parms;
	Parms.PageIndex=PageIndex;
	OnPageChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPageChanged

// Begin Class UVNMPagingWidget Function OnNextPageButtonClicked
struct Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics
{
	struct VNMPagingWidget_eventOnNextPageButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMPagingWidget_eventOnNextPageButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMPagingWidget, nullptr, "OnNextPageButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::VNMPagingWidget_eventOnNextPageButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::VNMPagingWidget_eventOnNextPageButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMPagingWidget::execOnNextPageButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextPageButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UVNMPagingWidget Function OnNextPageButtonClicked

// Begin Class UVNMPagingWidget Function OnPreviousPageButtonClicked
struct Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics
{
	struct VNMPagingWidget_eventOnPreviousPageButtonClicked_Parms
	{
		UMenuButtonWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VNMPagingWidget_eventOnPreviousPageButtonClicked_Parms, Button), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVNMPagingWidget, nullptr, "OnPreviousPageButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::VNMPagingWidget_eventOnPreviousPageButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::VNMPagingWidget_eventOnPreviousPageButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVNMPagingWidget::execOnPreviousPageButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreviousPageButtonClicked(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UVNMPagingWidget Function OnPreviousPageButtonClicked

// Begin Class UVNMPagingWidget
void UVNMPagingWidget::StaticRegisterNativesUVNMPagingWidget()
{
	UClass* Class = UVNMPagingWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnNextPageButtonClicked", &UVNMPagingWidget::execOnNextPageButtonClicked },
		{ "OnPreviousPageButtonClicked", &UVNMPagingWidget::execOnPreviousPageButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVNMPagingWidget);
UClass* Z_Construct_UClass_UVNMPagingWidget_NoRegister()
{
	return UVNMPagingWidget::StaticClass();
}
struct Z_Construct_UClass_UVNMPagingWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/VNMPagingWidget.h" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPages_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageIconTexture_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPageIndex_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageIconList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Paging" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPageButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Paging" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextPageButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Paging" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VNMPagingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPageChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PageIconTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPageIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PageIconList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousPageButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextPageButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVNMPagingWidget_OnNextPageButtonClicked, "OnNextPageButtonClicked" }, // 688436032
		{ &Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature, "OnPageChanged__DelegateSignature" }, // 236319388
		{ &Z_Construct_UFunction_UVNMPagingWidget_OnPreviousPageButtonClicked, "OnPreviousPageButtonClicked" }, // 925185176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVNMPagingWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_OnPageChanged = { "OnPageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, OnPageChanged), Z_Construct_UDelegateFunction_UVNMPagingWidget_OnPageChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPageChanged_MetaData), NewProp_OnPageChanged_MetaData) }; // 236319388
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_NumPages = { "NumPages", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, NumPages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPages_MetaData), NewProp_NumPages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_PageIconTexture = { "PageIconTexture", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, PageIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageIconTexture_MetaData), NewProp_PageIconTexture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_CurrentPageIndex = { "CurrentPageIndex", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, CurrentPageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPageIndex_MetaData), NewProp_CurrentPageIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_PageIconList = { "PageIconList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, PageIconList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageIconList_MetaData), NewProp_PageIconList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_PreviousPageButton = { "PreviousPageButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, PreviousPageButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousPageButton_MetaData), NewProp_PreviousPageButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_NextPageButton = { "NextPageButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVNMPagingWidget, NextPageButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextPageButton_MetaData), NewProp_NextPageButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVNMPagingWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_OnPageChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_NumPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_PageIconTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_CurrentPageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_PageIconList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_PreviousPageButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVNMPagingWidget_Statics::NewProp_NextPageButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMPagingWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVNMPagingWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMPagingWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVNMPagingWidget_Statics::ClassParams = {
	&UVNMPagingWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVNMPagingWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVNMPagingWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVNMPagingWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVNMPagingWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVNMPagingWidget()
{
	if (!Z_Registration_Info_UClass_UVNMPagingWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVNMPagingWidget.OuterSingleton, Z_Construct_UClass_UVNMPagingWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVNMPagingWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UVNMPagingWidget>()
{
	return UVNMPagingWidget::StaticClass();
}
UVNMPagingWidget::UVNMPagingWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVNMPagingWidget);
UVNMPagingWidget::~UVNMPagingWidget() {}
// End Class UVNMPagingWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMPagingWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVNMPagingWidget, UVNMPagingWidget::StaticClass, TEXT("UVNMPagingWidget"), &Z_Registration_Info_UClass_UVNMPagingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVNMPagingWidget), 259768620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMPagingWidget_h_4044717940(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMPagingWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_VNMPagingWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
