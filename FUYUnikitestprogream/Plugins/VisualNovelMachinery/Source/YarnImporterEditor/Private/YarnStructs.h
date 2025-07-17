#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonObject.h"
#include "YarnStructs.generated.h"

USTRUCT()
struct FYarnHeader
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString Key;
	
	UPROPERTY()
	FString Value;

	void FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		Key = JsonObject->GetStringField(TEXT("key"));
		Value = JsonObject->GetStringField(TEXT("value"));
	}
};

UENUM()
enum class EYarnOperandType : uint8
{
	StringValue,
	BoolValue,
	FloatValue,
	FunctionResult
};

USTRUCT()
struct FYarnOperand
{
	GENERATED_BODY()
	
	UPROPERTY()
	EYarnOperandType Type;	
	
	UPROPERTY()
	FString StringValue;
	
	UPROPERTY()
	bool BoolValue = false;
	
	UPROPERTY()
	float FloatValue = 0.f;
	
	UPROPERTY()
	FGuid Guid = FGuid::NewGuid();

	void FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		if (JsonObject->TryGetStringField(TEXT("stringValue"), StringValue))
		{
			Type = EYarnOperandType::StringValue;
			return;
		}
		if (JsonObject->TryGetBoolField(TEXT("boolValue"), BoolValue))
		{
			StringValue = LexToString(BoolValue);
			Type = EYarnOperandType::BoolValue;
			return;
		}
		if (JsonObject->TryGetNumberField(TEXT("floatValue"), FloatValue))
		{
			StringValue = LexToString(FloatValue);
			Type = EYarnOperandType::FloatValue;
			return;
		}
	}
};

UENUM()
enum class EYarnOpCode : uint8
{
	// Jumps to a named position in the node.
    // opA = string: label name
    JUMP_TO = 0, 
    
    // Peeks a string from stack, and jumps to that named position in
    // the node. 
    // No operands.
    JUMP = 1, 
    
    // Delivers a string ID to the client.
    // opA = string: string ID
    RUN_LINE = 2, 
    
    // Delivers a command to the client.
    // opA = string: command text
    RUN_COMMAND = 3, 
    
    // Adds an entry to the option list (see ShowOptions).
    // - opA = string: string ID for option to add
    // - opB = string: destination to go to if this option is selected
    // - opC = number: number of expressions on the stack to insert
    //   into the line
    // - opD = bool: whether the option has a condition on it (in which
    //   case a value should be popped off the stack and used to signal
    //   the game that the option should be not available)
    ADD_OPTION = 4, 
    
    // Presents the current list of options to the client, then clears
    // the list. The most recently selected option will be on the top
    // of the stack when execution resumes.
    // No operands.
    SHOW_OPTIONS = 5, 
    
    // Pushes a string onto the stack.
    // opA = string: the string to push to the stack.
    PUSH_STRING = 6, 
    
    // Pushes a floating point number onto the stack.
    // opA = float: number to push to stack
    PUSH_FLOAT = 7, 
    
    // Pushes a boolean onto the stack.
    // opA = bool: the bool to push to stack
    PUSH_BOOL = 8, 
    
    // Pushes a null value onto the stack.
    // No operands.
    PUSH_NULL = 9, 
    
    // Jumps to the named position in the the node, if the top of the
    // stack is not null, zero or false.
    // opA = string: label name 
    JUMP_IF_FALSE = 10, 
    
    // Discards top of stack.
    // No operands.
    POP = 11, 
    
    // Calls a function in the client. Pops as many arguments as the
    // client indicates the function receives, and the result (if any)
    // is pushed to the stack.		
    // opA = string: name of the function
    CALL_FUNC = 12, 
    
    // Pushes the contents of a variable onto the stack.
    // opA = name of variable 
    PUSH_VARIABLE = 13, 
    
    // Stores the contents of the top of the stack in the named
    // variable. 
    // opA = name of variable
    STORE_VARIABLE = 14, 
    
    // Stops execution of the program.
    // No operands.
    STOP = 15, 
    
