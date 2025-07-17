// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/UI/MainMenu/SaveGameVisual.h"
#include "VNM/Public/SaveGame/VNMBasePersistantSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameVisual() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget();
VNM_API UClass* Z_Construct_UClass_UMenuButtonWidget_NoRegister();
VNM_API UClass* Z_Construct_UClass_USaveGameVisual();
VNM_API UClass* Z_Construct_UClass_USaveGameVisual_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameMetaData();
// End Cross Module References

// Begin Class USaveGameVisual Function OnDeleteButtonClicked
struct Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics
{
	struct SaveGameVisual_eventOnDeleteButtonClicked_Parms
	{
		UMenuButtonWidget* ClickedButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::NewProp_ClickedButton = { "ClickedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameVisual_eventOnDeleteButtonClicked_Parms, ClickedButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedButton_MetaData), NewProp_ClickedButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::NewProp_ClickedButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameVisual, nullptr, "OnDeleteButtonClicked", nullptr, nullptr, Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::SaveGameVisual_eventOnDeleteButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::SaveGameVisual_eventOnDeleteButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveGameVisual::execOnDeleteButtonClicked)
{
	P_GET_OBJECT(UMenuButtonWidget,Z_Param_ClickedButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeleteButtonClicked(Z_Param_ClickedButton);
	P_NATIVE_END;
}
// End Class USaveGameVisual Function OnDeleteButtonClicked

// Begin Class USaveGameVisual Function OnSaveGameDeleted
struct Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics
{
	struct SaveGameVisual_eventOnSaveGameDeleted_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SaveGameVisual_eventOnSaveGameDeleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveGameVisual_eventOnSaveGameDeleted_Parms), &Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSuccessful_MetaData), NewProp_bWasSuccessful_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameVisual, nullptr, "OnSaveGameDeleted", nullptr, nullptr, Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::SaveGameVisual_eventOnSaveGameDeleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::SaveGameVisual_eventOnSaveGameDeleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveGameVisual::execOnSaveGameDeleted)
{
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveGameDeleted(Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USaveGameVisual Function OnSaveGameDeleted

// Begin Class USaveGameVisual
void USaveGameVisual::StaticRegisterNativesUSaveGameVisual()
{
	UClass* Class = USaveGameVisual::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDeleteButtonClicked", &USaveGameVisual::execOnDeleteButtonClicked },
		{ "OnSaveGameDeleted", &USaveGameVisual::execOnSaveGameDeleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameVisual);
UClass* Z_Construct_UClass_USaveGameVisual_NoRegister()
{
	return USaveGameVisual::StaticClass();
}
struct Z_Construct_UClass_USaveGameVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Style" },
		{ "IncludePath", "UI/MainMenu/SaveGameVisual.h" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Save Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Save Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Save Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsForSaving_MetaData[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutoSaveSlot_MetaData[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "Public/UI/MainMenu/SaveGameVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteButton;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static void NewProp_bIsForSaving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForSaving;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
	static void NewProp_bIsAutoSaveSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutoSaveSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameVisual_OnDeleteButtonClicked, "OnDeleteButtonClicked" }, // 400086058
		{ &Z_Construct_UFunction_USaveGameVisual_OnSaveGameDeleted, "OnSaveGameDeleted" }, // 1355536275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_SaveGameImage = { "SaveGameImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameVisual, SaveGameImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameImage_MetaData), NewProp_SaveGameImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameVisual, SaveGameName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_DeleteButton = { "DeleteButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameVisual, DeleteButton), Z_Construct_UClass_UMenuButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteButton_MetaData), NewProp_DeleteButton_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameVisual, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
void Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsForSaving_SetBit(void* Obj)
{
	((USaveGameVisual*)Obj)->bIsForSaving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsForSaving = { "bIsForSaving", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveGameVisual), &Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsForSaving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsForSaving_MetaData), NewProp_bIsForSaving_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameVisual, MetaData), Z_Construct_UScriptStruct_FSaveGameMetaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) }; // 2101056009
void Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsAutoSaveSlot_SetBit(void* Obj)
{
	((USaveGameVisual*)Obj)->bIsAutoSaveSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsAutoSaveSlot = { "bIsAutoSaveSlot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveGameVisual), &Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsAutoSaveSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutoSaveSlot_MetaData), NewProp_bIsAutoSaveSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_SaveGameImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_DeleteButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsForSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameVisual_Statics::NewProp_bIsAutoSaveSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGameVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMenuButtonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameVisual_Statics::ClassParams = {
	&USaveGameVisual::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveGameVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameVisual_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameVisual()
{
	if (!Z_Registration_Info_UClass_USaveGameVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameVisual.OuterSingleton, Z_Construct_UClass_USaveGameVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameVisual.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<USaveGameVisual>()
{
	return USaveGameVisual::StaticClass();
}
USaveGameVisual::USaveGameVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameVisual);
USaveGameVisual::~USaveGameVisual() {}
// End Class USaveGameVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameVisual, USaveGameVisual::StaticClass, TEXT("USaveGameVisual"), &Z_Registration_Info_UClass_USaveGameVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameVisual), 129212643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameVisual_h_4221327440(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_UI_MainMenu_SaveGameVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
