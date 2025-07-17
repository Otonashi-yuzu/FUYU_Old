// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/GalleryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalleryWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UGalleryWidget();
VNM_API UClass* Z_Construct_UClass_UGalleryWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMPagingWidget_NoRegister();
// End Cross Module References

// Begin Class UGalleryWidget Function OnPageChanged
struct Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics
{
	struct GalleryWidget_eventOnPageChanged_Parms
	{
		int32 PageIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GalleryWidget_eventOnPageChanged_Parms, PageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageIndex_MetaData), NewProp_PageIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::NewProp_PageIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGalleryWidget, nullptr, "OnPageChanged", nullptr, nullptr, Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::GalleryWidget_eventOnPageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::GalleryWidget_eventOnPageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGalleryWidget_OnPageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGalleryWidget_OnPageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGalleryWidget::execOnPageChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPageChanged(Z_Param_PageIndex);
	P_NATIVE_END;
}
// End Class UGalleryWidget Function OnPageChanged

// Begin Class UGalleryWidget
void UGalleryWidget::StaticRegisterNativesUGalleryWidget()
{
	UClass* Class = UGalleryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPageChanged", &UGalleryWidget::execOnPageChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGalleryWidget);
UClass* Z_Construct_UClass_UGalleryWidget_NoRegister()
{
	return UGalleryWidget::StaticClass();
}
struct Z_Construct_UClass_UGalleryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/GalleryWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CgGroupIds_MetaData[] = {
		{ "Category", "Gallery" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GalleryCgList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Gallery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PagingWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Gallery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/GalleryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CgGroupIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CgGroupIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GalleryCgList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PagingWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGalleryWidget_OnPageChanged, "OnPageChanged" }, // 274655786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGalleryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGalleryWidget_Statics::NewProp_CgGroupIds_Inner = { "CgGroupIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGalleryWidget_Statics::NewProp_CgGroupIds = { "CgGroupIds", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryWidget, CgGroupIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CgGroupIds_MetaData), NewProp_CgGroupIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGalleryWidget_Statics::NewProp_GalleryCgList = { "GalleryCgList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryWidget, GalleryCgList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GalleryCgList_MetaData), NewProp_GalleryCgList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGalleryWidget_Statics::NewProp_PagingWidget = { "PagingWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGalleryWidget, PagingWidget), Z_Construct_UClass_UVNMPagingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PagingWidget_MetaData), NewProp_PagingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGalleryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryWidget_Statics::NewProp_CgGroupIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryWidget_Statics::NewProp_CgGroupIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryWidget_Statics::NewProp_GalleryCgList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGalleryWidget_Statics::NewProp_PagingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGalleryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGalleryWidget_Statics::ClassParams = {
	&UGalleryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGalleryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGalleryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGalleryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGalleryWidget()
{
	if (!Z_Registration_Info_UClass_UGalleryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGalleryWidget.OuterSingleton, Z_Construct_UClass_UGalleryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGalleryWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UGalleryWidget>()
{
	return UGalleryWidget::StaticClass();
}
UGalleryWidget::UGalleryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGalleryWidget);
UGalleryWidget::~UGalleryWidget() {}
// End Class UGalleryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGalleryWidget, UGalleryWidget::StaticClass, TEXT("UGalleryWidget"), &Z_Registration_Info_UClass_UGalleryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGalleryWidget), 1676698650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryWidget_h_1438568470(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_GalleryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
