// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "AdvancedImageLayer.generated.h"

USTRUCT(BlueprintType)
struct FAdvancedImageLayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Appearance)
	FSlateBrush Brush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Appearanc)
	FSlateColor ColorAndOpacity;
};


FORCEINLINE bool operator==(const FAdvancedImageLayer& l, const FAdvancedImageLayer& r)
{
	return l.Brush == r.Brush && l.ColorAndOpacity == r.ColorAndOpacity;
}