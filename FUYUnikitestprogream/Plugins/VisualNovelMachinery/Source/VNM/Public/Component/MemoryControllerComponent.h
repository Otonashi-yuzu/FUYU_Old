// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "BaseControllerComponent.h"

#include "VNMSettings.h"
#include "Components/ActorComponent.h"
#include "MemoryControllerComponent.generated.h"

USTRUCT()
struct FMemoryValue
{
	GENERATED_BODY()

	UPROPERTY()
	FName Id;
	
	UPROPERTY()
	FString Value;

	UPROPERTY()
	EMemoryType Type;

	bool IsValid() const
	{
		return !Id.IsNone();
	}

	void SetInitialValue()
	{
		switch (Type)
		{
		case EMemoryType::Bool:
			SetBoolValue(false);
			break;
		case EMemoryType::Integer:
			SetInt32Value(0);
			break;
		case EMemoryType::Integer64:
			SetInt64Value(0);
			break;
		case EMemoryType::Float:
			SetFloatValue(0.f);
			break;
		case EMemoryType::String:
			SetStringValue("");
			break;
		}
	}

	void SetBoolValue(const bool InValue)
	{
		Value = LexToString(InValue);
	}

	void SetInt32Value(const int32 InValue)
	{
		Value = LexToString(InValue);
	}

	void SetInt64Value(const int64 InValue)
	{
		Value = LexToString(InValue);
	}

	void SetFloatValue(const float InValue)
	{
		Value = LexToString(InValue);
	}

	void SetStringValue(const FString& InValue)
	{
		Value = InValue;
	}

	void SetByteValue(const uint8 InValue)
	{
		Value = LexToString(InValue);
	}

	bool GetBoolValue() const
	{
		bool RetVal;
		LexFromString(RetVal, *Value);
		return RetVal;
	}

	int32 GetInt32Value() const
	{
		int32 RetVal;
		LexFromString(RetVal, *Value);
		return RetVal;
	}

	int64 GetInt64Value() const
	{
		int64 RetVal;
		LexFromString(RetVal, *Value);
		return RetVal;
	}

	float GetFloatValue() const
	{
		float RetVal;
		LexFromString(RetVal, *Value);
		return RetVal;
	}

	FString GetStringValue() const
	{
		return Value;
	}

	uint8 GetByteValue() const
	{
		uint8 RetVal;
		LexFromString(RetVal, *Value);
		return RetVal;
	}
};

USTRUCT()
struct FMemoryObject
{
	GENERATED_BODY()

	UPROPERTY()
	FName Id;

	TMap<FName, FMemoryValue> Values;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VNM_API UMemoryControllerComponent : public UBaseControllerComponent
{
	GENERATED_BODY()

public:
	UMemoryControllerComponent();
	
	FSimpleDelegate OnControllerInitialized;
protected:

	virtual void InitializeComponent() override;
	
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void SetupControllerComponent() override;

public:
	virtual bool ApplySnapshot(const FGameSnapshot& Snapshot) override;
	TMap<FName, FMemoryData> GetCharacterMemoryData() const;
	TMap<FName, FMemoryData> GetDialogMemoryData() const;
	
	FMemoryValue GetMemoryValueForCharacterId(const FName& CharacterId, const FName& ValueId);
	FMemoryValue* GetMemoryValuePtrForCharacterId(const FName& CharacterId, const FName& ValueId);
	bool SetMemoryValueForCharacterId(const FName& CharacterId, const FName& ValueId, const FString& Value);
	
	FMemoryValue GetMemoryValueForDialogId(const FName& DialogId, const FName& ValueId);
	FMemoryValue* GetMemoryValuePtrForDialogId(const FName& DialogId, const FName& ValueId);
	bool SetMemoryValueForDialogId(const FName& DialogId, const FName& ValueId, const FString& Value);

protected:
	UPROPERTY()
	TMap<FName, FMemoryObject> CharacterMemories;
	
	UPROPERTY()
	TMap<FName, FMemoryObject> DialogMemories;
};


