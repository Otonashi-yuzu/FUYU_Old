// Copyright (c) 2022 Al_Fe


#include "SChoiceGraph.h"

#include "SlateOptMacros.h"
#include "VNMSettings.h"
#include "Fonts/FontMeasure.h"
#include "Framework/Application/SlateApplication.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SChoiceGraph::Construct(const FArguments& InArgs)
{
	OnChoiceClicked = InArgs._OnChoiceClicked;
	SetChoicesFont(InArgs._ChoicesFont);
	SetChoiceBoxStyles(InArgs._ChoiceBoxStyles);
	SetChoiceInputPinImage(InArgs._ChoiceInputPinImage);
	SetChoiceOutputPinsImage(InArgs._ChoiceOutputPinsImage);
	SetBoxPadding(InArgs._BoxPadding);
	SetBoxMargin(InArgs._BoxMargin);
	SetLineStyle(InArgs._LineStyle);
}

void SChoiceGraph::SetChoices(const FDialogData& InChoices)
{
	Choices = InChoices;
	
	FVector2D PortalEntranceImageSize = FVector2D::ZeroVector;
	if (ChoiceBoxStyles.Contains(EChoiceType::LOOP_PORTAL_START))
	{
		const FChoiceBoxStyle PortalStyle = ChoiceBoxStyles[EChoiceType::LOOP_PORTAL_START];
		if (PortalStyle.StylePerState.Contains(EChoiceBoxState::IDLE))
		{
			PortalEntranceImageSize = PortalStyle.StylePerState[EChoiceBoxState::IDLE].GetImageSize();
		}
		else
		{
			PortalEntranceImageSize = PortalStyle.DefaultStyle.GetImageSize();
		}
	}	
	
	for (auto& Column: Choices.ChoicesColumns)
	{
		for (auto& Choice: Column.Choices)
		{
			FVector2D ChoiceSize = FVector2D::ZeroVector;
			
			for (const auto& Option: Choice.Value.Options)
			{
				const FVector2D TextSize = GetTextSize(Option.ChoiceText.ToString());

				ChoiceSize.X = FMath::Max(ChoiceSize.X, TextSize.X);
				ChoiceSize.Y += TextSize.Y;
			}

			if (Choice.Value.ChoiceType == EChoiceType::SCENE)
			{
				FDialogDefinition DialogDefinition = UVNMSettings::GetVNMSettings()->GetDialogDefinitionById(*Choice.Key);

				if (DialogDefinition.IsValid())
				{
					const FVector2D TextSize = GetTextSize(DialogDefinition.DialogTitle.ToString());

					ChoiceSize.X = TextSize.X;
					ChoiceSize.Y += TextSize.Y;
				}
			}

			Choice.Value.Size = ChoiceSize;
			
			Column.Size.X = FMath::Max(Choice.Value.Size.X, Column.Size.X);
			Column.Size.Y += Choice.Value.Size.Y;
		}
		for (auto& Choice: Column.Choices)
		{
			if (Choice.Value.ChoiceType == EChoiceType::CONNECTOR)
			{
				Choice.Value.Size.X = Column.Size.X;
			}
		}
		
		for (auto& PortalEntrance: Column.PortalEntrances)
		{	
			PortalEntrance.Size = PortalEntranceImageSize;
		}
	}
	
	FVector2D PortalExitImageSize = FVector2D::ZeroVector;
	if (ChoiceBoxStyles.Contains(EChoiceType::LOOP_PORTAL_END))
	{
		const FChoiceBoxStyle PortalStyle = ChoiceBoxStyles[EChoiceType::LOOP_PORTAL_END];
		if (PortalStyle.StylePerState.Contains(EChoiceBoxState::IDLE))
		{
			PortalExitImageSize = PortalStyle.StylePerState[EChoiceBoxState::IDLE].GetImageSize();
		}
		else
		{
			PortalExitImageSize = PortalStyle.DefaultStyle.GetImageSize();
		}
	}

	for (auto& PortalExit: Choices.PortalExits)
	{
		PortalExit.Size = PortalExitImageSize;
	}
	
	GenerateChoiceBoxes();
} 

