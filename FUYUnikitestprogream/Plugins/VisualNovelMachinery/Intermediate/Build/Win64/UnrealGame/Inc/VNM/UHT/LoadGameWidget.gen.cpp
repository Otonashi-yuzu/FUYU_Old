// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/LoadGameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadGameWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_ULoadGameWidget();
VNM_API UClass* Z_Construct_UClass_ULoadGameWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMPagingWidget_NoRegister();
// End Cross Module References

// Begin Class ULoadGameWidget Function OnPageChanged
struct Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics
{
	struct LoadGameWidget_eventOnPageChanged_Parms
	{
		int32 PageIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/LoadGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadGameWidget_eventOnPageChanged_Parms, PageIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::NewProp_PageIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGameWidget, nullptr, "OnPageChanged", nullptr, nullptr, Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::LoadGameWidget_eventOnPageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::LoadGameWidget_eventOnPageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadGameWidget_OnPageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadGameWidget_OnPageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadGameWidget::execOnPageChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPageChanged(Z_Param_PageIndex);
	P_NATIVE_END;
}
// End Class ULoadGameWidget Function OnPageChanged

// Begin Class ULoadGameWidget
void ULoadGameWidget::StaticRegisterNativesULoadGameWidget()
{
	UClass* Class = ULoadGameWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPageChanged", &ULoadGameWidget::execOnPageChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadGameWidget);
UClass* Z_Construct_UClass_ULoadGameWidget_NoRegister()
{
	return ULoadGameWidget::StaticClass();
}
struct Z_Construct_UClass_ULoadGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/LoadGameWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/LoadGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Load Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/LoadGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PagingWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Load Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/LoadGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PagingWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadGameWidget_OnPageChanged, "OnPageChanged" }, // 2029190691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadGameWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadGameWidget_Statics::NewProp_SaveGameList = { "SaveGameList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadGameWidget, SaveGameList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameList_MetaData), NewProp_SaveGameList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadGameWidget_Statics::NewProp_PagingWidget = { "PagingWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadGameWidget, PagingWidget), Z_Construct_UClass_UVNMPagingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PagingWidget_MetaData), NewProp_PagingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadGameWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGameWidget_Statics::NewProp_SaveGameList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGameWidget_Statics::NewProp_PagingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGameWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadGameWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGameWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadGameWidget_Statics::ClassParams = {
	&ULoadGameWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadGameWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGameWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGameWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadGameWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadGameWidget()
{
	if (!Z_Registration_Info_UClass_ULoadGameWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadGameWidget.OuterSingleton, Z_Construct_UClass_ULoadGameWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadGameWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<ULoadGameWidget>()
{
	return ULoadGameWidget::StaticClass();
}
ULoadGameWidget::ULoadGameWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadGameWidget);
ULoadGameWidget::~ULoadGameWidget() {}
// End Class ULoadGameWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_LoadGameWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadGameWidget, ULoadGameWidget::StaticClass, TEXT("ULoadGameWidget"), &Z_Registration_Info_UClass_ULoadGameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadGameWidget), 1918626037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_LoadGameWidget_h_2849222524(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_LoadGameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_LoadGameWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
