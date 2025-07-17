// Copyright (c) 2022 Al_Fe


#include "DialogScenesGraph.h"

#if WITH_EDITOR
#include "DialogObjectNodesUtils.h"
#endif
#include "VNMChoiceGraphSettings.h"
#include "Engine/Font.h"
#include "UObject/ConstructorHelpers.h"

#define LOCTEXT_NAMESPACE "VNM"

UDialogScenesGraph::UDialogScenesGraph()
{
	bIsVariable = true;
	SetVisibility(ESlateVisibility::Visible);

	if (!IsRunningDedicatedServer())
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(*GetDefaultFontName());
		ChoicesFont = FSlateFontInfo(RobotoFontObj.Object, 24, FName("Bold"));
	}
}

void UDialogScenesGraph::PostInitProperties()
{
	Super::PostInitProperties();
}

void UDialogScenesGraph::SetChoicesFont(const FSlateFontInfo& InChoicesFont)
{
	ChoicesFont = InChoicesFont;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoicesFont(ChoicesFont);
	}
}

void UDialogScenesGraph::SetChoiceBoxStyles(const TArray<FChoiceBoxStyle>& InChoiceBoxStyles)
{
	ChoiceBoxStyles = InChoiceBoxStyles;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoiceBoxStyles(ChoiceBoxStyles);
	}
}

void UDialogScenesGraph::SetChoiceOutputPinsImage(const FSlateBrush& InChoiceOutputPinsImage)
{
	ChoiceOutputPinsImage = InChoiceOutputPinsImage;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoiceOutputPinsImage(&ChoiceOutputPinsImage);
	}
}

void UDialogScenesGraph::SetChoiceInputPinImage(const FSlateBrush& InChoiceInputPinImage)
{
	ChoiceInputPinImage = InChoiceInputPinImage;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoiceInputPinImage(&ChoiceInputPinImage);
	}
}

void UDialogScenesGraph::SetPortalNodeColors(const TArray<FLinearColor>& InPortalNodeColors)
{
	PortalNodeColors = InPortalNodeColors;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetPortalNodeColors(PortalNodeColors);
	}
}

void UDialogScenesGraph::SetLineStyle(const FLineStyle& InLineStyle)
{
	LineStyle = InLineStyle;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetLineStyle(LineStyle);
	}
}

void UDialogScenesGraph::SetBoxPadding(const FMargin& InBoxPadding)
{
	BoxPadding = InBoxPadding;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetBoxPadding(BoxPadding);
	}
}

void UDialogScenesGraph::SetBoxMargin(const FMargin& InBoxMargin)
{
	BoxMargin = InBoxMargin;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetBoxMargin(BoxMargin);
	}
}

void UDialogScenesGraph::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	
	
	SetChoicesFont(ChoicesFont);
	SetChoiceBoxStyles(ChoiceBoxStyles);
	SetBoxPadding(BoxPadding);
	SetBoxMargin(BoxMargin);
	SetChoiceInputPinImage(ChoiceInputPinImage);
	SetChoiceOutputPinsImage(ChoiceOutputPinsImage);
	SetPortalNodeColors(PortalNodeColors);
	SetLineStyle(LineStyle);

	UVNMChoiceGraphSettings* Settings = UVNMChoiceGraphSettings::GetVNMChoiceGraphSettings();
	if (MyChoiceGraph.IsValid() && Settings && Settings->Settings.DialogScenesData)
	{
		MyChoiceGraph->SetChoices(Settings->Settings.DialogScenesData->ScenesData);
	}
}

void UDialogScenesGraph::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	MyChoiceGraph.Reset();
}

#if WITH_EDITOR
const FText UDialogScenesGraph::GetPaletteCategory()
{
	return LOCTEXT("VNM", "VNM");
}
#endif

void UDialogScenesGraph::ReceiveSceneClick(const FString& SceneId, EChoiceType Type)
{
	OnSceneClicked.Broadcast(SceneId);
}

TSharedRef<SWidget> UDialogScenesGraph::RebuildWidget()
{
	MyChoiceGraph =
		SNew(SChoiceGraph)
		.ChoicesFont(ChoicesFont)
		.BoxPadding(BoxPadding)
		.BoxMargin(BoxMargin)
		.ChoiceBoxStyles(ChoiceBoxStyles)
		.ChoiceInputPinImage(&ChoiceInputPinImage)
		.ChoiceOutputPinsImage(&ChoiceOutputPinsImage)
		.LineStyle(LineStyle)
		.OnChoiceClicked_UObject(this, &UDialogScenesGraph::ReceiveSceneClick)
	;	

	SetPortalNodeColors(PortalNodeColors);

	UVNMChoiceGraphSettings* Settings = UVNMChoiceGraphSettings::GetVNMChoiceGraphSettings();
	if (MyChoiceGraph.IsValid() && Settings && Settings->Settings.DialogScenesData)
	{
		MyChoiceGraph->SetChoices(Settings->Settings.DialogScenesData->ScenesData);
	}
	
	return MyChoiceGraph.ToSharedRef();
}

#undef LOCTEXT_NAMESPACE