void SChoiceGraph::SetChoicesFont(const TAttribute< FSlateFontInfo >& ChoicesFontInfo)
{
	ChoicesFont = ChoicesFontInfo;
	CachedTextHeight = FSlateApplication::Get().GetRenderer()->GetFontMeasureService()->Measure(TEXT("Test"), ChoicesFont.Get()).Y;
}

void SChoiceGraph::SetBoxPadding(const TAttribute<FMargin>& InBoxPadding)
{
	BoxPadding = InBoxPadding;
	Invalidate(EInvalidateWidgetReason::Layout);
}

void SChoiceGraph::SetBoxMargin(const TAttribute<FMargin>& InBoxMargin)
{
	BoxMargin = InBoxMargin;
	Invalidate(EInvalidateWidgetReason::Layout);
}

void SChoiceGraph::SetChoiceBoxStyles(const TArray<FChoiceBoxStyle>& InChoiceBoxStyles)
{
	for (const auto& ChoiceBoxStyle: InChoiceBoxStyles)
	{
		if (ChoiceBoxStyles.Contains(ChoiceBoxStyle.Type))
		{
			ChoiceBoxStyles[ChoiceBoxStyle.Type] = ChoiceBoxStyle;
			continue;
		}

		ChoiceBoxStyles.Add(ChoiceBoxStyle.Type, ChoiceBoxStyle);
	}

	Invalidate(EInvalidateWidgetReason::Layout);
}

void SChoiceGraph::SetChoiceOutputPinsImage(TAttribute<const FSlateBrush*> InChoiceOutputPinsImage)
{
	ChoiceOutputPinsBrush.SetImage(*this, InChoiceOutputPinsImage);
}

void SChoiceGraph::SetChoiceInputPinImage(TAttribute<const FSlateBrush*> InChoiceInputPinImage)
{
	ChoiceInputPinBrush.SetImage(*this, InChoiceInputPinImage);
}

void SChoiceGraph::SetPortalNodeColors(TArray<FLinearColor> InPortalNodeColors)
{
	PortalNodeColors = InPortalNodeColors;
	Invalidate(EInvalidateWidgetReason::Paint);
}

void SChoiceGraph::SetLineStyle(const FLineStyle& InLineStyle)
{
	LineStyle = InLineStyle;
	Invalidate(EInvalidateWidgetReason::Paint);
}

int32 SChoiceGraph::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect,
                            FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle,
                            bool bParentEnabled) const
{
	for (const auto& ChoiceBoxPair: ChoiceBoxes)
	{
		const FChoiceBox& ChoiceBox = ChoiceBoxPair.Value;
		FColumnBox ColumnBox;

		if (ChoiceBox.ColumnIndex != INDEX_NONE)
		{
			ColumnBox = ColumnBoxes[ChoiceBox.ColumnIndex];
		}

		if (ChoiceBox.Data.ChoiceType == EChoiceType::LOOP_PORTAL_START)
		{
			// skip portal start nodes as it doesnt need a connection line (yet)
			continue;
		}
		
		for (int32 i = 0; i < ChoiceBox.Data.Options.Num(); i++)
		{
			const auto& Option = ChoiceBox.Data.Options[i];
			const auto& NextChoiceBoxId = Option.NextChoiceId;
			
			if (!NextChoiceBoxId.IsEmpty() && ChoiceBoxes.Contains(NextChoiceBoxId))
			{
				const FChoiceBox& NextChoiceBox = ChoiceBoxes[NextChoiceBoxId];

				if (NextChoiceBoxId != ChoiceBoxPair.Key)
				{
					TArray<FVector2D> Positions;
					Positions.Add(ChoiceBox.OptionBoxes[i].OptionPinPosition);

					if (ChoiceBox.ColumnIndex != INDEX_NONE && NextChoiceBox.Data.ChoiceType != EChoiceType::LOOP_PORTAL_START)
					{
						Positions.Add(FVector2D(ColumnBox.Position.X + ColumnBox.Size.X , ChoiceBox.OptionBoxes[i].OptionPinPosition.Y));
					}
					
					Positions.Add(NextChoiceBox.ChoiceInputPinPosition);
					
					DrawComplexChoiceConnectionLine(Positions, AllottedGeometry, OutDrawElements, LayerId, InWidgetStyle);
				}
				else
				{
					TArray<FVector2D> Positions;
					Positions.Add(ChoiceBox.OptionBoxes[i].OptionPinPosition);

					FVector2D BottomRightLinePosition = ChoiceBox.OptionBoxes[i].OptionPinPosition + FVector2D(20.f, 0.f);
					Positions.Add(BottomRightLinePosition);

					FVector2D TopRightLinePosition;
					TopRightLinePosition.X = BottomRightLinePosition.X;
					TopRightLinePosition.Y = ChoiceBox.Position.Y - 20.f;
					
					Positions.Add(TopRightLinePosition);
					
					FVector2D TopLeftLinePosition;
					TopLeftLinePosition.X = ChoiceBox.Position.X - 20.f;
					TopLeftLinePosition.Y = TopRightLinePosition.Y;
					
					Positions.Add(TopLeftLinePosition);
					
					FVector2D BottomLeftLinePosition = NextChoiceBox.ChoiceInputPinPosition - FVector2D(20.f, 0.f);
					Positions.Add(BottomLeftLinePosition);
					
					Positions.Add(NextChoiceBox.ChoiceInputPinPosition);
					
					DrawComplexChoiceConnectionLine(Positions, AllottedGeometry, OutDrawElements, LayerId, InWidgetStyle);
				}
			}
		}

	}
	
	for (const auto& ChoiceBoxPair: ChoiceBoxes)
	{
		DrawChoiceBox(ChoiceBoxPair.Value, AllottedGeometry, OutDrawElements, LayerId, InWidgetStyle);
	}
	
	return LayerId;
}

