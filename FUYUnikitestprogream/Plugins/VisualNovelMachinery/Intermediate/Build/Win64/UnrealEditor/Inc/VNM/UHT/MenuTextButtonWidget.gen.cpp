// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/MenuTextButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuTextButtonWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuTextButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuTextButtonWidget_NoRegister();
// End Cross Module References

// Begin Class UMenuTextButtonWidget Function OverrideButtonText
struct Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics
{
	struct MenuTextButtonWidget_eventOverrideButtonText_Parms
	{
		FText NewText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Text Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuTextButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuTextButtonWidget_eventOverrideButtonText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::NewProp_NewText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuTextButtonWidget, nullptr, "OverrideButtonText", nullptr, nullptr, Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::MenuTextButtonWidget_eventOverrideButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::MenuTextButtonWidget_eventOverrideButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuTextButtonWidget::execOverrideButtonText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideButtonText(Z_Param_Out_NewText);
	P_NATIVE_END;
}
// End Class UMenuTextButtonWidget Function OverrideButtonText

// Begin Class UMenuTextButtonWidget
void UMenuTextButtonWidget::StaticRegisterNativesUMenuTextButtonWidget()
{
	UClass* Class = UMenuTextButtonWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverrideButtonText", &UMenuTextButtonWidget::execOverrideButtonText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuTextButtonWidget);
UClass* Z_Construct_UClass_UMenuTextButtonWidget_NoRegister()
{
	return UMenuTextButtonWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuTextButtonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MainMenu/MenuTextButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuTextButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Text Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuTextButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Menu Text Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuTextButtonWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonDefaultText_MetaData[] = {
		{ "Category", "Menu Text Button" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/MenuTextButtonWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDefaultText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuTextButtonWidget_OverrideButtonText, "OverrideButtonText" }, // 128177916
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuTextButtonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuTextButtonWidget_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuTextButtonWidget, BackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuTextButtonWidget_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuTextButtonWidget, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMenuTextButtonWidget_Statics::NewProp_ButtonDefaultText = { "ButtonDefaultText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuTextButtonWidget, ButtonDefaultText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDefaultText_MetaData), NewProp_ButtonDefaultText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuTextButtonWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuTextButtonWidget_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuTextButtonWidget_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuTextButtonWidget_Statics::NewProp_ButtonDefaultText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuTextButtonWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuTextButtonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenuButtonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuTextButtonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuTextButtonWidget_Statics::ClassParams = {
	&UMenuTextButtonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuTextButtonWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuTextButtonWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuTextButtonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuTextButtonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuTextButtonWidget()
{
	if (!Z_Registration_Info_UClass_UMenuTextButtonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuTextButtonWidget.OuterSingleton, Z_Construct_UClass_UMenuTextButtonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuTextButtonWidget.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UMenuTextButtonWidget>()
{
	return UMenuTextButtonWidget::StaticClass();
}
UMenuTextButtonWidget::UMenuTextButtonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuTextButtonWidget);
UMenuTextButtonWidget::~UMenuTextButtonWidget() {}
// End Class UMenuTextButtonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuTextButtonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuTextButtonWidget, UMenuTextButtonWidget::StaticClass, TEXT("UMenuTextButtonWidget"), &Z_Registration_Info_UClass_UMenuTextButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuTextButtonWidget), 1374003297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuTextButtonWidget_h_3716579678(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuTextButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_MenuTextButtonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
