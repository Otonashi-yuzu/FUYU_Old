// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MemoryInternalFunctions.generated.h"

/**
 * 
 */
UCLASS()
class VNM_API UMemoryInternalFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Character Memory
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetCharacterMemoryBoolValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, bool& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetCharacterMemoryIntegerValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, int32& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetCharacterMemoryInteger64Value(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, int64& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetCharacterMemoryFloatValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, float& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetCharacterMemoryStringValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, FString& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetCharacterMemoryByteValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, uint8& Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetCharacterMemoryBoolValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, bool Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetCharacterMemoryIntegerValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, int32 Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetCharacterMemoryInteger64Value(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, int64 Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetCharacterMemoryFloatValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, float Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetCharacterMemoryStringValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, FString Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetCharacterMemoryByteValue(UObject* WorldContextObject, FName CharacterId, FName CharacterMemoryId, uint8 Value);

	// Dialog Memory
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetDialogMemoryBoolValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, bool& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetDialogMemoryIntegerValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, int32& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetDialogMemoryInteger64Value(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, int64& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetDialogMemoryFloatValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, float& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetDialogMemoryStringValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, FString& Value);
	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void GetDialogMemoryByteValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, uint8& Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetDialogMemoryBoolValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, bool Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetDialogMemoryIntegerValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, int32 Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetDialogMemoryInteger64Value(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, int64 Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetDialogMemoryFloatValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, float Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetDialogMemoryStringValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, FString Value);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"), Category = "Visual Novel Machinery")
	static void SetDialogMemoryByteValue(UObject* WorldContextObject, FName DialogId, FName DialogMemoryId, uint8 Value);
};
