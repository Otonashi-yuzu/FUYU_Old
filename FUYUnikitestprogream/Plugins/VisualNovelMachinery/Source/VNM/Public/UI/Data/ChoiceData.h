// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "ChoiceData.generated.h"

UENUM(BlueprintType)
enum class EChoiceType : uint8
{
	INVALID,
	CHOICE,
	END,
	BRANCH,
	CONNECTOR,
	START,
	LOOP_PORTAL_START,
	LOOP_PORTAL_END,
	SCENE
};

USTRUCT(BlueprintType)
struct FOptionData
{
	GENERATED_BODY()
	
	UPROPERTY()
	FText ChoiceText;

	UPROPERTY()
	FString NextChoiceId;
	
	friend FArchive& operator<<(FArchive& Ar, FOptionData& V)
	{
		Ar << V.ChoiceText;
		Ar << V.NextChoiceId;

		return Ar;
	}
};

USTRUCT(BlueprintType)
struct FChoiceData
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString ChoiceId;

	UPROPERTY()
	EChoiceType ChoiceType = EChoiceType::CHOICE;

	UPROPERTY()
	FVector2D Size = FVector2D::ZeroVector;
	
	UPROPERTY()
	TArray<FOptionData> Options;
	
	friend FArchive& operator<<(FArchive& Ar, FChoiceData& V)
	{
		Ar << V.ChoiceId;
		Ar << V.ChoiceType;
		Ar << V.Size;
		Ar << V.Options;

		return Ar;
	}

	bool ReferencesChoiceId(const FString& InChoiceId) const
	{		
		for (const auto& Option: Options)
		{
			if (Option.NextChoiceId == InChoiceId)
			{
				return true;
			}
		}

		return false;
	}

	bool IsValid() const
	{
		return !ChoiceId.IsEmpty();
	}
};

USTRUCT(BlueprintType)
struct FChoicesColumn
{
	GENERATED_BODY()
	
	UPROPERTY()
	TMap<FString, FChoiceData> Choices; // Choice Id to Choice Data
	
	UPROPERTY()
	TArray<FChoiceData> PortalEntrances;
	
	UPROPERTY()
	FVector2D Size = FVector2D::ZeroVector;
	
	friend FArchive& operator<<(FArchive& Ar, FChoicesColumn& V)
	{
		Ar << V.Choices;
		Ar << V.PortalEntrances;
		Ar << V.Size;

		return Ar;
	}

	bool ContainsChoiceId(const FString& ChoiceId) const
	{
		return Choices.Contains(ChoiceId);
	}

	bool ReferencesChoiceId(const FString& ChoiceId) const
	{
		for (const auto& Choice: Choices)
		{
			if (Choice.Value.ReferencesChoiceId(ChoiceId))
			{
				return true;
			}
		}

		return false;
	}

	FString GetChoiceIdReferencingChoiceId(const FString& ChoiceId) const
	{
		for (const auto& Choice: Choices)
		{
			if (Choice.Value.ReferencesChoiceId(ChoiceId))
			{
				return Choice.Key;
			}
		}

		return TEXT("");
	}
};

USTRUCT(BlueprintType)
struct FDialogData
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<FChoicesColumn> ChoicesColumns;
	
	UPROPERTY()
	TArray<FChoiceData> PortalExits;

	friend FArchive& operator<<(FArchive& Ar, FDialogData& V)
	{
		Ar << V.ChoicesColumns;
		Ar << V.PortalExits;

		return Ar;
	}

	bool ContainsChoiceId(const FString& ChoiceId)
	{
		for (const auto& ChoiceColumn: ChoicesColumns)
		{
			if (ChoiceColumn.ContainsChoiceId(ChoiceId))
			{
				return true;
			}
		}

		return false;
	}

	TArray<FString> GetChoiceIds() const
	{
		TArray<FString> ChoiceIds;

		for (const auto& ChoiceColumn: ChoicesColumns)
		{
			TArray<FString> ColumnChoiceIds;
			ChoiceColumn.Choices.GetKeys(ColumnChoiceIds);
			ChoiceIds.Append(ColumnChoiceIds);
		}

		return ChoiceIds;
	}

	FChoiceData GetChoiceDataByChoiceId(const FString& ChoiceId) const
	{
		for (const auto& ChoiceColumn: ChoicesColumns)
		{
			if (ChoiceColumn.ContainsChoiceId(ChoiceId))
			{
				return ChoiceColumn.Choices[ChoiceId];
			}
		}

		return FChoiceData();
	}

	int32 GetColumnIndexOfColumnContainingChoiceId(const FString& ChoiceId) const
	{
		for (int32 i = 0; i < ChoicesColumns.Num(); i++)
		{
			if (ChoicesColumns[i].ContainsChoiceId(ChoiceId))
			{
				return i;
			}
		}

		return INDEX_NONE;
	}

	FChoicesColumn GetColumnContainingChoiceId(const FString& ChoiceId) const
	{
		for (int32 i = 0; i < ChoicesColumns.Num(); i++)
		{
			if (ChoicesColumns[i].ContainsChoiceId(ChoiceId))
			{
				return ChoicesColumns[i];
			}
		}

		return FChoicesColumn();
	}

	FString GetChoiceIdReferencingChoiceId(const FString& ChoiceId) const
	{
		for (const auto& Column: ChoicesColumns)
		{
			FString FoundChoiceId = Column.GetChoiceIdReferencingChoiceId(ChoiceId);
			if (!FoundChoiceId.IsEmpty())
			{
				return FoundChoiceId;
			}
		}

		return TEXT("");
	}
};