    // Pops a string off the top of the stack, and runs the node with
    // that name.
    // No operands.
    RUN_NODE = 16, 
};

USTRUCT()
struct FYarnInstruction
{
	GENERATED_BODY()

	UPROPERTY()
	EYarnOpCode OpCode;

	UPROPERTY()
	TArray<FYarnOperand> Operands;

	void FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		OpCode = static_cast<EYarnOpCode>(StaticEnum<EYarnOpCode>()->GetValueByNameString(JsonObject->GetStringField(TEXT("opcode"))));

		for (auto OperandJsonObject : JsonObject->GetArrayField(TEXT("operands")))
		{
			FYarnOperand Operand;

			Operand.FromJson(OperandJsonObject->AsObject());

			Operands.Add(Operand);
		}
	}
};

USTRUCT()
struct FYarnNode
{
	GENERATED_BODY()

	UPROPERTY()
	FString Name;

	UPROPERTY()
	TArray<FYarnInstruction> Instructions;

	UPROPERTY()
	TMap<FString, int32> Labels;

	UPROPERTY()
	TArray<FString> Tags;

	UPROPERTY()
	FString SourceTextStringID;

	UPROPERTY()
	TArray<FYarnHeader> Headers;

	void FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		Name = JsonObject->GetStringField(TEXT("name"));

		for (auto InstructionJsonObject : JsonObject->GetArrayField(TEXT("instructions")))
		{
			FYarnInstruction Instruction;

			Instruction.FromJson(InstructionJsonObject->AsObject());

			Instructions.Add(Instruction);
		}

		const auto& LabelsJsonObject = JsonObject->GetObjectField(TEXT("labels"));

		for (const auto& LabelsJsonPair: LabelsJsonObject->Values)
		{
			Labels.Add(LabelsJsonPair.Key, LabelsJsonPair.Value->AsNumber());
		}

		for (auto TagJsonValue : JsonObject->GetArrayField(TEXT("tags")))
		{
			Tags.Add(TagJsonValue->AsString());
		}
		
		SourceTextStringID = JsonObject->GetStringField(TEXT("sourceTextStringID"));

		for (auto HeaderJsonObject : JsonObject->GetArrayField(TEXT("headers")))
		{
			FYarnHeader Header;

			Header.FromJson(HeaderJsonObject->AsObject());

			Headers.Add(Header);
		}
	}
};

USTRUCT()
struct FYarnProgram
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString Name;

	UPROPERTY()
	TMap<FString, FYarnNode> Nodes;

	UPROPERTY()
	TMap<FString, FYarnOperand> InitialValues;

	void FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		Name = JsonObject->GetStringField(TEXT("name"));

		const auto& NodesJsonObject = JsonObject->GetObjectField(TEXT("nodes"));
		for (const auto& NodesJsonPair: NodesJsonObject->Values)
		{
			FYarnNode Node;

			Node.FromJson(NodesJsonPair.Value->AsObject());
			
			Nodes.Add(NodesJsonPair.Key, Node);
		}
		
		const auto& InitialValuesJsonObject= JsonObject->GetObjectField(TEXT("initialValues"));
		for (const auto& InitialValuesJsonPair: InitialValuesJsonObject->Values)
		{
			FYarnOperand Node;

			Node.FromJson(InitialValuesJsonPair.Value->AsObject());
			
			InitialValues.Add(InitialValuesJsonPair.Key, Node);
		}
	}
};

USTRUCT()
struct FYarn
{
	GENERATED_BODY()

	UPROPERTY()
	FYarnProgram Program;

	UPROPERTY()
	TMap<FString, FString> Strings;

	void FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		Program.FromJson(JsonObject->GetObjectField(TEXT("program")));

		const auto& StringsJsonObject= JsonObject->GetObjectField(TEXT("strings"));
		for (const auto& StringsJsonPair: StringsJsonObject->Values)
		{
			FYarnOperand Node;

			Node.FromJson(StringsJsonPair.Value->AsObject());
			
			Strings.Add(StringsJsonPair.Key, StringsJsonPair.Value->AsObject()->GetStringField(TEXT("text")));
		}
	}
};