FVector2D SChoiceGraph::ComputeDesiredSize(float) const
{
	const FMargin& BoxPaddingValue = BoxPadding.Get();
	const FMargin& BoxMarginValue = BoxMargin.Get();
	
	FVector2D GraphSize = FVector2D::ZeroVector;
	for (auto& Column: Choices.ChoicesColumns)
	{
		FVector2D ColumnSize = FVector2D::ZeroVector;
		for (auto& Choice: Column.Choices)
		{
			const FVector2D ActualSize = Choice.Value.Size + BoxPaddingValue.GetDesiredSize() + BoxMarginValue.GetDesiredSize();

			ColumnSize.X = FMath::Max(ActualSize.X, ColumnSize.X);
			ColumnSize.Y += ActualSize.Y;
		}

		GraphSize.X += ColumnSize.X;
		GraphSize.Y = FMath::Max(GraphSize.Y, ColumnSize.Y);
	}
	return GraphSize;
}
FReply SChoiceGraph::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{	
	const FVector2D LocalCursorPosition = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());

	for (const auto& ChoiceBoxPair: ChoiceBoxes)
	{
		if (ChoiceBoxPair.Value.IsPointInside(LocalCursorPosition))
		{
			if (OnChoiceClicked.IsBound())
			{
				OnChoiceClicked.Execute(ChoiceBoxPair.Key, ChoiceBoxPair.Value.Data.ChoiceType);
				return FReply::Handled();
			}
		}
	}
	
	return FReply::Unhandled();
}

FReply SChoiceGraph::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	const FVector2D LocalCursorPosition = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());

	if (ChoiceBoxes.Contains(HoveredChoiceId))
	{
		if (ChoiceBoxes[HoveredChoiceId].IsPointInside(LocalCursorPosition))
		{
			return FReply::Handled();
		}

		ChoiceBoxes[HoveredChoiceId].State = EChoiceBoxState::IDLE;
		HoveredChoiceId = TEXT("");
	}

	for (auto& ChoiceBoxPair: ChoiceBoxes)
	{
		if (ChoiceBoxPair.Value.IsPointInside(LocalCursorPosition))
		{
			ChoiceBoxPair.Value.State = EChoiceBoxState::HOVERED;
			HoveredChoiceId = ChoiceBoxPair.Key;
			return FReply::Handled();
		}
	} 
	
	return FReply::Unhandled();
}

