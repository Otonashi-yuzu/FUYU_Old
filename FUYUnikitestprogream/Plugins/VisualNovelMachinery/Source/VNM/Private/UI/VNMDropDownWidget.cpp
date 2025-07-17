// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/VNMDropDownWidget.h"

#include "VNMDropDownContentWidget.h"
#include "VNMModule.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UVNMDropDownWidget::NativeConstruct()
{
	Super::NativeConstruct();

	DropdownButton->OnClicked.AddUniqueDynamic(this, &UVNMDropDownWidget::OnDropdownButtonClicked);

	DropdownContentWidget = CreateWidget<UVNMDropDownContentWidget>(this, DropdownContentWidgetClass);

	if (!DropdownContentWidget)
	{
		UE_LOG(LogVNM, Error, TEXT("UVNMDropDownWidget::NativeConstruct: Dropdown Content Widget could not be created!"));
		return;
	}

	DropdownContentWidget->SetDropdownWidget(this);
	DropdownContentWidget->SetButtonStyling(ItemStyling);
	DropdownContentWidget->SetDropdownItemWidgetClass(DropdownItemWidgetClass);
	DropdownContentWidget->SetVisibility(ESlateVisibility::Collapsed);
	DropdownContentWidget->SetDropdownOptions(Options);

	DropdownContentWidget->AddToViewport(999);
}

void UVNMDropDownWidget::BeginDestroy()
{
	if (DropdownContentWidget)
	{
		DropdownContentWidget->RemoveFromParent();
		DropdownContentWidget = nullptr;
	}
	
	Super::BeginDestroy();
}

void UVNMDropDownWidget::SetSelectedOption(const FString& SelectedOption)
{
	DropdownValueText->SetText(FText::FromString(SelectedOption));
	SetIsDropDownExpanded(false);

	OnSelectionChanged.Broadcast(SelectedOption);
}

void UVNMDropDownWidget::SetOptions(const TArray<FString>& InOptions)
{
	Options = InOptions;
	
	DropdownContentWidget->SetDropdownOptions(Options);
}

void UVNMDropDownWidget::AddOption(const FString& NewOption)
{
	Options.AddUnique(NewOption);

	DropdownContentWidget->SetDropdownOptions(Options);
}

void UVNMDropDownWidget::SetIsDropDownExpanded(const bool bInIsDropDownExpanded)
{
	bIsDropDownExpanded = bInIsDropDownExpanded;

	const FVector2D RenderScale = DropdownArrowImage->RenderTransform.Scale;
	DropdownArrowImage->SetRenderScale(FVector2D(RenderScale.X, bIsDropDownExpanded ? -1.f : 1.f));

	DropdownContentWidget->SetVisibility(bIsDropDownExpanded ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);

	const FGeometry& CachedGeometry = GetCachedGeometry();

	FVector2D ViewportPosition;
	FVector2D PixelPosition;
	USlateBlueprintLibrary::LocalToViewport(GetOwningPlayer(), CachedGeometry, FVector2D::ZeroVector, PixelPosition, ViewportPosition);

	const float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(GetOwningPlayer());
	const FVector2D ScaledViewportPosition = ViewportPosition * ViewportScale;
	DropdownContentWidget->SetPositionInViewport(FVector2D(ScaledViewportPosition.X, ScaledViewportPosition.Y + BackgroundImage->Brush.ImageSize.Y * ViewportScale));

	DropdownContentWidget->SetDesiredWidth(CachedGeometry.GetLocalSize().X);
}

void UVNMDropDownWidget::OnDropdownButtonClicked()
{
	SetIsDropDownExpanded(!bIsDropDownExpanded);
}
