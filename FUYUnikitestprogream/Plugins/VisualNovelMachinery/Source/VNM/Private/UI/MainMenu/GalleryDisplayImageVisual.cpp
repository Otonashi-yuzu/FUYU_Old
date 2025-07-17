// Fill out your copyright notice in the Description page of Project Settings.


#include "GalleryDisplayImageVisual.h"

#include "VNMSettings.h"
#include "Components/Image.h"

void UGalleryDisplayImageVisual::SetCgIds(const TArray<FName>& InCgIds)
{
	CgIds = InCgIds;

	CurrentlyDisplayedIndex = 0;

	if (CgIds.IsEmpty())
	{
		return;
	}

	UVNMSettings* Settings = UVNMSettings::GetVNMSettings();

	FDialogImageDefinition Definition = Settings->GetCgDefinitionById(CgIds[CurrentlyDisplayedIndex]);

	if (!Definition.IsValid())
	{
		return;
	}
	
	GalleryDisplayImage->Brush.SetImageSize(Definition.DialogImage.ImageSize);
	GalleryDisplayImage->Brush.SetResourceObject(Definition.DialogImage.Image.LoadSynchronous());
	GalleryDisplayImage->SetBrushTintColor(Definition.DialogImage.ColorAndOpacity);
}

void UGalleryDisplayImageVisual::NativeMenuButtonClicked()
{
	Super::NativeMenuButtonClicked();

	CurrentlyDisplayedIndex++;

	if (!CgIds.IsValidIndex(CurrentlyDisplayedIndex))
	{
		RemoveFromParent();
		return;
	}

	UVNMSettings* Settings = UVNMSettings::GetVNMSettings();

	FDialogImageDefinition Definition = Settings->GetCgDefinitionById(CgIds[CurrentlyDisplayedIndex]);

	if (!Definition.IsValid())
	{
		return;
	}
	
	GalleryDisplayImage->Brush.SetImageSize(Definition.DialogImage.ImageSize);
	GalleryDisplayImage->Brush.SetResourceObject(Definition.DialogImage.Image.LoadSynchronous());
	GalleryDisplayImage->SetBrushTintColor(Definition.DialogImage.ColorAndOpacity);
}
