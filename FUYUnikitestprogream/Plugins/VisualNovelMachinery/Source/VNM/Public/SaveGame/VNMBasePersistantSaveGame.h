// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"

#include "VNMBasePersistantSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameScreenshot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Screenshot")
	TArray<FColor> Colors;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Screenshot")
	int32 Width;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Screenshot")
	int32 Height;
	
};

USTRUCT(BlueprintType)
struct FSaveGameMetaData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Meta Data")
	FSaveGameScreenshot Screenshot;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Meta Data")
	FString SaveName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Meta Data")
	FString SaveFileName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Meta Data")
	int32 SlotIndex = INDEX_NONE;

	bool IsValid() const
	{
		return SlotIndex != INDEX_NONE && Screenshot.Colors.Num() > 0 && UGameplayStatics::DoesSaveGameExist(SaveFileName, 0);
	}
};

UCLASS(Blueprintable, BlueprintType)
class UVNMBasePersistantSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TArray<FString> SeenChoiceIds;
	
	UPROPERTY()
	TArray<FString> SeenCgIds;
	
	UPROPERTY(BlueprintReadOnly, Category="Save System")
	TArray<FSaveGameMetaData> SaveGameMetaDatas;
	
	UPROPERTY(BlueprintReadOnly, Category="Save System")
	TArray<FSaveGameMetaData> AutoSaveGameMetaDatas;
};
