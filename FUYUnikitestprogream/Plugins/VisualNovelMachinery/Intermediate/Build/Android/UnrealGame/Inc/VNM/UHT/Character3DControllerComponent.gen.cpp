// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VNM/Public/Component/Character3DControllerComponent.h"
#include "VNM/Public/Common/VNMDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter3DControllerComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VNM();
VNM_API UClass* Z_Construct_UClass_AVNMCharacterSpawnLocation_NoRegister();
VNM_API UClass* Z_Construct_UClass_UBaseControllerComponent();
VNM_API UClass* Z_Construct_UClass_UCharacter3DControllerComponent();
VNM_API UClass* Z_Construct_UClass_UCharacter3DControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogObject_NoRegister();
VNM_API UClass* Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister();
VNM_API UClass* Z_Construct_UClass_UGameSaveSubsystem_NoRegister();
VNM_API UScriptStruct* Z_Construct_UScriptStruct_FGameSnapshot();
// End Cross Module References

// Begin Class UCharacter3DControllerComponent Function OnDialogEnded
struct Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics
{
	struct Character3DControllerComponent_eventOnDialogEnded_Parms
	{
		UDialogObject* EndedDialogObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedDialogObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::NewProp_EndedDialogObject = { "EndedDialogObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Character3DControllerComponent_eventOnDialogEnded_Parms, EndedDialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::NewProp_EndedDialogObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacter3DControllerComponent, nullptr, "OnDialogEnded", nullptr, nullptr, Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::Character3DControllerComponent_eventOnDialogEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::Character3DControllerComponent_eventOnDialogEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacter3DControllerComponent::execOnDialogEnded)
{
	P_GET_OBJECT(UDialogObject,Z_Param_EndedDialogObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogEnded(Z_Param_EndedDialogObject);
	P_NATIVE_END;
}
// End Class UCharacter3DControllerComponent Function OnDialogEnded

// Begin Class UCharacter3DControllerComponent Function OnDialogSceneChanged
struct Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics
{
	struct Character3DControllerComponent_eventOnDialogSceneChanged_Parms
	{
		FName DialogSceneId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogSceneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::NewProp_DialogSceneId = { "DialogSceneId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Character3DControllerComponent_eventOnDialogSceneChanged_Parms, DialogSceneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneId_MetaData), NewProp_DialogSceneId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::NewProp_DialogSceneId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacter3DControllerComponent, nullptr, "OnDialogSceneChanged", nullptr, nullptr, Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::Character3DControllerComponent_eventOnDialogSceneChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::Character3DControllerComponent_eventOnDialogSceneChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacter3DControllerComponent::execOnDialogSceneChanged)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DialogSceneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogSceneChanged(Z_Param_Out_DialogSceneId);
	P_NATIVE_END;
}
// End Class UCharacter3DControllerComponent Function OnDialogSceneChanged

// Begin Class UCharacter3DControllerComponent Function OnDialogStarted
struct Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics
{
	struct Character3DControllerComponent_eventOnDialogStarted_Parms
	{
		UDialogObject* StartedDialogObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartedDialogObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::NewProp_StartedDialogObject = { "StartedDialogObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Character3DControllerComponent_eventOnDialogStarted_Parms, StartedDialogObject), Z_Construct_UClass_UDialogObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::NewProp_StartedDialogObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacter3DControllerComponent, nullptr, "OnDialogStarted", nullptr, nullptr, Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::Character3DControllerComponent_eventOnDialogStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::Character3DControllerComponent_eventOnDialogStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacter3DControllerComponent::execOnDialogStarted)
{
	P_GET_OBJECT(UDialogObject,Z_Param_StartedDialogObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogStarted(Z_Param_StartedDialogObject);
	P_NATIVE_END;
}
// End Class UCharacter3DControllerComponent Function OnDialogStarted

// Begin Class UCharacter3DControllerComponent
void UCharacter3DControllerComponent::StaticRegisterNativesUCharacter3DControllerComponent()
{
	UClass* Class = UCharacter3DControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDialogEnded", &UCharacter3DControllerComponent::execOnDialogEnded },
		{ "OnDialogSceneChanged", &UCharacter3DControllerComponent::execOnDialogSceneChanged },
		{ "OnDialogStarted", &UCharacter3DControllerComponent::execOnDialogStarted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacter3DControllerComponent);
UClass* Z_Construct_UClass_UCharacter3DControllerComponent_NoRegister()
{
	return UCharacter3DControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacter3DControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/Character3DControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogSceneControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSpawnLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersAtLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameSubsystem_MetaData[] = {
		{ "Comment", "// Character Id to Spawn Location\n" },
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
		{ "ToolTip", "Character Id to Spawn Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreCharactersAfterLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotToApply_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/Character3DControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogSceneControllerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSpawnLocations_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterSpawnLocations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterSpawnLocations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharactersAtLocation_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharactersAtLocation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharactersAtLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameSubsystem;
	static void NewProp_bRestoreCharactersAfterLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreCharactersAfterLoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotToApply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogEnded, "OnDialogEnded" }, // 2243735583
		{ &Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogSceneChanged, "OnDialogSceneChanged" }, // 1098456741
		{ &Z_Construct_UFunction_UCharacter3DControllerComponent_OnDialogStarted, "OnDialogStarted" }, // 1216549958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacter3DControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_DialogControllerComponent = { "DialogControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DControllerComponent, DialogControllerComponent), Z_Construct_UClass_UDialogControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogControllerComponent_MetaData), NewProp_DialogControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_DialogSceneControllerComponent = { "DialogSceneControllerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DControllerComponent, DialogSceneControllerComponent), Z_Construct_UClass_UDialogSceneControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogSceneControllerComponent_MetaData), NewProp_DialogSceneControllerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharacterSpawnLocations_ValueProp = { "CharacterSpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AVNMCharacterSpawnLocation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharacterSpawnLocations_Key_KeyProp = { "CharacterSpawnLocations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharacterSpawnLocations = { "CharacterSpawnLocations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DControllerComponent, CharacterSpawnLocations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSpawnLocations_MetaData), NewProp_CharacterSpawnLocations_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharactersAtLocation_ValueProp = { "CharactersAtLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharactersAtLocation_Key_KeyProp = { "CharactersAtLocation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharactersAtLocation = { "CharactersAtLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DControllerComponent, CharactersAtLocation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersAtLocation_MetaData), NewProp_CharactersAtLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_SaveGameSubsystem = { "SaveGameSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DControllerComponent, SaveGameSubsystem), Z_Construct_UClass_UGameSaveSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameSubsystem_MetaData), NewProp_SaveGameSubsystem_MetaData) };
void Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_bRestoreCharactersAfterLoad_SetBit(void* Obj)
{
	((UCharacter3DControllerComponent*)Obj)->bRestoreCharactersAfterLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_bRestoreCharactersAfterLoad = { "bRestoreCharactersAfterLoad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacter3DControllerComponent), &Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_bRestoreCharactersAfterLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreCharactersAfterLoad_MetaData), NewProp_bRestoreCharactersAfterLoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_SnapshotToApply = { "SnapshotToApply", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacter3DControllerComponent, SnapshotToApply), Z_Construct_UScriptStruct_FGameSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotToApply_MetaData), NewProp_SnapshotToApply_MetaData) }; // 1892054901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacter3DControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_DialogControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_DialogSceneControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharacterSpawnLocations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharacterSpawnLocations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharacterSpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharactersAtLocation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharactersAtLocation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_CharactersAtLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_SaveGameSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_bRestoreCharactersAfterLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacter3DControllerComponent_Statics::NewProp_SnapshotToApply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacter3DControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VNM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacter3DControllerComponent_Statics::ClassParams = {
	&UCharacter3DControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacter3DControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacter3DControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacter3DControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacter3DControllerComponent()
{
	if (!Z_Registration_Info_UClass_UCharacter3DControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacter3DControllerComponent.OuterSingleton, Z_Construct_UClass_UCharacter3DControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacter3DControllerComponent.OuterSingleton;
}
template<> VNM_API UClass* StaticClass<UCharacter3DControllerComponent>()
{
	return UCharacter3DControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacter3DControllerComponent);
UCharacter3DControllerComponent::~UCharacter3DControllerComponent() {}
// End Class UCharacter3DControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_Character3DControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacter3DControllerComponent, UCharacter3DControllerComponent::StaticClass, TEXT("UCharacter3DControllerComponent"), &Z_Registration_Info_UClass_UCharacter3DControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacter3DControllerComponent), 2255036033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_Character3DControllerComponent_h_2750821831(TEXT("/Script/VNM"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_Character3DControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_VNM_Public_Component_Character3DControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
