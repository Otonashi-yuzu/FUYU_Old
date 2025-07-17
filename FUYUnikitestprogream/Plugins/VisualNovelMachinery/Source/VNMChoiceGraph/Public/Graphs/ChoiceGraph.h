// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"

#include "DialogObject.h"
#include "GraphLineStyle.h"
#include "SChoiceGraph.h"
#include "Components/Widget.h"
#include "ChoiceGraph.generated.h"

/**
 * 
 */
UCLASS()
class VNMCHOICEGRAPH_API UChoiceGraph : public UWidget
{
	GENERATED_BODY()

public:

	UChoiceGraph();

	UFUNCTION(BlueprintCallable, Category=Functionality)
	void SetChoices(const FDialogData& InChoices);
	
	void SetChoicesFont(const FSlateFontInfo& InChoicesFont);
	void SetChoiceBoxStyles(const TArray<FChoiceBoxStyle>& InChoiceBoxStyles);
	void SetChoiceOutputPinsImage(const FSlateBrush& InChoiceOutputPinsImage);
	void SetChoiceInputPinImage(const FSlateBrush& InChoiceInputPinImage);
	void SetPortalNodeColors(const TArray<FLinearColor>& InPortalNodeColors);
	void SetLineStyle(const FLineStyle& InLineStyle);
	void SetBoxPadding(const FMargin& InBoxPadding);
	void SetBoxMargin(const FMargin& InBoxMargin);

	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FOnChoiceClicked, const FString&, ChoiceId, EChoiceType, ChoiceType);

	UPROPERTY(BlueprintAssignable)
	FOnChoiceClicked OnChoiceClicked;
	
	// UWidget interface
	virtual void SynchronizeProperties() override;
	// End of UWidget interface

	// UVisual interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	// End of UVisual interface

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

protected:
	
	void ReceiveChoiceClicked(const FString& ChoiceId, EChoiceType Type);

	void ProcessChoices();
	
    TSharedPtr<SChoiceGraph> MyChoiceGraph;
	FDialogData Choices;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Functionality)
	TSubclassOf<UDialogObject> DisplayedDialogObjectClass;
	
	/** Sets the font used to draw the text */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Text")
	FSlateFontInfo ChoicesFont;

	
	/** Image to draw */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Images", meta=(TitleProperty="Type"))
	TArray<FChoiceBoxStyle> ChoiceBoxStyles;
	
	/** Image to draw */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Images")
	FSlateBrush ChoiceOutputPinsImage;
	
	/** Image to draw */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Images")
	FSlateBrush ChoiceInputPinImage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Images")
	TArray<FLinearColor> PortalNodeColors;

	
	/** The amount of padding between the boxes in the choice graph. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Layout")
	FMargin BoxPadding;
	
	/** The amount of margin between the boxes in the choice graph. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Layout")
	FMargin BoxMargin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Appearance|Connection Lines")
	FLineStyle LineStyle;

	// UWidget interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	// End of UWidget interface

	
};
