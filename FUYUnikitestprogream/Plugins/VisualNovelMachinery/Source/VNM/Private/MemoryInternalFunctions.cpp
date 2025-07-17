// Copyright (c) 2022 Al_Fe


#include "MemoryInternalFunctions.h"

#include "CharacterControllerComponent.h"
#include "MemoryControllerComponent.h"
#include "VNMModule.h"
#include "Kismet/GameplayStatics.h"

void UMemoryInternalFunctions::GetCharacterMemoryBoolValue(UObject* WorldContextObject, FName CharacterId,
                                                                    FName CharacterMemoryId, bool& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryBoolValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryBoolValue: Memory Controller not found!"));
		return;
	}

	const auto CharacterMemoryValue = MemoryController->GetMemoryValueForCharacterId(CharacterId, CharacterMemoryId);

	Value = CharacterMemoryValue.GetBoolValue();

}

void UMemoryInternalFunctions::GetCharacterMemoryIntegerValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, int32& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryIntegerValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryIntegerValue: Memory Controller not found!"));
		return;
	}

	const auto CharacterMemoryValue = MemoryController->GetMemoryValueForCharacterId(CharacterId, CharacterMemoryId);

	Value = CharacterMemoryValue.GetInt32Value();
}

void UMemoryInternalFunctions::GetCharacterMemoryInteger64Value(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, int64& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryInteger64Value: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryInteger64Value: Memory Controller not found!"));
		return;
	}

	const auto CharacterMemoryValue = MemoryController->GetMemoryValueForCharacterId(CharacterId, CharacterMemoryId);

	Value = CharacterMemoryValue.GetInt64Value();
}

void UMemoryInternalFunctions::GetCharacterMemoryFloatValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, float& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryFloatValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryFloatValue: Memory Controller not found!"));
		return;
	}

	const auto CharacterMemoryValue = MemoryController->GetMemoryValueForCharacterId(CharacterId, CharacterMemoryId);

	Value = CharacterMemoryValue.GetFloatValue();
}

void UMemoryInternalFunctions::GetCharacterMemoryStringValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, FString& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Memory Controller not found!"));
		return;
	}

	const auto CharacterMemoryValue = MemoryController->GetMemoryValueForCharacterId(CharacterId, CharacterMemoryId);

	Value = CharacterMemoryValue.GetStringValue();
}

void UMemoryInternalFunctions::GetCharacterMemoryByteValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, uint8& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryByteValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryByteValue: Memory Controller not found!"));
		return;
	}

	const auto CharacterMemoryValue = MemoryController->GetMemoryValueForCharacterId(CharacterId, CharacterMemoryId);

	Value = CharacterMemoryValue.GetByteValue();
}

void UMemoryInternalFunctions::SetCharacterMemoryBoolValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, bool Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Memory Controller not found!"));
		return;
	}

	auto* CharacterMemoryValue = MemoryController->GetMemoryValuePtrForCharacterId(CharacterId, CharacterMemoryId);

	CharacterMemoryValue->SetBoolValue(Value);
}

void UMemoryInternalFunctions::SetCharacterMemoryIntegerValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, int32 Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Memory Controller not found!"));
		return;
	}

	auto* CharacterMemoryValue = MemoryController->GetMemoryValuePtrForCharacterId(CharacterId, CharacterMemoryId);

	CharacterMemoryValue->SetInt32Value(Value);
}

void UMemoryInternalFunctions::SetCharacterMemoryInteger64Value(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, int64 Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Memory Controller not found!"));
		return;
	}

	auto* CharacterMemoryValue = MemoryController->GetMemoryValuePtrForCharacterId(CharacterId, CharacterMemoryId);

	CharacterMemoryValue->SetInt64Value(Value);
}

void UMemoryInternalFunctions::SetCharacterMemoryFloatValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, float Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Memory Controller not found!"));
		return;
	}

	auto* CharacterMemoryValue = MemoryController->GetMemoryValuePtrForCharacterId(CharacterId, CharacterMemoryId);

	CharacterMemoryValue->SetFloatValue(Value);
}

void UMemoryInternalFunctions::SetCharacterMemoryStringValue(UObject* WorldContextObject, FName CharacterId,
	FName CharacterMemoryId, FString Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetCharacterMemoryStringValue: Memory Controller not found!"));
		return;
	}

	auto* CharacterMemoryValue = MemoryController->GetMemoryValuePtrForCharacterId(CharacterId, CharacterMemoryId);

	CharacterMemoryValue->SetStringValue(Value);
}

void UMemoryInternalFunctions::SetCharacterMemoryByteValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, uint8 Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetCharacterMemoryByteValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetCharacterMemoryByteValue: Memory Controller not found!"));
		return;
	}

	auto* CharacterMemoryValue = MemoryController->GetMemoryValuePtrForCharacterId(CharacterId, CharacterMemoryId);

	CharacterMemoryValue->SetByteValue(Value);
}