FVector2D SChoiceGraph::GetTextSize(const FString& InText) const
{
	return FSlateApplication::Get().GetRenderer()->GetFontMeasureService()->Measure(InText, ChoicesFont.Get());
}

void SChoiceGraph::GenerateChoiceBoxes()
{
	ChoiceBoxes.Empty();
	ColumnBoxes.Empty();

	FVector2D PortalEntranceImageSize = FVector2D::ZeroVector;
	if (ChoiceBoxStyles.Contains(EChoiceType::LOOP_PORTAL_START))
	{
		const FChoiceBoxStyle PortalStyle = ChoiceBoxStyles[EChoiceType::LOOP_PORTAL_START];
		if (PortalStyle.StylePerState.Contains(EChoiceBoxState::IDLE))
		{
			PortalEntranceImageSize = PortalStyle.StylePerState[EChoiceBoxState::IDLE].GetImageSize();
		}
		else
		{
			PortalEntranceImageSize = PortalStyle.DefaultStyle.GetImageSize();
		}
	}
	
	FVector2D PortalExitImageSize = FVector2D::ZeroVector;
	if (ChoiceBoxStyles.Contains(EChoiceType::LOOP_PORTAL_END))
	{
		const FChoiceBoxStyle PortalStyle = ChoiceBoxStyles[EChoiceType::LOOP_PORTAL_END];
		if (PortalStyle.StylePerState.Contains(EChoiceBoxState::IDLE))
		{
			PortalExitImageSize = PortalStyle.StylePerState[EChoiceBoxState::IDLE].GetImageSize();
		}
		else
		{
			PortalExitImageSize = PortalStyle.DefaultStyle.GetImageSize();
		}
	}
	
	FVector2D PreviousColumnPosition = FVector2D::ZeroVector;
	FVector2D PreviousColumnSize = FVector2D::ZeroVector;

	for (int32 i = 0; i < Choices.ChoicesColumns.Num(); i++)
	{
		const auto& Column = Choices.ChoicesColumns[i];
		FVector2D StartPosition = FVector2D(PreviousColumnPosition.X + PreviousColumnSize.X, 0.f);

		PreviousColumnPosition = FVector2D::ZeroVector;
		PreviousColumnSize = FVector2D::ZeroVector;
		
		FVector2D PreviousChoicePosition = FVector2D::ZeroVector;
		FVector2D PreviousChoiceSize = FVector2D::ZeroVector;
		bool bFirstRow = true;
		for (const auto& Choice: Column.Choices)
		{
			FChoiceBox ChoiceBox;
			if (bFirstRow)
			{
				bFirstRow = false;
				ChoiceBox = CreateChoiceBox(Choice.Value, FVector2D(StartPosition.X, PreviousChoicePosition.Y + PreviousChoiceSize.Y), i);
			}
			else
			{
				ChoiceBox = CreateChoiceBox(Choice.Value, FVector2D(StartPosition.X, PreviousChoicePosition.Y + PreviousChoiceSize.Y + BoxMargin.Get().Bottom), i);
			}

			PreviousChoicePosition = ChoiceBox.Position; // position inside margin
			PreviousChoiceSize = ChoiceBox.Size; // size without margin
			FVector2D ChoiceSizeWithMargin = ChoiceBox.Size + BoxMargin.Get().GetDesiredSize(); // size with margin
			
			PreviousColumnSize.X = FMath::Max(ChoiceSizeWithMargin.X, PreviousColumnSize.X);
			PreviousColumnSize.Y += ChoiceSizeWithMargin.Y;

			ChoiceBoxes.Add(Choice.Key, ChoiceBox);
		}

		PreviousColumnPosition = StartPosition;

		for (const auto& PortalEntrance: Column.PortalEntrances)
		{
			const FString ChoiceIdPointingAtPortal = Choices.GetChoiceIdReferencingChoiceId(PortalEntrance.ChoiceId);

			if (ChoiceIdPointingAtPortal.IsEmpty())
			{
				UE_LOG(LogSlate, Warning, TEXT("Portal Entrance node is being pointed at by something that doesn't exist!"));
				continue;
			}
		
			const auto& ChoiceBoxDirectedAtPortal = ChoiceBoxes[ChoiceIdPointingAtPortal];

			FVector2D PortalPosition = ChoiceBoxDirectedAtPortal.Position;
			PortalPosition.X += 20.f + ChoiceBoxDirectedAtPortal.Size.X;

			const int32 OptionIdx = ChoiceBoxDirectedAtPortal.Data.Options.IndexOfByPredicate([PortalEntrance](const FOptionData& OptionData)
			{
				return OptionData.NextChoiceId == PortalEntrance.ChoiceId;
			});
		
			if (OptionIdx == INDEX_NONE)
			{
				UE_LOG(LogSlate, Warning, TEXT("Portal Entrance node is not being pointed at by any option by the found choice supposingly pointing at it! If you get this error, please contact the developer!"));
				continue;
			}

			const FOptionBox& OptionBox = ChoiceBoxDirectedAtPortal.OptionBoxes[OptionIdx];

			PortalPosition.Y = OptionBox.OptionPinPosition.Y - (PortalEntranceImageSize.Y / 2);
		
			FChoiceBox ChoiceBox = CreateChoiceBox(PortalEntrance, PortalPosition, i);

			ChoiceBoxes.Add(PortalEntrance.ChoiceId, ChoiceBox);
		}

		FColumnBox ColumnBox;
		ColumnBox.Position = PreviousColumnPosition;
		ColumnBox.Size = PreviousColumnSize;

		ColumnBoxes.Add(ColumnBox);
	}	

	for (const auto& PortalExit: Choices.PortalExits)
	{
		if (!ChoiceBoxes.Contains(PortalExit.Options[0].NextChoiceId))
		{
			UE_LOG(LogSlate, Warning, TEXT("Portal Exit node is pointing at something that doesn't exist!"));
			continue;
		}
		
		const auto& PortalDirectedChoiceBox = ChoiceBoxes[PortalExit.Options[0].NextChoiceId];

		FVector2D PortalPosition = PortalDirectedChoiceBox.Position;
		PortalPosition.X -= (20.f + PortalExitImageSize.X);
		
		FChoiceBox ChoiceBox = CreateChoiceBox(PortalExit, PortalPosition, -1);

		ChoiceBoxes.Add(PortalExit.ChoiceId, ChoiceBox);
	}
}

