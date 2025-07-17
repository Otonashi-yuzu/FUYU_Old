// Copyright (c) 2022 Al_Fe

#pragma once


#include "CoreMinimal.h"
#include "ChoiceData.h"
#include "Styling/SlateBrush.h"

#include "ChoiceBox.generated.h"

UENUM(BlueprintType)
enum class EChoiceBoxState : uint8
{
	IDLE,
	HOVERED,
	PRESSED
};

USTRUCT(BlueprintType)
struct FChoiceBoxStyle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	EChoiceType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	TMap<EChoiceBoxState, FSlateBrush> StylePerState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	FSlateBrush DefaultStyle;
};

struct FOptionBox
{
	FVector2D OptionTextPosition;
	FVector2D OptionTextSize;
	FText OptionText;
	
	FVector2D OptionPinPosition;
};

struct FChoiceBox
{
	FChoiceData Data;

	// Text Position
	TArray<FOptionBox> OptionBoxes;

	FVector2D ChoiceInputPinPosition;

	FVector2D Position;
	FVector2D Size;

	int32 ColumnIndex;

	FText Title;
	FVector2D TitleTextPosition;
	FVector2D TitleTextSize;
	
	EChoiceBoxState State = EChoiceBoxState::IDLE;

	bool IsPointInside(const FVector2D& Point) const
	{
		const FBox2D Bounds(Position, Position+Size);

		return Bounds.IsInside(Point);
	}

};