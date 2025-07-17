// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "ChoiceBox.h"
#include "GraphLineStyle.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Styling/SlateTypes.h"
#include "Styling/CoreStyle.h"

#include "Data/ChoiceData.h"
#include "Widgets/SLeafWidget.h"

struct FColumnBox
{
	FVector2D Size;
	FVector2D Position;
};


/**
 * 
 */
class VNMCHOICEGRAPH_API SChoiceGraph : public SLeafWidget
{
public:
	
	// void OnChoiceClicked(const FString& ChoiceId, EChoiceType Type)
	DECLARE_DELEGATE_TwoParams( FOnChoiceClicked, const FString&, EChoiceType)
	
	SLATE_BEGIN_ARGS(SChoiceGraph)
		: _ChoicesFont()
		, _ChoiceOutputPinsImage( FCoreStyle::Get().GetDefaultBrush() )
		, _ChoiceInputPinImage( FCoreStyle::Get().GetDefaultBrush() )
		, _BoxPadding()
		, _BoxMargin()
		, _LineStyle()
		{}
		
	
		/** Sets the font used to draw the text */
		SLATE_ATTRIBUTE( FSlateFontInfo, ChoicesFont )
	
		/** Choice Background Image resource */
		SLATE_ARGUMENT(TArray<FChoiceBoxStyle>, ChoiceBoxStyles)
	
		/** Choice Background Image resource */
		SLATE_ATTRIBUTE( const FSlateBrush*, ChoiceOutputPinsImage )
	
		/** Choice Background Image resource */
		SLATE_ATTRIBUTE( const FSlateBrush*, ChoiceInputPinImage )
	
		/** Choice Background Image resource */
		SLATE_ATTRIBUTE( FMargin, BoxPadding )
	
		/** Choice Background Image resource */
		SLATE_ATTRIBUTE( FMargin, BoxMargin )
	
		/** Choice Background Image resource */
		SLATE_ARGUMENT( FLineStyle, LineStyle )
	
		/** Called when the button is clicked */
		SLATE_EVENT( FOnChoiceClicked, OnChoiceClicked )

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	void SetChoices(const FDialogData& InChoices);

	void SetChoicesFont(const TAttribute< FSlateFontInfo >& ChoicesFontInfo);
	void SetBoxPadding(const TAttribute< FMargin >& InBoxPadding);
	void SetBoxMargin(const TAttribute< FMargin >& InBoxMargin);
	/** See the Image attribute */
	void SetChoiceBoxStyles(const TArray<FChoiceBoxStyle>& InChoiceBoxStyles);
	void SetChoiceOutputPinsImage(TAttribute<const FSlateBrush*> InChoiceOutputPinsImage);
	void SetChoiceInputPinImage(TAttribute<const FSlateBrush*> InChoiceInputPinImage);
	void SetPortalNodeColors(TArray<FLinearColor> InPortalNodeColors);
	void SetLineStyle(const FLineStyle& InLineStyle);

	
	// SWidget interface
	virtual int32 OnPaint( const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled ) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	
	virtual FReply OnMouseButtonDown( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	// End of SWidget interface

protected:
	FDialogData Choices;

	FVector2D GetTextSize(const FString& InText) const;

	void GenerateChoiceBoxes();
	FChoiceBox CreateChoiceBox(const FChoiceData& Choice, const FVector2D& Position, const int32 ColumnIndex);
	void DrawChoiceBox(const FChoiceBox& ChoiceBox, const FGeometry& AllottedGeometry,FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle) const;
	void DrawChoiceConnectionLine(const FVector2D& StartPosition, const FVector2D& EndPosition, const FGeometry& AllottedGeometry,FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle) const;
	void DrawComplexChoiceConnectionLine(const TArray<FVector2D>& Positions, const FGeometry& AllottedGeometry,FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle) const;

private:
	
	/** The delegate to execute when the button is clicked */
	FOnChoiceClicked OnChoiceClicked;
	
	/** Sets the font used to draw the text */
	TAttribute< FSlateFontInfo > ChoicesFont;

	TMap<EChoiceType, FChoiceBoxStyle> ChoiceBoxStyles;

	/** The slate brush to draw for the image that we can invalidate. */
	FInvalidatableBrushAttribute ChoiceOutputPinsBrush;

	/** The slate brush to draw for the image that we can invalidate. */
	FInvalidatableBrushAttribute ChoiceInputPinBrush;

	/** The amount of padding between the boxes in the choice graph. */
	TAttribute<FMargin> BoxPadding;

	/** The amount of Margin between the boxes in the choice graph. */
	TAttribute<FMargin> BoxMargin;

	TArray<FLinearColor> PortalNodeColors;
	
	FLineStyle LineStyle;

	TMap<FString, FChoiceBox> ChoiceBoxes;
	TArray<FColumnBox> ColumnBoxes;

	FString HoveredChoiceId;

	float CachedTextHeight = 0.f;
};