FChoiceBox SChoiceGraph::CreateChoiceBox(const FChoiceData& Choice, const FVector2D& Position, const int32 ColumnIndex)
{
	const FMargin& BoxPaddingValue = BoxPadding.Get();
	const FMargin& BoxMarginValue = BoxMargin.Get();
	FVector2D ActualPosition = Position;
	FVector2D BoxSize = Choice.Size;
	if (Choice.ChoiceType != EChoiceType::LOOP_PORTAL_END && Choice.ChoiceType != EChoiceType::LOOP_PORTAL_START)
	{
		ActualPosition.X += BoxMarginValue.Left;
		ActualPosition.Y += BoxMarginValue.Top;
		BoxSize += BoxPaddingValue.GetDesiredSize();
	}
	
	FChoiceBox ChoiceBox;
	ChoiceBox.Data = Choice;
	ChoiceBox.Size = BoxSize;
	ChoiceBox.Position = ActualPosition;
	ChoiceBox.ChoiceInputPinPosition.X = ChoiceBox.Position.X;
	ChoiceBox.ChoiceInputPinPosition.Y = ChoiceBox.Position.Y + (ChoiceBox.Size.Y / 2);
	ChoiceBox.ColumnIndex = ColumnIndex;

	if (Choice.ChoiceType == EChoiceType::SCENE)
	{
		FDialogDefinition DialogDefinition = UVNMSettings::GetVNMSettings()->GetDialogDefinitionById(*Choice.ChoiceId);

		if (DialogDefinition.IsValid())
		{
			ChoiceBox.Title = DialogDefinition.DialogTitle;
			ChoiceBox.TitleTextPosition = FVector2D(ChoiceBox.Position.X + BoxPaddingValue.Left, ChoiceBox.Position.Y + BoxPaddingValue.Top);
			ChoiceBox.TitleTextSize = GetTextSize(DialogDefinition.DialogTitle.ToString());;
		}
	}

	if (Choice.ChoiceType == EChoiceType::CONNECTOR)
	{
		FOptionBox OptionBox;
		OptionBox.OptionTextPosition = FVector2D(ChoiceBox.Position.X + BoxPaddingValue.Left, ChoiceBox.Position.Y + BoxPaddingValue.Top);
		OptionBox.OptionPinPosition = FVector2D(ChoiceBox.Position.X + ChoiceBox.Size.X, OptionBox.OptionTextPosition.Y + (CachedTextHeight / 2));
		
		ChoiceBox.OptionBoxes.Add(OptionBox);
	}
	else if (Choice.ChoiceType == EChoiceType::LOOP_PORTAL_START || Choice.ChoiceType == EChoiceType::LOOP_PORTAL_END)
	{
		if (Choice.ChoiceType == EChoiceType::LOOP_PORTAL_END)
		{
			FOptionBox OptionBox;
			OptionBox.OptionPinPosition = FVector2D(ChoiceBox.Position.X + ChoiceBox.Size.X, ChoiceBox.Position.Y + (ChoiceBox.Size.Y / 2));
			ChoiceBox.OptionBoxes.Add(OptionBox);
		}
	}
	else
	{		
		for (int32 i = 0; i < Choice.Options.Num(); i++)
		{
			const auto& Option = Choice.Options[i];
			FOptionBox OptionBox;

			if (Choice.ChoiceType != EChoiceType::SCENE)
			{
				OptionBox.OptionText = Option.ChoiceText;
			}
			
			if (Choice.ChoiceType == EChoiceType::SCENE && !ChoiceBox.Title.IsEmpty())
			{
				OptionBox.OptionTextPosition = FVector2D(ChoiceBox.Position.X + BoxPaddingValue.Left, ChoiceBox.Position.Y + BoxPaddingValue.Top + CachedTextHeight * (i + 1));
			}
			else
			{
				OptionBox.OptionTextPosition = FVector2D(ChoiceBox.Position.X + BoxPaddingValue.Left, ChoiceBox.Position.Y + BoxPaddingValue.Top + CachedTextHeight * i);
			}
			
			OptionBox.OptionPinPosition = FVector2D(ChoiceBox.Position.X + ChoiceBox.Size.X, OptionBox.OptionTextPosition.Y + (CachedTextHeight / 2));
			OptionBox.OptionTextSize =  GetTextSize(Option.ChoiceText.ToString());
			ChoiceBox.OptionBoxes.Add(OptionBox);
		}
	}

	return ChoiceBox;
}


