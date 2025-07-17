// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainMenu/GalleryWidget.h"

#include "GalleryImageVisual.h"
#include "VNMPagingWidget.h"
#include "VNMSettings.h"
#include "Components/PanelWidget.h"

void UGalleryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CgGroupIds = UVNMSettings::GetVNMSettings()->GetCgGroupIds();

	const int32 GalleryVisualsCount = GalleryCgList->GetChildrenCount();
	int32 NumPages = FMath::CeilToInt((CgGroupIds.Num() * 1.f) / GalleryVisualsCount);
	if (NumPages > 1)
	{
		PagingWidget->SetVisibility(ESlateVisibility::Visible);
		PagingWidget->SetNumberPages(NumPages);
	}
	else
	{
		PagingWidget->SetVisibility(ESlateVisibility::Collapsed);
	}

	PagingWidget->OnPageChanged.AddUniqueDynamic(this, &UGalleryWidget::OnPageChanged);

	OnPageChanged(0);
}

void UGalleryWidget::OnPageChanged(const int32 PageIndex)
{
	const int32 GalleryVisualsCount = GalleryCgList->GetChildrenCount();

	for (int32 i = 0; i < GalleryVisualsCount; i++)
	{
		auto* GalleryImageVisual = Cast<UGalleryImageVisual>(GalleryCgList->GetChildAt(i));

		const int32 CgGroupIdIndex = i + GalleryVisualsCount * PageIndex;

		if (CgGroupIds.IsValidIndex(CgGroupIdIndex))
		{
			GalleryImageVisual->SetVisibility(ESlateVisibility::Visible);
			GalleryImageVisual->SetGalleryImageId(CgGroupIds[CgGroupIdIndex]);
		}
		else
		{
			GalleryImageVisual->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}
