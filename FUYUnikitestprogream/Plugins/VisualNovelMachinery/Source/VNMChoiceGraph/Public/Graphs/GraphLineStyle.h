// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "GraphLineStyle.generated.h"


USTRUCT(BlueprintType)
struct FLineStyle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	float LineThickness = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	FLinearColor LineColor = FLinearColor::White;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	bool bLineHasOutline = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance, meta=(EditCondition="bLineHasOutline", EditConditionHides))
	float LineOutlineThickness = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance, meta=(EditCondition="bLineHasOutline", EditConditionHides))
	FLinearColor LineOutlineColor = FLinearColor::Black;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	bool bLineHasShadow = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance, meta=(EditCondition="bLineHasShadow", EditConditionHides))
	FVector2D LineShadowOffset = FVector2D(0.f, 0.f);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance, meta=(EditCondition="bLineHasShadow", EditConditionHides))
	FLinearColor LineShadowColor = FLinearColor::Black;
};