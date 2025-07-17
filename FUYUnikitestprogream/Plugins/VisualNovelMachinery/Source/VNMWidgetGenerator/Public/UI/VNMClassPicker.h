// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Layout/SGridPanel.h"
#include "VNMClassPicker.generated.h"

UENUM(BlueprintType)
enum class EVNMMenuWidget : uint8
{
	MenuContentWidget,
	MenuTextButtonWidget,
	MenuIconButtonWidget,
	SliderWidget,
	DropdownItemWidget,
	DropdownContentWidget,
	DropdownWidget,
	PagingWidget,
	GalleryDisplayImageVisual,
	GalleryImageVisual,
	GalleryWidget,
	SaveGameVisual,
	SaveGameWidget,
	LoadGameWidget,
	BasePopUpWidget,
	BaseTextBoxPopUpWidget,
	WindowModeVisual,
	OptionsWidget,
	AboutWidget,
	ChoicesWidget,
	MainMenuWidget,
	PauseMenuWidget,

	// Do not add below this
	Count
};
ENUM_RANGE_BY_COUNT(EVNMMenuWidget, EVNMMenuWidget::Count);

UENUM(BlueprintType)
enum class EVNMWidget : uint8
{
	CgDisplayWidget,
	CharacterDisplayWidget,
	ChoiceButton,
	ChoiceWidget,
	ControlButton,
	DialogBoxWidget,
	ImageChoiceButton,
	ImageChoiceWidget,
	SceneBackgroundDisplayWidget,

	// Do not add below this
	Count
};
ENUM_RANGE_BY_COUNT(EVNMWidget, EVNMWidget::Count);

/**
 * 
 */
class VNMWIDGETGENERATOR_API SVNMClassPicker : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SVNMClassPicker)
		{
		}
		SLATE_ARGUMENT( TSharedPtr<SWindow>, ParentWindow )

	SLATE_END_ARGS()
	
	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	virtual void FillButtonPanel() {};

protected:
	FReply OnCancelClicked();
	
	/** A pointer to the window that is asking the user to select a parent class */
	TWeakPtr<SWindow> WeakParentWindow;
	TSharedPtr<SGridPanel> ButtonGridPanel;
	FCheckBoxStyle CheckBoxStyle;
};

class SVNMMenuWidgetClassPicker : public SVNMClassPicker
{
public:

	static bool PickClass(EVNMMenuWidget& MenuWidget);

	virtual void FillButtonPanel() override;

protected:

	FReply OnClassPicked(EVNMMenuWidget InMenuWidget);

	/** A flag indicating that Ok was selected */
	bool bPressedOk = false;
	
	EVNMMenuWidget MenuWidget = EVNMMenuWidget::MenuContentWidget;
};

class SVNMWidgetClassPicker : public SVNMClassPicker
{
public:

	static bool PickClass(EVNMWidget& VNMWidget);

	virtual void FillButtonPanel() override;

protected:

	FReply OnClassPicked(EVNMWidget InVNMWidget);

	/** A flag indicating that Ok was selected */
	bool bPressedOk = false;
	
	EVNMWidget VNMWidget = EVNMWidget::CgDisplayWidget;
};
