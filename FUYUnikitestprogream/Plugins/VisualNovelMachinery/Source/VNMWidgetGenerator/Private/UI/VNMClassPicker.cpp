// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/VNMClassPicker.h"

#include "SlateOptMacros.h"
#include "Widgets/Layout/SGridPanel.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SVNMClassPicker::Construct(const FArguments& InArgs)
{
	WeakParentWindow = InArgs._ParentWindow;
		
	const FButtonStyle& ButtonStyle = FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button");
	CheckBoxStyle = FCoreStyle::Get().GetWidgetStyle< FCheckBoxStyle >("ToggleButtonCheckbox");

	CheckBoxStyle.UncheckedImage = ButtonStyle.Normal;
	CheckBoxStyle.UncheckedHoveredImage = ButtonStyle.Hovered;
	CheckBoxStyle.UncheckedPressedImage = ButtonStyle.Pressed;
	CheckBoxStyle.CheckedImage = ButtonStyle.Hovered;
	CheckBoxStyle.CheckedHoveredImage = ButtonStyle.Hovered;
	CheckBoxStyle.CheckedPressedImage = ButtonStyle.Hovered;
	
	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		[
			SAssignNew(ButtonGridPanel, SGridPanel)
		]
		+SVerticalBox::Slot()
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Bottom)
		.Padding(8.f)
		[
			SNew(SButton)
			.Text(FText::FromString(TEXT("Cancel")))
			.OnClicked_Raw(this, &SVNMClassPicker::OnCancelClicked)
		]
	];

	FillButtonPanel();
}

FReply SVNMClassPicker::OnCancelClicked()
{
	if (WeakParentWindow.IsValid())
	{
		WeakParentWindow.Pin()->RequestDestroyWindow();
	}
	return FReply::Handled();
}

bool SVNMMenuWidgetClassPicker::PickClass(EVNMMenuWidget& MenuWidget)
{
	// Create the window to pick the class
	TSharedRef<SWindow> PickerWindow = SNew(SWindow)
		.Title(FText::FromString(TEXT("Menu Widget Generator")))
		.SizingRule( ESizingRule::Autosized )
		//.ClientSize( FVector2D( 0.f, 300.f ))
		.SupportsMaximize(false)
		.SupportsMinimize(false);

	TSharedRef<SVNMMenuWidgetClassPicker> ClassPickerDialog = SNew(SVNMMenuWidgetClassPicker)
		.ParentWindow(PickerWindow);

	PickerWindow->SetContent(ClassPickerDialog);

	GEditor->EditorAddModalWindow(PickerWindow);

	if (ClassPickerDialog->bPressedOk)
	{
		MenuWidget = ClassPickerDialog->MenuWidget;
		return true;
	}
	else
	{
		return false;
	}
}

void SVNMMenuWidgetClassPicker::FillButtonPanel()
{	
	for (EVNMMenuWidget MenuWidgetEnum : TEnumRange<EVNMMenuWidget>())
	{
		const FText& EnumName = UEnum::GetDisplayValueAsText(MenuWidgetEnum);
		const int32 Index = static_cast<int32>(MenuWidgetEnum);
		ButtonGridPanel->AddSlot(Index % 4, FMath::Floor(Index/4))
		.Padding(FMargin(10.f))
		[
			SNew(SBox)
			.HeightOverride(125.f)
			.WidthOverride(125.f)
			.Content()
			[
				SNew(SButton)
				.OnClicked_Raw(this, &SVNMMenuWidgetClassPicker::OnClassPicked, MenuWidgetEnum)
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				.Content()
				[
					SNew(STextBlock)
					.Text(EnumName)
					.Justification(ETextJustify::Center)
					.AutoWrapText(true)
					.WrapTextAt(100.f)
				]
			]
		];
	}
}

FReply SVNMMenuWidgetClassPicker::OnClassPicked(EVNMMenuWidget InMenuWidget)
{
	bPressedOk = true;
	MenuWidget = InMenuWidget;
	if (WeakParentWindow.IsValid())
	{
		WeakParentWindow.Pin()->RequestDestroyWindow();
	}
	
	return FReply::Handled();
}

bool SVNMWidgetClassPicker::PickClass(EVNMWidget& VNMWidget)
{
	// Create the window to pick the class
	TSharedRef<SWindow> PickerWindow = SNew(SWindow)
		.Title(FText::FromString(TEXT("Menu Widget Generator")))
		.SizingRule( ESizingRule::Autosized )
		//.ClientSize( FVector2D( 0.f, 300.f ))
		.SupportsMaximize(false)
		.SupportsMinimize(false);

	TSharedRef<SVNMWidgetClassPicker> ClassPickerDialog = SNew(SVNMWidgetClassPicker)
		.ParentWindow(PickerWindow);

	PickerWindow->SetContent(ClassPickerDialog);

	GEditor->EditorAddModalWindow(PickerWindow);

	if (ClassPickerDialog->bPressedOk)
	{
		VNMWidget = ClassPickerDialog->VNMWidget;
		return true;
	}
	else
	{
		return false;
	}
}

void SVNMWidgetClassPicker::FillButtonPanel()
{
	for (EVNMWidget VNMWidgetEnum : TEnumRange<EVNMWidget>())
	{
		const FText& EnumName = UEnum::GetDisplayValueAsText(VNMWidgetEnum);
		const int32 Index = static_cast<int32>(VNMWidgetEnum);
		ButtonGridPanel->AddSlot(Index % 4, FMath::Floor(Index/4))
		.Padding(FMargin(10.f))
		[
			SNew(SBox)
			.HeightOverride(125.f)
			.WidthOverride(125.f)
			.Content()
			[
				SNew(SButton)
				.OnClicked_Raw(this, &SVNMWidgetClassPicker::OnClassPicked, VNMWidgetEnum)
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				.Content()
				[
					SNew(STextBlock)
					.Text(EnumName)
					.Justification(ETextJustify::Center)
					.AutoWrapText(true)
					.WrapTextAt(100.f)
				]
			]
		];
	}
}

FReply SVNMWidgetClassPicker::OnClassPicked(EVNMWidget InVNMWidget)
{
	bPressedOk = true;
	VNMWidget = InVNMWidget;
	if (WeakParentWindow.IsValid())
	{
		WeakParentWindow.Pin()->RequestDestroyWindow();
	}
	
	return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
