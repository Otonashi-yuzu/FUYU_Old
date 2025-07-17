// Fill out your copyright notice in the Description page of Project Settings.


#include "DetailsCustomization/ImageDefinitionCustomization.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "EngineUtils.h"
#include "IDetailChildrenBuilder.h"
#include "IDetailGroup.h"
#include "VNMCharacterSpawnLocation.h"
#include "VNMSettings.h"
#include "Camera/CameraActor.h"

TSharedRef<IPropertyTypeCustomization> FImageDefinitionCustomization::MakeInstance()
{
	// Create the instance and returned a SharedRef
	return MakeShareable(new FImageDefinitionCustomization());
}

void FImageDefinitionCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	HeaderRow.NameContent()[PropertyHandle->CreatePropertyNameWidget()]
	.ValueContent()[PropertyHandle->CreateDefaultPropertyButtonWidgets()];
}

void FImageDefinitionCustomization::CustomizeChildren( TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils )
{
	TSharedPtr<IPropertyHandle> ImagePropertyHandle = PropertyHandle->GetChildHandle(TEXT("Image"));
	TSharedPtr<IPropertyHandle> ImageSizePropertyHandle = PropertyHandle->GetChildHandle(TEXT("ImageSize"));
	TSharedPtr<IPropertyHandle> ColorAndOpacityPropertyHandle = PropertyHandle->GetChildHandle(TEXT("ColorAndOpacity"));
	ChildBuilder.AddProperty(ImagePropertyHandle.ToSharedRef());
	ChildBuilder.AddProperty(ImageSizePropertyHandle.ToSharedRef());
	ChildBuilder.AddProperty(ColorAndOpacityPropertyHandle.ToSharedRef());
	
	void* StructPtr = nullptr;
	FImageDefinition* Definition = nullptr;
	if (PropertyHandle->GetValueData(StructPtr) == FPropertyAccess::Success)
	{
		Definition = reinterpret_cast<FImageDefinition*>(StructPtr);
	}
	
	ImagePropertyHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateRaw(this, &FImageDefinitionCustomization::OnImagePropertyChanged, Definition));
}

void FImageDefinitionCustomization::OnImagePropertyChanged(FImageDefinition* Definition)
{
	auto* Image = Definition->Image.LoadSynchronous();
	if (Image && Image->IsA<UTexture2D>())
	{
		auto* ImageTexture = Cast<UTexture2D>(Image);
		Definition->ImageSize = FVector2D(ImageTexture->GetSizeX(), ImageTexture->GetSizeY());
	}
}