void UMemoryInternalFunctions::GetDialogMemoryBoolValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, bool& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryBoolValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryBoolValue: Memory Controller not found!"));
		return;
	}

	const auto DialogMemoryValue = MemoryController->GetMemoryValueForDialogId(DialogId, DialogMemoryId);

	Value = DialogMemoryValue.GetBoolValue();
}

void UMemoryInternalFunctions::GetDialogMemoryIntegerValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, int32& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryIntegerValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryIntegerValue: Memory Controller not found!"));
		return;
	}

	const auto DialogMemoryValue = MemoryController->GetMemoryValueForDialogId(DialogId, DialogMemoryId);

	Value = DialogMemoryValue.GetInt32Value();
}

void UMemoryInternalFunctions::GetDialogMemoryInteger64Value(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, int64& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryInteger64Value: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryInteger64Value: Memory Controller not found!"));
		return;
	}

	const auto DialogMemoryValue = MemoryController->GetMemoryValueForDialogId(DialogId, DialogMemoryId);

	Value = DialogMemoryValue.GetInt64Value();
}

void UMemoryInternalFunctions::GetDialogMemoryFloatValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, float& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryFloatValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryFloatValue: Memory Controller not found!"));
		return;
	}

	const auto DialogMemoryValue = MemoryController->GetMemoryValueForDialogId(DialogId, DialogMemoryId);

	Value = DialogMemoryValue.GetFloatValue();
}

void UMemoryInternalFunctions::GetDialogMemoryStringValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, FString& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryStringValue: Memory Controller not found!"));
		return;
	}

	const auto DialogMemoryValue = MemoryController->GetMemoryValueForDialogId(DialogId, DialogMemoryId);

	Value = DialogMemoryValue.GetStringValue();
}

void UMemoryInternalFunctions::GetDialogMemoryByteValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, uint8& Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryByteValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::GetDialogMemoryByteValue: Memory Controller not found!"));
		return;
	}

	const auto DialogMemoryValue = MemoryController->GetMemoryValueForDialogId(DialogId, DialogMemoryId);

	Value = DialogMemoryValue.GetByteValue();
}

void UMemoryInternalFunctions::SetDialogMemoryBoolValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, bool Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryBoolValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryBoolValue: Memory Controller not found!"));
		return;
	}

	auto* DialogMemoryValue = MemoryController->GetMemoryValuePtrForDialogId(DialogId, DialogMemoryId);

	DialogMemoryValue->SetBoolValue(Value);
}

void UMemoryInternalFunctions::SetDialogMemoryIntegerValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, int32 Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryIntegerValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryIntegerValue: Memory Controller not found!"));
		return;
	}

	auto* DialogMemoryValue = MemoryController->GetMemoryValuePtrForDialogId(DialogId, DialogMemoryId);

	DialogMemoryValue->SetInt32Value(Value);
}

void UMemoryInternalFunctions::SetDialogMemoryInteger64Value(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, int64 Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryInteger64Value: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryInteger64Value: Memory Controller not found!"));
		return;
	}

	auto* DialogMemoryValue = MemoryController->GetMemoryValuePtrForDialogId(DialogId, DialogMemoryId);

	DialogMemoryValue->SetInt64Value(Value);
}

void UMemoryInternalFunctions::SetDialogMemoryFloatValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, float Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryFloatValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryFloatValue: Memory Controller not found!"));
		return;
	}

	auto* DialogMemoryValue = MemoryController->GetMemoryValuePtrForDialogId(DialogId, DialogMemoryId);

	DialogMemoryValue->SetFloatValue(Value);
}

void UMemoryInternalFunctions::SetDialogMemoryStringValue(UObject* WorldContextObject, FName DialogId,
	FName DialogMemoryId, FString Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryStringValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryStringValue: Memory Controller not found!"));
		return;
	}

	auto* DialogMemoryValue = MemoryController->GetMemoryValuePtrForDialogId(DialogId, DialogMemoryId);

	DialogMemoryValue->SetStringValue(Value);
}

void UMemoryInternalFunctions::SetDialogMemoryByteValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, uint8 Value)
{
	auto* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	if (!PlayerController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryByteValue: Player Controller not found!"));
		return;
	}

	auto* MemoryController = PlayerController->FindComponentByClass<UMemoryControllerComponent>();

	if (!MemoryController)
	{
		UE_LOG(LogVNM, Error, TEXT("UMemoryInternalFunctions::SetDialogMemoryByteValue: Memory Controller not found!"));
		return;
	}

	auto* DialogMemoryValue = MemoryController->GetMemoryValuePtrForDialogId(DialogId, DialogMemoryId);

	DialogMemoryValue->SetByteValue(Value);
}
