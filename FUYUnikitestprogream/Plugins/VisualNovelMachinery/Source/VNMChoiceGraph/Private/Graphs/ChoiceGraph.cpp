// Copyright (c) 2022 Al_Fe


#include "ChoiceGraph.h"

#include "GameSaveSubsystem.h"
#include "Engine/Font.h"
#include "Engine/GameInstance.h"
#include "UObject/ConstructorHelpers.h"

#define LOCTEXT_NAMESPACE "VNM"

UChoiceGraph::UChoiceGraph()
{
	bIsVariable = true;
	SetVisibility(ESlateVisibility::Visible);

	if (!IsRunningDedicatedServer())
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(*GetDefaultFontName());
		ChoicesFont = FSlateFontInfo(RobotoFontObj.Object, 24, FName("Bold"));
	}
}

void UChoiceGraph::SetChoices(const FDialogData& InChoices)
{
	Choices = InChoices;
	ProcessChoices();
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoices(Choices);
	}
}

void UChoiceGraph::SetChoicesFont(const FSlateFontInfo& InChoicesFont)
{
	ChoicesFont = InChoicesFont;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoicesFont(ChoicesFont);
	}
}

void UChoiceGraph::SetChoiceBoxStyles(const TArray<FChoiceBoxStyle>& InChoiceBoxStyles)
{
	ChoiceBoxStyles = InChoiceBoxStyles;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoiceBoxStyles(ChoiceBoxStyles);
	}
}

void UChoiceGraph::SetChoiceOutputPinsImage(const FSlateBrush& InChoiceOutputPinsImage)
{
	ChoiceOutputPinsImage = InChoiceOutputPinsImage;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoiceOutputPinsImage(&ChoiceOutputPinsImage);
	}
}

void UChoiceGraph::SetChoiceInputPinImage(const FSlateBrush& InChoiceInputPinImage)
{
	ChoiceInputPinImage = InChoiceInputPinImage;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetChoiceInputPinImage(&ChoiceInputPinImage);
	}
}

void UChoiceGraph::SetPortalNodeColors(const TArray<FLinearColor>& InPortalNodeColors)
{
	PortalNodeColors = InPortalNodeColors;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetPortalNodeColors(PortalNodeColors);
	}
}

void UChoiceGraph::SetLineStyle(const FLineStyle& InLineStyle)
{
	LineStyle = InLineStyle;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetLineStyle(LineStyle);
	}
}

void UChoiceGraph::SetBoxPadding(const FMargin& InBoxPadding)
{
	BoxPadding = InBoxPadding;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetBoxPadding(BoxPadding);
	}
}

void UChoiceGraph::SetBoxMargin(const FMargin& InBoxMargin)
{
	BoxMargin = InBoxMargin;
	if (MyChoiceGraph.IsValid())
	{
		MyChoiceGraph->SetBoxMargin(BoxMargin);
	}
}

void UChoiceGraph::SynchronizeProperties()
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
	SetChoices(Choices);
}

void UChoiceGraph::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyChoiceGraph.Reset();
}

#if WITH_EDITOR
const FText UChoiceGraph::GetPaletteCategory()
{
	return LOCTEXT("VNM", "VNM");
}
#endif

void UChoiceGraph::ReceiveChoiceClicked(const FString& ChoiceId, EChoiceType Type)
{
	OnChoiceClicked.Broadcast(ChoiceId, Type);
}

void UChoiceGraph::ProcessChoices()
{
	if (!GetGameInstance())
	{
		return;
	}
	
	auto* GameSaveSubsystem = GetGameInstance()->GetSubsystem<UGameSaveSubsystem>();

	if (!GameSaveSubsystem)
	{
		return;
	}

	auto* PersistantData = GameSaveSubsystem->GetPersistantSaveGame();

	if (!PersistantData)
	{
		return;
	}	

	for (auto& Column: Choices.ChoicesColumns)
	{
		for (auto& ChoicePair: Column.Choices)
		{
			if (ChoicePair.Value.ChoiceType != EChoiceType::CHOICE)
			{
				continue;
			}
			
			if (PersistantData->SeenChoiceIds.Contains(ChoicePair.Key))
			{
				continue;	
			}

			for (auto& Option: ChoicePair.Value.Options)
			{
				if (Option.ChoiceText.IsEmpty())
				{
					continue;
				}
				Option.ChoiceText = FText::FromString(TEXT("???"));
			}
		}
	}
}


TSharedRef<SWidget> UChoiceGraph::RebuildWidget()
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
		.OnChoiceClicked_UObject(this, &UChoiceGraph::ReceiveChoiceClicked)
	;

	SetPortalNodeColors(PortalNodeColors);

	if (DisplayedDialogObjectClass)
	{
		auto* DialogObject = DisplayedDialogObjectClass->GetDefaultObject<UDialogObject>();

		if (DialogObject)
		{
			SetChoices(DialogObject->GetChoices());
		}
	}
	
	return MyChoiceGraph.ToSharedRef();
}

#undef LOCTEXT_NAMESPACE