void SChoiceGraph::DrawChoiceBox(const FChoiceBox& ChoiceBox, const FGeometry& AllottedGeometry,
	FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle) const
{
	FSlateBrush BackgroundBrush;
	if (ChoiceBoxStyles.Contains(ChoiceBox.Data.ChoiceType))
	{
		const FChoiceBoxStyle ChoiceBoxStyle = ChoiceBoxStyles[ChoiceBox.Data.ChoiceType];
		if (ChoiceBoxStyle.StylePerState.Contains(ChoiceBox.State))
		{
			BackgroundBrush = ChoiceBoxStyle.StylePerState[ChoiceBox.State];
		}
		else
		{
			BackgroundBrush = ChoiceBoxStyle.DefaultStyle;
		}
	}
	
	const FSlateBrush* InputPinBrush = ChoiceInputPinBrush.GetImage().Get();
	const FSlateBrush* OutputPinsBrush = ChoiceOutputPinsBrush.GetImage().Get();
	
	if (ChoiceBox.Data.ChoiceType == EChoiceType::CONNECTOR)
	{
		DrawChoiceConnectionLine(ChoiceBox.ChoiceInputPinPosition, ChoiceBox.OptionBoxes[0].OptionPinPosition, AllottedGeometry, OutDrawElements, LayerId, InWidgetStyle);		
	}
	else if (ChoiceBox.Data.ChoiceType == EChoiceType::LOOP_PORTAL_START || ChoiceBox.Data.ChoiceType == EChoiceType::LOOP_PORTAL_END)
	{
		
		FString PortalExitId;
		if (ChoiceBox.Data.ChoiceType == EChoiceType::LOOP_PORTAL_END)
		{
			PortalExitId = ChoiceBox.Data.ChoiceId;
			
		}
		else
		{
			PortalExitId = ChoiceBox.Data.Options[0].NextChoiceId;
		}
		
		const int32 PortalExitIndex = Choices.PortalExits.IndexOfByPredicate([PortalExitId](const FChoiceData& Choice)
		{
			return Choice.ChoiceId == PortalExitId;
		});

		FLinearColor PortalColor = FLinearColor::White;
		if (PortalExitIndex != INDEX_NONE && PortalExitIndex < PortalNodeColors.Num())
		{
			PortalColor = PortalNodeColors[PortalExitIndex];
		}
		
		
		if (BackgroundBrush.DrawAs != ESlateBrushDrawType::NoDrawType)
		{
			const FLinearColor FinalColorAndOpacity = InWidgetStyle.GetColorAndOpacityTint() * BackgroundBrush.GetTint(InWidgetStyle) * PortalColor;

			FSlateDrawElement::MakeBox(OutDrawElements,
				LayerId,
				AllottedGeometry.ToPaintGeometry( ChoiceBox.Data.Size, FSlateLayoutTransform(ChoiceBox.Position)),
				&BackgroundBrush,
				ESlateDrawEffect::None,
				FinalColorAndOpacity);		
		}
	}
	else
	{
		if (BackgroundBrush.DrawAs != ESlateBrushDrawType::NoDrawType)
		{
			
			const FLinearColor FinalColorAndOpacity( InWidgetStyle.GetColorAndOpacityTint() * BackgroundBrush.GetTint( InWidgetStyle ) );
			FSlateDrawElement::MakeBox(OutDrawElements,
				LayerId,
				AllottedGeometry.ToPaintGeometry( ChoiceBox.Size, FSlateLayoutTransform(ChoiceBox.Position)),
				&BackgroundBrush,
				ESlateDrawEffect::None,
				FinalColorAndOpacity);		
		}
		
		if (InputPinBrush != nullptr && InputPinBrush->DrawAs != ESlateBrushDrawType::NoDrawType && ChoiceBox.Data.ChoiceType != EChoiceType::START)
		{
			const FLinearColor FinalColorAndOpacity( InWidgetStyle.GetColorAndOpacityTint() * InputPinBrush->GetTint( InWidgetStyle ) );
			FSlateDrawElement::MakeBox(OutDrawElements,
				LayerId,
				AllottedGeometry.ToPaintGeometry(InputPinBrush->ImageSize, FSlateLayoutTransform(ChoiceBox.ChoiceInputPinPosition - (InputPinBrush->ImageSize / 2))),
				InputPinBrush,
				ESlateDrawEffect::None,
				FinalColorAndOpacity);
		}

		if (ChoiceBox.Data.ChoiceType == EChoiceType::SCENE && !ChoiceBox.Title.IsEmpty())
		{
			FSlateDrawElement::MakeText(
				OutDrawElements,
				LayerId,
				AllottedGeometry.ToPaintGeometry(ChoiceBox.TitleTextSize, FSlateLayoutTransform(ChoiceBox.TitleTextPosition)),
				ChoiceBox.Title,
				ChoicesFont.Get());
		}
		
		for (const FOptionBox& OptionBox: ChoiceBox.OptionBoxes)
		{
			FSlateDrawElement::MakeText(
				OutDrawElements,
				LayerId,
				AllottedGeometry.ToPaintGeometry(OptionBox.OptionTextSize, FSlateLayoutTransform(OptionBox.OptionTextPosition)),
				OptionBox.OptionText,
				ChoicesFont.Get());

			if (OutputPinsBrush != nullptr && OutputPinsBrush->DrawAs != ESlateBrushDrawType::NoDrawType)
			{
				const FLinearColor FinalColorAndOpacity( InWidgetStyle.GetColorAndOpacityTint() * OutputPinsBrush->GetTint( InWidgetStyle ) );
				FSlateDrawElement::MakeBox(OutDrawElements,
					LayerId,
					AllottedGeometry.ToPaintGeometry(OutputPinsBrush->ImageSize, FSlateLayoutTransform(OptionBox.OptionPinPosition - (OutputPinsBrush->ImageSize / 2))),
					OutputPinsBrush,
					ESlateDrawEffect::None,
					FinalColorAndOpacity);
			}
		}
	}
}

