// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/VNMDropDownContentWidget.h"

#include "VNMDropDownItemWidget.h"
#include "VNMModule.h"

void UVNMDropDownContentWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	SizeConstrainer->SetHeightOverride(RowHeight * VisibleRowCount);
}

void UVNMDropDownContentWidget::SetButtonStyling(const FButtonStyling& Styling)
{
	ButtonStyling = Styling;
}

void UVNMDropDownContentWidget::SetDesiredWidth(const float NewWidth)
{
	SizeConstrainer->SetWidthOverride(NewWidth);
}

void UVNMDropDownContentWidget::SetDropdownOptions(const TArray<FString>& NewOptions)
{
	DropdownList->ClearChildren();

	Options = NewOptions;

	for (const auto& Option: Options)
	{
		auto* ItemWidget = CreateWidget<UVNMDropDownItemWidget>(this, DropdownItemWidgetClass);

		if (!ItemWidget)
		{
			UE_LOG(LogVNM, Error, TEXT("UVNMDropDownContentWidget::SetDropdownOptions: Failed to create Row Widget for Dropdown Content"));
		}

		ItemWidget->SetDropdownWidget(DropDownWidget);
		ItemWidget->SetButtonStyling(ButtonStyling);
		ItemWidget->SetOptionString(Option);

		DropdownList->AddChild(ItemWidget);
	}
}

void UVNMDropDownContentWidget::SetDropdownWidget(UVNMDropDownWidget* InDropDownWidget)
{
	DropDownWidget = InDropDownWidget;
}

void UVNMDropDownContentWidget::SetDropdownItemWidgetClass(TSubclassOf<UVNMDropDownItemWidget> InDropdownItemWidgetClass)
{
	DropdownItemWidgetClass = InDropdownItemWidgetClass;
}
