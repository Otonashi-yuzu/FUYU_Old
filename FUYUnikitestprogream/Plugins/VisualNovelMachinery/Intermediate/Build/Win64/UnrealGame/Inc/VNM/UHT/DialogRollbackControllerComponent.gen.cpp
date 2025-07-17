// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/DialogRollbackControllerComponent.h"
#include "VNM/Public/Common/VNMDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogRollbackControllerComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UCharacter3DControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UCharacterControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogImageControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogRollbackControllerComponent();
VNM_API UClass* Z_Construct_UClass_UDialogRollbackControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UMemoryControllerComponent_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FGameSnapshot();
// End Cross Module References

// Begin Class UDialogRollbackControllerComponent Function RollbackOneSnapshot
struct Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogRollback" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogRollbackControllerComponent, nullptr, "RollbackOneSnapshot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogRollbackControllerComponent::execRollbackOneSnapshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RollbackOneSnapshot();
	P_NATIVE_END;
}
// End Class UDialogRollbackControllerComponent Function RollbackOneSnapshot

// Begin Class UDialogRollbackControllerComponent
void UDialogRollbackControllerComponent::StaticRegisterNativesUDialogRollbackControllerComponent()
{
	UClass* Class = UDialogRollbackControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RollbackOneSnapshot", &UDialogRollbackControllerComponent::execRollbackOneSnapshot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogRollbackControllerComponent);
UClass* Z_Construct_UClass_UDialogRollbackControllerComponent_NoRegister()
{
	return UDialogRollbackControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogRollbackControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DialogRollbackControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSnapshotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[] = {
		{ "Category", "DialogRollback" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogImageControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character3DControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/DialogRollbackControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSnapshotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogImageControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character3DControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogSceneControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogControllerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogRollbackControllerComponent_RollbackOneSnapshot, "RollbackOneSnapshot" }, // 1180396972
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogRollbackControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_CurrentSnapshotIndex = { "CurrentSnapshotIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, CurrentSnapshotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSnapshotIndex_MetaData), NewProp_CurrentSnapshotIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameSnapshot, METADATA_PARAMS(0, nullptr) }; // 1892054901
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshots_MetaData), NewProp_Snapshots_MetaData) }; // 1892054901
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_DialogImageControllerComponent = { "DialogImageControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, DialogImageControllerComponent), Z_Construct_UClass_UDialogImageControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogImageControllerComponent_MetaData), NewProp_DialogImageControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_CharacterControllerComponent = { "CharacterControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, CharacterControllerComponent), Z_Construct_UClass_UCharacterControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterControllerComponent_MetaData), NewProp_CharacterControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_MemoryControllerComponent = { "MemoryControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, MemoryControllerComponent), Z_Construct_UClass_UMemoryControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryControllerComponent_MetaData), NewProp_MemoryControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_Character3DControllerComponent = { "Character3DControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, Character3DControllerComponent), Z_Construct_UClass_UCharacter3DControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character3DControllerComponent_MetaData), NewProp_Character3DControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_DialogSceneControllerComponent = { "DialogSceneControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, DialogSceneControllerComponent), Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneControllerComponent_MetaData), NewProp_DialogSceneControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_DialogControllerComponent = { "DialogControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogRollbackControllerComponent, DialogControllerComponent), Z_Construct_UClass_UDialogControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogControllerComponent_MetaData), NewProp_DialogControllerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_CurrentSnapshotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_Snapshots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_Snapshots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_DialogImageControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_CharacterControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_MemoryControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_Character3DControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_DialogSceneControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::NewProp_DialogControllerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::ClassParams = {
	&UDialogRollbackControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogRollbackControllerComponent()
{
	if (!Z_Registration_Info_UClass_UDialogRollbackControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogRollbackControllerComponent.OuterSingleton, Z_Construct_UClass_UDialogRollbackControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogRollbackControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UDialogRollbackControllerComponent>()
{
	return UDialogRollbackControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogRollbackControllerComponent);
UDialogRollbackControllerComponent::~UDialogRollbackControllerComponent() {}
// End Class UDialogRollbackControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogRollbackControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogRollbackControllerComponent, UDialogRollbackControllerComponent::StaticClass, TEXT("UDialogRollbackControllerComponent"), &Z_Registration_Info_UClass_UDialogRollbackControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogRollbackControllerComponent), 902621027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogRollbackControllerComponent_h_2362232044(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogRollbackControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_DialogRollbackControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