void SChoiceGraph::DrawChoiceConnectionLine(const FVector2D& StartPosition, const FVector2D& EndPosition,
	const FGeometry& AllottedGeometry, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle) const
{
	const FVector2D LineBoxSize = FMath::Abs(StartPosition - EndPosition);

	TArray<FVector2D> Line;
	Line.Add(StartPosition);
	Line.Add(EndPosition);

	// Shadow
	if (LineStyle.bLineHasShadow)
	{
		float ShadowThickness = LineStyle.LineThickness;
		if (LineStyle.bLineHasOutline)
		{
			ShadowThickness += LineStyle.LineOutlineThickness;
		}

		TArray<FVector2D> ShadowLine;
		ShadowLine.Add(StartPosition + LineStyle.LineShadowOffset);
		ShadowLine.Add(EndPosition + LineStyle.LineShadowOffset);
		
		FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(LineBoxSize, FSlateLayoutTransform()), ShadowLine, ESlateDrawEffect::None, LineStyle.LineShadowColor, true,  ShadowThickness);
	}

	// Outline
	if (LineStyle.bLineHasOutline)
	{
		const float Thickness = LineStyle.LineThickness + LineStyle.LineOutlineThickness;
		FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(LineBoxSize, FSlateLayoutTransform()), Line, ESlateDrawEffect::None, LineStyle.LineOutlineColor, true,  Thickness);
	}

	// Line
	FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(LineBoxSize, FSlateLayoutTransform()), Line, ESlateDrawEffect::None, LineStyle.LineColor, true,  LineStyle.LineThickness);
}

