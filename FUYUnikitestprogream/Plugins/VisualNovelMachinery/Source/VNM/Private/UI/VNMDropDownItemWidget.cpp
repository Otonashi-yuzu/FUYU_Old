// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/VNMDropDownItemWidget.h"

#include "VNMDropDownWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UVNMDropDownItemWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	BackgroundImage->SetBrushFromTexture(ButtonStyling.IdleTexture);
	BackgroundImage->SetColorAndOpacity(ButtonStyling.IdleColor);
	ItemText->SetColorAndOpacity(ButtonStyling.IdleTextColor);
	ItemText->SetFont(ButtonStyling.IdleTextFont);
}

void UVNMDropDownItemWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ItemButton->OnClicked.AddUniqueDynamic(this, &UVNMDropDownItemWidget::OnDropdownItemClicked);
	ItemButton->OnPressed.AddUniqueDynamic(this, &UVNMDropDownItemWidget::OnDropdownItemPressed);
	ItemButton->OnHovered.AddUniqueDynamic(this, &UVNMDropDownItemWidget::OnDropdownItemHovered);
	ItemButton->OnUnhovered.AddUniqueDynamic(this, &UVNMDropDownItemWidget::OnDropdownItemUnhovered);
}

void UVNMDropDownItemWidget::SetButtonStyling(const FButtonStyling& Styling)
{
	ButtonStyling = Styling;
	
	BackgroundImage->SetBrushFromTexture(ButtonStyling.IdleTexture);
	BackgroundImage->SetColorAndOpacity(ButtonStyling.IdleColor);
	ItemText->SetColorAndOpacity(ButtonStyling.IdleTextColor);
	ItemText->SetFont(ButtonStyling.IdleTextFont);
}

void UVNMDropDownItemWidget::SetOptionString(const FString& Option)
{
	ItemString = Option;
	ItemText->SetText(FText::FromString(Option));
}

void UVNMDropDownItemWidget::SetDropdownWidget(UVNMDropDownWidget* InDropDownWidget)
{
	DropDownWidget = InDropDownWidget;
}

void UVNMDropDownItemWidget::OnDropdownItemClicked()
{
	DropDownWidget->SetSelectedOption(ItemString);
}

void UVNMDropDownItemWidget::OnDropdownItemPressed()
{
	BackgroundImage->SetBrushFromTexture(ButtonStyling.PressedTexture);
	BackgroundImage->SetColorAndOpacity(ButtonStyling.PressedColor);
	ItemText->SetColorAndOpacity(ButtonStyling.PressedTextColor);
	ItemText->SetFont(ButtonStyling.PressedTextFont);
}

void UVNMDropDownItemWidget::OnDropdownItemHovered()
{
	BackgroundImage->SetBrushFromTexture(ButtonStyling.HoveredTexture);
	BackgroundImage->SetColorAndOpacity(ButtonStyling.HoveredColor);
	ItemText->SetColorAndOpacity(ButtonStyling.HoveredTextColor);
	ItemText->SetFont(ButtonStyling.HoveredTextFont);
}

void UVNMDropDownItemWidget::OnDropdownItemUnhovered()
{
	BackgroundImage->SetBrushFromTexture(ButtonStyling.IdleTexture);
	BackgroundImage->SetColorAndOpacity(ButtonStyling.IdleColor);
	ItemText->SetColorAndOpacity(ButtonStyling.IdleTextColor);
	ItemText->SetFont(ButtonStyling.IdleTextFont);
}
