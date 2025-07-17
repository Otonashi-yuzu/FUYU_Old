// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/SaveGameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_USaveGameWidget();
VNM_API UClass* Z_Construct_UClass_USaveGameWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_UVNMPagingWidget_NoRegister();
VNM_API UFunction* Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnSaveGameSelected
struct Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameWidget, nullptr, "OnSaveGameSelected__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USaveGameWidget::FOnSaveGameSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGameSelected)
{
	OnSaveGameSelected.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSaveGameSelected

// Begin Class USaveGameWidget Function OnPageChanged
struct Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics
{
	struct SaveGameWidget_eventOnPageChanged_Parms
	{
		int32 PageIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameWidget_eventOnPageChanged_Parms, PageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageIndex_MetaData), NewProp_PageIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::NewProp_PageIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameWidget, nullptr, "OnPageChanged", nullptr, nullptr, Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::SaveGameWidget_eventOnPageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::SaveGameWidget_eventOnPageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameWidget_OnPageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameWidget_OnPageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveGameWidget::execOnPageChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPageChanged(Z_Param_PageIndex);
	P_NATIVE_END;
}
// End Class USaveGameWidget Function OnPageChanged

// Begin Class USaveGameWidget Function OnSaveGameClicked
struct Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics
{
	struct SaveGameWidget_eventOnSaveGameClicked_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameWidget_eventOnSaveGameClicked_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameWidget, nullptr, "OnSaveGameClicked", nullptr, nullptr, Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::SaveGameWidget_eventOnSaveGameClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::SaveGameWidget_eventOnSaveGameClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveGameWidget::execOnSaveGameClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveGameClicked(Z_Param_ClickedButton);
	P_NATIVE_END;
}
// End Class USaveGameWidget Function OnSaveGameClicked

// Begin Class USaveGameWidget
void USaveGameWidget::StaticRegisterNativesUSaveGameWidget()
{
	UClass* Class = USaveGameWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPageChanged", &USaveGameWidget::execOnPageChanged },
		{ "OnSaveGameClicked", &USaveGameWidget::execOnSaveGameClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameWidget);
UClass* Z_Construct_UClass_USaveGameWidget_NoRegister()
{
	return USaveGameWidget::StaticClass();
}
struct Z_Construct_UClass_USaveGameWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/SaveGameWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveGameSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Save Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PagingWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Save Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGameSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PagingWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameWidget_OnPageChanged, "OnPageChanged" }, // 1191443213
		{ &Z_Construct_UFunction_USaveGameWidget_OnSaveGameClicked, "OnSaveGameClicked" }, // 3555676229
		{ &Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature, "OnSaveGameSelected__DelegateSignature" }, // 1826984679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveGameWidget_Statics::NewProp_OnSaveGameSelected = { "OnSaveGameSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameWidget, OnSaveGameSelected), Z_Construct_UDelegateFunction_USaveGameWidget_OnSaveGameSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveGameSelected_MetaData), NewProp_OnSaveGameSelected_MetaData) }; // 1826984679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameWidget_Statics::NewProp_SaveGameList = { "SaveGameList", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameWidget, SaveGameList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameList_MetaData), NewProp_SaveGameList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameWidget_Statics::NewProp_PagingWidget = { "PagingWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameWidget, PagingWidget), Z_Construct_UClass_UVNMPagingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PagingWidget_MetaData), NewProp_PagingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameWidget_Statics::NewProp_OnSaveGameSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameWidget_Statics::NewProp_SaveGameList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameWidget_Statics::NewProp_PagingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGameWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameWidget_Statics::ClassParams = {
	&USaveGameWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveGameWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameWidget()
{
	if (!Z_Registration_Info_UClass_USaveGameWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameWidget.OuterSingleton, Z_Construct_UClass_USaveGameWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<USaveGameWidget>()
{
	return USaveGameWidget::StaticClass();
}
USaveGameWidget::USaveGameWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameWidget);
USaveGameWidget::~USaveGameWidget() {}
// End Class USaveGameWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameWidget, USaveGameWidget::StaticClass, TEXT("USaveGameWidget"), &Z_Registration_Info_UClass_USaveGameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameWidget), 1772108781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameWidget_h_414696685(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
