// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnImporterEditor/Private/YarnStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnStructs() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_YarnImporterEditor();
YARNIMPORTEREDITOR_API UEnum* Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode();
YARNIMPORTEREDITOR_API UEnum* Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType();
YARNIMPORTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FYarn();
YARNIMPORTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FYarnHeader();
YARNIMPORTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FYarnInstruction();
YARNIMPORTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FYarnNode();
YARNIMPORTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FYarnOperand();
YARNIMPORTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FYarnProgram();
// End Cross Module References

// Begin ScriptStruct FYarnHeader
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YarnHeader;
class UScriptStruct* FYarnHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YarnHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YarnHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYarnHeader, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("YarnHeader"));
	}
	return Z_Registration_Info_UScriptStruct_YarnHeader.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<FYarnHeader>()
{
	return FYarnHeader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYarnHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYarnHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnHeader, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnHeader, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYarnHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnHeader_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnHeader_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYarnHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	&NewStructOps,
	"YarnHeader",
	Z_Construct_UScriptStruct_FYarnHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnHeader_Statics::PropPointers),
	sizeof(FYarnHeader),
	alignof(FYarnHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYarnHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYarnHeader()
{
	if (!Z_Registration_Info_UScriptStruct_YarnHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YarnHeader.InnerSingleton, Z_Construct_UScriptStruct_FYarnHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YarnHeader.InnerSingleton;
}
// End ScriptStruct FYarnHeader

// Begin Enum EYarnOperandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYarnOperandType;
static UEnum* EYarnOperandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYarnOperandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYarnOperandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("EYarnOperandType"));
	}
	return Z_Registration_Info_UEnum_EYarnOperandType.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UEnum* StaticEnum<EYarnOperandType>()
{
	return EYarnOperandType_StaticEnum();
}
struct Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BoolValue.Name", "EYarnOperandType::BoolValue" },
		{ "FloatValue.Name", "EYarnOperandType::FloatValue" },
		{ "FunctionResult.Name", "EYarnOperandType::FunctionResult" },
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
		{ "StringValue.Name", "EYarnOperandType::StringValue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYarnOperandType::StringValue", (int64)EYarnOperandType::StringValue },
		{ "EYarnOperandType::BoolValue", (int64)EYarnOperandType::BoolValue },
		{ "EYarnOperandType::FloatValue", (int64)EYarnOperandType::FloatValue },
		{ "EYarnOperandType::FunctionResult", (int64)EYarnOperandType::FunctionResult },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	"EYarnOperandType",
	"EYarnOperandType",
	Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType()
{
	if (!Z_Registration_Info_UEnum_EYarnOperandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYarnOperandType.InnerSingleton, Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYarnOperandType.InnerSingleton;
}
// End Enum EYarnOperandType

// Begin ScriptStruct FYarnOperand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YarnOperand;
class UScriptStruct* FYarnOperand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YarnOperand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YarnOperand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYarnOperand, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("YarnOperand"));
	}
	return Z_Registration_Info_UScriptStruct_YarnOperand.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<FYarnOperand>()
{
	return FYarnOperand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYarnOperand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYarnOperand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnOperand, Type), Z_Construct_UEnum_YarnImporterEditor_EYarnOperandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 895721356
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnOperand, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
void Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FYarnOperand*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FYarnOperand), &Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnOperand, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnOperand, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYarnOperand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnOperand_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnOperand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYarnOperand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	&NewStructOps,
	"YarnOperand",
	Z_Construct_UScriptStruct_FYarnOperand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnOperand_Statics::PropPointers),
	sizeof(FYarnOperand),
	alignof(FYarnOperand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnOperand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYarnOperand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYarnOperand()
{
	if (!Z_Registration_Info_UScriptStruct_YarnOperand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YarnOperand.InnerSingleton, Z_Construct_UScriptStruct_FYarnOperand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YarnOperand.InnerSingleton;
}
// End ScriptStruct FYarnOperand

// Begin Enum EYarnOpCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYarnOpCode;
static UEnum* EYarnOpCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYarnOpCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYarnOpCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("EYarnOpCode"));
	}
	return Z_Registration_Info_UEnum_EYarnOpCode.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UEnum* StaticEnum<EYarnOpCode>()
{
	return EYarnOpCode_StaticEnum();
}
struct Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ADD_OPTION.Comment", "// Adds an entry to the option list (see ShowOptions).\n// - opA = string: string ID for option to add\n// - opB = string: destination to go to if this option is selected\n// - opC = number: number of expressions on the stack to insert\n//   into the line\n// - opD = bool: whether the option has a condition on it (in which\n//   case a value should be popped off the stack and used to signal\n//   the game that the option should be not available)\n" },
		{ "ADD_OPTION.Name", "EYarnOpCode::ADD_OPTION" },
		{ "ADD_OPTION.ToolTip", "Adds an entry to the option list (see ShowOptions).\n- opA = string: string ID for option to add\n- opB = string: destination to go to if this option is selected\n- opC = number: number of expressions on the stack to insert\n  into the line\n- opD = bool: whether the option has a condition on it (in which\n  case a value should be popped off the stack and used to signal\n  the game that the option should be not available)" },
		{ "CALL_FUNC.Comment", "// Calls a function in the client. Pops as many arguments as the\n// client indicates the function receives, and the result (if any)\n// is pushed to the stack.\x09\x09\n// opA = string: name of the function\n" },
		{ "CALL_FUNC.Name", "EYarnOpCode::CALL_FUNC" },
		{ "CALL_FUNC.ToolTip", "Calls a function in the client. Pops as many arguments as the\nclient indicates the function receives, and the result (if any)\nis pushed to the stack.\nopA = string: name of the function" },
		{ "JUMP.Comment", "// Peeks a string from stack, and jumps to that named position in\n// the node. \n// No operands.\n" },
		{ "JUMP.Name", "EYarnOpCode::JUMP" },
		{ "JUMP.ToolTip", "Peeks a string from stack, and jumps to that named position in\nthe node.\nNo operands." },
		{ "JUMP_IF_FALSE.Comment", "// Jumps to the named position in the the node, if the top of the\n// stack is not null, zero or false.\n// opA = string: label name \n" },
		{ "JUMP_IF_FALSE.Name", "EYarnOpCode::JUMP_IF_FALSE" },
		{ "JUMP_IF_FALSE.ToolTip", "Jumps to the named position in the the node, if the top of the\nstack is not null, zero or false.\nopA = string: label name" },
		{ "JUMP_TO.Comment", "// Jumps to a named position in the node.\n// opA = string: label name\n" },
		{ "JUMP_TO.Name", "EYarnOpCode::JUMP_TO" },
		{ "JUMP_TO.ToolTip", "Jumps to a named position in the node.\nopA = string: label name" },
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
		{ "POP.Comment", "// Discards top of stack.\n// No operands.\n" },
		{ "POP.Name", "EYarnOpCode::POP" },
		{ "POP.ToolTip", "Discards top of stack.\nNo operands." },
		{ "PUSH_BOOL.Comment", "// Pushes a boolean onto the stack.\n// opA = bool: the bool to push to stack\n" },
		{ "PUSH_BOOL.Name", "EYarnOpCode::PUSH_BOOL" },
		{ "PUSH_BOOL.ToolTip", "Pushes a boolean onto the stack.\nopA = bool: the bool to push to stack" },
		{ "PUSH_FLOAT.Comment", "// Pushes a floating point number onto the stack.\n// opA = float: number to push to stack\n" },
		{ "PUSH_FLOAT.Name", "EYarnOpCode::PUSH_FLOAT" },
		{ "PUSH_FLOAT.ToolTip", "Pushes a floating point number onto the stack.\nopA = float: number to push to stack" },
		{ "PUSH_NULL.Comment", "// Pushes a null value onto the stack.\n// No operands.\n" },
		{ "PUSH_NULL.Name", "EYarnOpCode::PUSH_NULL" },
		{ "PUSH_NULL.ToolTip", "Pushes a null value onto the stack.\nNo operands." },
		{ "PUSH_STRING.Comment", "// Pushes a string onto the stack.\n// opA = string: the string to push to the stack.\n" },
		{ "PUSH_STRING.Name", "EYarnOpCode::PUSH_STRING" },
		{ "PUSH_STRING.ToolTip", "Pushes a string onto the stack.\nopA = string: the string to push to the stack." },
		{ "PUSH_VARIABLE.Comment", "// Pushes the contents of a variable onto the stack.\n// opA = name of variable \n" },
		{ "PUSH_VARIABLE.Name", "EYarnOpCode::PUSH_VARIABLE" },
		{ "PUSH_VARIABLE.ToolTip", "Pushes the contents of a variable onto the stack.\nopA = name of variable" },
		{ "RUN_COMMAND.Comment", "// Delivers a command to the client.\n// opA = string: command text\n" },
		{ "RUN_COMMAND.Name", "EYarnOpCode::RUN_COMMAND" },
		{ "RUN_COMMAND.ToolTip", "Delivers a command to the client.\nopA = string: command text" },
		{ "RUN_LINE.Comment", "// Delivers a string ID to the client.\n// opA = string: string ID\n" },
		{ "RUN_LINE.Name", "EYarnOpCode::RUN_LINE" },
		{ "RUN_LINE.ToolTip", "Delivers a string ID to the client.\nopA = string: string ID" },
		{ "RUN_NODE.Comment", "// Pops a string off the top of the stack, and runs the node with\n// that name.\n// No operands.\n" },
		{ "RUN_NODE.Name", "EYarnOpCode::RUN_NODE" },
		{ "RUN_NODE.ToolTip", "Pops a string off the top of the stack, and runs the node with\nthat name.\nNo operands." },
		{ "SHOW_OPTIONS.Comment", "// Presents the current list of options to the client, then clears\n// the list. The most recently selected option will be on the top\n// of the stack when execution resumes.\n// No operands.\n" },
		{ "SHOW_OPTIONS.Name", "EYarnOpCode::SHOW_OPTIONS" },
		{ "SHOW_OPTIONS.ToolTip", "Presents the current list of options to the client, then clears\nthe list. The most recently selected option will be on the top\nof the stack when execution resumes.\nNo operands." },
		{ "STOP.Comment", "// Stops execution of the program.\n// No operands.\n" },
		{ "STOP.Name", "EYarnOpCode::STOP" },
		{ "STOP.ToolTip", "Stops execution of the program.\nNo operands." },
		{ "STORE_VARIABLE.Comment", "// Stores the contents of the top of the stack in the named\n// variable. \n// opA = name of variable\n" },
		{ "STORE_VARIABLE.Name", "EYarnOpCode::STORE_VARIABLE" },
		{ "STORE_VARIABLE.ToolTip", "Stores the contents of the top of the stack in the named\nvariable.\nopA = name of variable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYarnOpCode::JUMP_TO", (int64)EYarnOpCode::JUMP_TO },
		{ "EYarnOpCode::JUMP", (int64)EYarnOpCode::JUMP },
		{ "EYarnOpCode::RUN_LINE", (int64)EYarnOpCode::RUN_LINE },
		{ "EYarnOpCode::RUN_COMMAND", (int64)EYarnOpCode::RUN_COMMAND },
		{ "EYarnOpCode::ADD_OPTION", (int64)EYarnOpCode::ADD_OPTION },
		{ "EYarnOpCode::SHOW_OPTIONS", (int64)EYarnOpCode::SHOW_OPTIONS },
		{ "EYarnOpCode::PUSH_STRING", (int64)EYarnOpCode::PUSH_STRING },
		{ "EYarnOpCode::PUSH_FLOAT", (int64)EYarnOpCode::PUSH_FLOAT },
		{ "EYarnOpCode::PUSH_BOOL", (int64)EYarnOpCode::PUSH_BOOL },
		{ "EYarnOpCode::PUSH_NULL", (int64)EYarnOpCode::PUSH_NULL },
		{ "EYarnOpCode::JUMP_IF_FALSE", (int64)EYarnOpCode::JUMP_IF_FALSE },
		{ "EYarnOpCode::POP", (int64)EYarnOpCode::POP },
		{ "EYarnOpCode::CALL_FUNC", (int64)EYarnOpCode::CALL_FUNC },
		{ "EYarnOpCode::PUSH_VARIABLE", (int64)EYarnOpCode::PUSH_VARIABLE },
		{ "EYarnOpCode::STORE_VARIABLE", (int64)EYarnOpCode::STORE_VARIABLE },
		{ "EYarnOpCode::STOP", (int64)EYarnOpCode::STOP },
		{ "EYarnOpCode::RUN_NODE", (int64)EYarnOpCode::RUN_NODE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	"EYarnOpCode",
	"EYarnOpCode",
	Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode()
{
	if (!Z_Registration_Info_UEnum_EYarnOpCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYarnOpCode.InnerSingleton, Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYarnOpCode.InnerSingleton;
}
// End Enum EYarnOpCode

// Begin ScriptStruct FYarnInstruction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YarnInstruction;
class UScriptStruct* FYarnInstruction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YarnInstruction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YarnInstruction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYarnInstruction, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("YarnInstruction"));
	}
	return Z_Registration_Info_UScriptStruct_YarnInstruction.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<FYarnInstruction>()
{
	return FYarnInstruction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYarnInstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpCode_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operands_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OpCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Operands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Operands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYarnInstruction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_OpCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_OpCode = { "OpCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnInstruction, OpCode), Z_Construct_UEnum_YarnImporterEditor_EYarnOpCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpCode_MetaData), NewProp_OpCode_MetaData) }; // 1660015304
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_Operands_Inner = { "Operands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FYarnOperand, METADATA_PARAMS(0, nullptr) }; // 1579617927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_Operands = { "Operands", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnInstruction, Operands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operands_MetaData), NewProp_Operands_MetaData) }; // 1579617927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYarnInstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_OpCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_OpCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_Operands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewProp_Operands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnInstruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYarnInstruction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	&NewStructOps,
	"YarnInstruction",
	Z_Construct_UScriptStruct_FYarnInstruction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnInstruction_Statics::PropPointers),
	sizeof(FYarnInstruction),
	alignof(FYarnInstruction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnInstruction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYarnInstruction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYarnInstruction()
{
	if (!Z_Registration_Info_UScriptStruct_YarnInstruction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YarnInstruction.InnerSingleton, Z_Construct_UScriptStruct_FYarnInstruction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YarnInstruction.InnerSingleton;
}
// End ScriptStruct FYarnInstruction

// Begin ScriptStruct FYarnNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YarnNode;
class UScriptStruct* FYarnNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YarnNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YarnNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYarnNode, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("YarnNode"));
	}
	return Z_Registration_Info_UScriptStruct_YarnNode.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<FYarnNode>()
{
	return FYarnNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYarnNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextStringID_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instructions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Labels_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Labels;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceTextStringID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYarnNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnNode, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Instructions_Inner = { "Instructions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FYarnInstruction, METADATA_PARAMS(0, nullptr) }; // 1278026854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnNode, Instructions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instructions_MetaData), NewProp_Instructions_MetaData) }; // 1278026854
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Labels_ValueProp = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Labels_Key_KeyProp = { "Labels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnNode, Labels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Labels_MetaData), NewProp_Labels_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnNode, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_SourceTextStringID = { "SourceTextStringID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnNode, SourceTextStringID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTextStringID_MetaData), NewProp_SourceTextStringID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FYarnHeader, METADATA_PARAMS(0, nullptr) }; // 1320713612
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnNode, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) }; // 1320713612
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYarnNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Instructions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Instructions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Labels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Labels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Labels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_SourceTextStringID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Headers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnNode_Statics::NewProp_Headers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYarnNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	&NewStructOps,
	"YarnNode",
	Z_Construct_UScriptStruct_FYarnNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnNode_Statics::PropPointers),
	sizeof(FYarnNode),
	alignof(FYarnNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYarnNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYarnNode()
{
	if (!Z_Registration_Info_UScriptStruct_YarnNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YarnNode.InnerSingleton, Z_Construct_UScriptStruct_FYarnNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YarnNode.InnerSingleton;
}
// End ScriptStruct FYarnNode

// Begin ScriptStruct FYarnProgram
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YarnProgram;
class UScriptStruct* FYarnProgram::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YarnProgram.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YarnProgram.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYarnProgram, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("YarnProgram"));
	}
	return Z_Registration_Info_UScriptStruct_YarnProgram.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<FYarnProgram>()
{
	return FYarnProgram::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYarnProgram_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValues_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InitialValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitialValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYarnProgram>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnProgram, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FYarnNode, METADATA_PARAMS(0, nullptr) }; // 910149641
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnProgram, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 910149641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_InitialValues_ValueProp = { "InitialValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FYarnOperand, METADATA_PARAMS(0, nullptr) }; // 1579617927
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_InitialValues_Key_KeyProp = { "InitialValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_InitialValues = { "InitialValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarnProgram, InitialValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialValues_MetaData), NewProp_InitialValues_MetaData) }; // 1579617927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYarnProgram_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Nodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Nodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_InitialValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_InitialValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarnProgram_Statics::NewProp_InitialValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnProgram_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYarnProgram_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	&NewStructOps,
	"YarnProgram",
	Z_Construct_UScriptStruct_FYarnProgram_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnProgram_Statics::PropPointers),
	sizeof(FYarnProgram),
	alignof(FYarnProgram),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarnProgram_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYarnProgram_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYarnProgram()
{
	if (!Z_Registration_Info_UScriptStruct_YarnProgram.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YarnProgram.InnerSingleton, Z_Construct_UScriptStruct_FYarnProgram_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YarnProgram.InnerSingleton;
}
// End ScriptStruct FYarnProgram

// Begin ScriptStruct FYarn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Yarn;
class UScriptStruct* FYarn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Yarn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Yarn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYarn, (UObject*)Z_Construct_UPackage__Script_YarnImporterEditor(), TEXT("Yarn"));
	}
	return Z_Registration_Info_UScriptStruct_Yarn.OuterSingleton;
}
template<> YARNIMPORTEREDITOR_API UScriptStruct* StaticStruct<FYarn>()
{
	return FYarn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYarn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Program_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[] = {
		{ "ModuleRelativePath", "Private/YarnStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Program;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Strings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYarn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Program = { "Program", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarn, Program), Z_Construct_UScriptStruct_FYarnProgram, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Program_MetaData), NewProp_Program_MetaData) }; // 2028314377
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Strings_ValueProp = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Strings_Key_KeyProp = { "Strings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYarn, Strings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strings_MetaData), NewProp_Strings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYarn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Program,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Strings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Strings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYarn_Statics::NewProp_Strings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYarn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YarnImporterEditor,
	nullptr,
	&NewStructOps,
	"Yarn",
	Z_Construct_UScriptStruct_FYarn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarn_Statics::PropPointers),
	sizeof(FYarn),
	alignof(FYarn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYarn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYarn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYarn()
{
	if (!Z_Registration_Info_UScriptStruct_Yarn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Yarn.InnerSingleton, Z_Construct_UScriptStruct_FYarn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Yarn.InnerSingleton;
}
// End ScriptStruct FYarn

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYarnOperandType_StaticEnum, TEXT("EYarnOperandType"), &Z_Registration_Info_UEnum_EYarnOperandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 895721356U) },
		{ EYarnOpCode_StaticEnum, TEXT("EYarnOpCode"), &Z_Registration_Info_UEnum_EYarnOpCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1660015304U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FYarnHeader::StaticStruct, Z_Construct_UScriptStruct_FYarnHeader_Statics::NewStructOps, TEXT("YarnHeader"), &Z_Registration_Info_UScriptStruct_YarnHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYarnHeader), 1320713612U) },
		{ FYarnOperand::StaticStruct, Z_Construct_UScriptStruct_FYarnOperand_Statics::NewStructOps, TEXT("YarnOperand"), &Z_Registration_Info_UScriptStruct_YarnOperand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYarnOperand), 1579617927U) },
		{ FYarnInstruction::StaticStruct, Z_Construct_UScriptStruct_FYarnInstruction_Statics::NewStructOps, TEXT("YarnInstruction"), &Z_Registration_Info_UScriptStruct_YarnInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYarnInstruction), 1278026854U) },
		{ FYarnNode::StaticStruct, Z_Construct_UScriptStruct_FYarnNode_Statics::NewStructOps, TEXT("YarnNode"), &Z_Registration_Info_UScriptStruct_YarnNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYarnNode), 910149641U) },
		{ FYarnProgram::StaticStruct, Z_Construct_UScriptStruct_FYarnProgram_Statics::NewStructOps, TEXT("YarnProgram"), &Z_Registration_Info_UScriptStruct_YarnProgram, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYarnProgram), 2028314377U) },
		{ FYarn::StaticStruct, Z_Construct_UScriptStruct_FYarn_Statics::NewStructOps, TEXT("Yarn"), &Z_Registration_Info_UScriptStruct_Yarn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYarn), 2387749103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_3559387684(TEXT("/Script/YarnImporterEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VisualNovelMachinery_Source_YarnImporterEditor_Private_YarnStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
