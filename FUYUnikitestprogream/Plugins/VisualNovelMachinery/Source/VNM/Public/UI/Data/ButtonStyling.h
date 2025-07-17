#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Fonts/SlateFontInfo.h"
#include "Slate/WidgetTransform.h"
#include "ButtonStyling.generated.h"

USTRUCT(BlueprintType)
struct FButtonStyling
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* IdleTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* HoveredTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* PressedTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* SelectedTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* SelectedHoveredTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* SelectedPressedTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	UTexture2D* LockedTexture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor IdleColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor HoveredColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor PressedColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor SelectedColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor SelectedHoveredColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor SelectedPressedColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Background)
	FLinearColor LockedColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform IdleTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform HoveredTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform PressedTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform SelectedTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform SelectedHoveredTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform SelectedPressedTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform LockedTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo IdleTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo HoveredTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo PressedTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo SelectedTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo SelectedHoveredTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo SelectedPressedTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FSlateFontInfo LockedTextFont;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor IdleTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor HoveredTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor PressedTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor SelectedTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor SelectedHoveredTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor SelectedPressedTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FLinearColor LockedTextColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform IdleTextTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform HoveredTextTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform PressedTextTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform SelectedTextTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform SelectedHoveredTextTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform SelectedPressedTextTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Text)
	FWidgetTransform LockedTextTransform;
};