void SChoiceGraph::DrawComplexChoiceConnectionLine(const TArray<FVector2D>& Positions,
	const FGeometry& AllottedGeometry, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle) const
{
	FVector2D MinPosition(TNumericLimits<float>::Max(), TNumericLimits<float>::Max());
	FVector2D MaxPosition(TNumericLimits<float>::Min(), TNumericLimits<float>::Min());

	for (const auto& Position: Positions)
	{
		MinPosition.X = FMath::Min(MinPosition.X, Position.X);
		MinPosition.Y = FMath::Min(MinPosition.Y, Position.Y);
		MaxPosition.X = FMath::Max(MaxPosition.X, Position.X);
		MaxPosition.Y = FMath::Max(MaxPosition.Y, Position.Y);
	}
	
	const FVector2D LineBoxSize = FMath::Abs(MinPosition - MaxPosition);
	
	// Shadow
	if (LineStyle.bLineHasShadow)
	{
		float ShadowThickness = LineStyle.LineThickness;
		if (LineStyle.bLineHasOutline)
		{
			ShadowThickness += LineStyle.LineOutlineThickness;
		}

		TArray<FVector2D> ShadowLine;

		for (const FVector2D& Point: Positions)
		{
			ShadowLine.Add(Point + LineStyle.LineShadowOffset);
		}
		
		
		FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(LineBoxSize, FSlateLayoutTransform()), ShadowLine, ESlateDrawEffect::None, LineStyle.LineShadowColor, true,  ShadowThickness);
	}

	// Outline
	if (LineStyle.bLineHasOutline)
	{
		const float Thickness = LineStyle.LineThickness + LineStyle.LineOutlineThickness;
		FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(LineBoxSize, FSlateLayoutTransform()), Positions, ESlateDrawEffect::None, LineStyle.LineOutlineColor, true,  Thickness);
	}

	// Line
	FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(LineBoxSize, FSlateLayoutTransform()), Positions, ESlateDrawEffect::None, LineStyle.LineColor, true,  LineStyle.LineThickness);
}


END_SLATE_FUNCTION_BUILD_OPTIMIZATION
