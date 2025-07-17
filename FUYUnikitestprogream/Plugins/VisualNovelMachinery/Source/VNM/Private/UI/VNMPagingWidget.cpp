// Fill out your copyright notice in the Description page of Project Settings.


#include "VNMPagingWidget.h"

#include "MenuButtonWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"

void UVNMPagingWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	SetNumberPages(NumPages);
}

void UVNMPagingWidget::NativeConstruct()
{
	Super::NativeConstruct();

	PreviousPageButton->OnButtonClicked.AddUniqueDynamic(this, &UVNMPagingWidget::OnPreviousPageButtonClicked);
	NextPageButton->OnButtonClicked.AddUniqueDynamic(this, &UVNMPagingWidget::OnNextPageButtonClicked);
}

void UVNMPagingWidget::SetNumberPages(const int32 InNumPages)
{
	PageIconList->ClearChildren();

	if (InNumPages == 0)
	{
		return;
	}

	for (int32 i = 0; i < InNumPages; i++)
	{
		UImage* PageIcon = WidgetTree->ConstructWidget<UImage>();

		PageIcon->SetBrushFromTexture(PageIconTexture);
		PageIcon->SetRenderOpacity(0.5f);

		PageIconList->AddChild(PageIcon);
	}

	CurrentPageIndex = 0;
	PageIconList->GetChildAt(0)->SetRenderOpacity(1.f);
	PreviousPageButton->SetVisibility(ESlateVisibility::Hidden);
	NextPageButton->SetVisibility(ESlateVisibility::Visible);
}

void UVNMPagingWidget::OnPreviousPageButtonClicked(UMenuButtonWidget* Button)
{
	if (CurrentPageIndex <= 0)
	{
		CurrentPageIndex = 0;
		return;
	}
	
	NextPageButton->SetVisibility(ESlateVisibility::Visible);
	PageIconList->GetChildAt(CurrentPageIndex--)->SetRenderOpacity(0.5f);
	PageIconList->GetChildAt(CurrentPageIndex)->SetRenderOpacity(1.f);

	if (CurrentPageIndex == 0)
	{
		PreviousPageButton->SetVisibility(ESlateVisibility::Hidden);
	}

	OnPageChanged.Broadcast(CurrentPageIndex);
}

void UVNMPagingWidget::OnNextPageButtonClicked(UMenuButtonWidget* Button)
{	
	if (CurrentPageIndex >= PageIconList->GetChildrenCount())
	{
		CurrentPageIndex = PageIconList->GetChildrenCount() - 1;
		return;
	}
	PreviousPageButton->SetVisibility(ESlateVisibility::Visible);
	PageIconList->GetChildAt(CurrentPageIndex++)->SetRenderOpacity(0.5f);
	PageIconList->GetChildAt(CurrentPageIndex)->SetRenderOpacity(1.f);

	if (CurrentPageIndex == PageIconList->GetChildrenCount() - 1)
	{
		NextPageButton->SetVisibility(ESlateVisibility::Hidden);
	}

	OnPageChanged.Broadcast(CurrentPageIndex);
}
