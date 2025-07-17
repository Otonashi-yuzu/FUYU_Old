// Fill out your copyright notice in the Description page of Project Settings.


#include "Factories/MainMenuWidgetBlueprintFactory.h"

#include "BlueprintEditorSettings.h"
#include "ChoiceGraph.h"
#include "ClassViewerFilter.h"
#include "ClassViewerModule.h"
#include "DialogScenesGraph.h"
#include "GalleryDisplayImageVisual.h"
#include "GalleryImageVisual.h"
#include "GalleryWidget.h"
#include "MainMenuWidget.h"
#include "MenuIconButtonWidget.h"
#include "MenuTextButtonWidget.h"
#include "MovieScene.h"
#include "ObjectEditorUtils.h"
#include "PauseMenuWidget.h"
#include "SaveGameVisual.h"
#include "SaveGameWidget.h"
#include "VNMBaseTextBoxPopUpWidget.h"
#include "UI/VNMClassPicker.h"
#include "VNMDropDownContentWidget.h"
#include "VNMDropDownItemWidget.h"
#include "VNMPagingWidget.h"
#include "WidgetBlueprint.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateBoxBrush.h"
#include "Components/BackgroundBlur.h"
#include "Components/BackgroundBlurSlot.h"
#include "Components/EditableTextBox.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Image.h"
#include "Components/NamedSlot.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/ProgressBar.h"
#include "Components/ScaleBox.h"
#include "Components/ScaleBoxSlot.h"
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/SizeBox.h"
#include "Components/SizeBoxSlot.h"
#include "Components/Spacer.h"
#include "Components/TextBlock.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/WidgetSwitcherSlot.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/SClassPickerDialog.h"
#include "Engine/Font.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Styling/UMGCoreStyle.h"

namespace MainMenuWidgetGeneratorUtils
{
	/**
	 * Set the value on an UObject using reflection.
	 * @param	Object			The object to copy the value into.
	 * @param	PropertyName	The name of the property to set.
	 * @param	Value			The value to assign to the property.
	 *
	 * @return true if the value was set correctly
	 */
	template <typename ObjectType, typename ValueType>
	bool SetPropertyValue(ObjectType* Object, FName PropertyName, ValueType Value)
	{
		return FObjectEditorUtils::SetPropertyValue(Object, PropertyName, Value);	
	}

	/**
	 * Set the value on an UObject using reflection.
	 * @param	Object			The object to copy the value into.
	 * @param	PropertyName	The name of the property to set.
	 * @param	Value			The value to assign to the property.
	 *
	 * @return true if the value was set correctly
	 */
	template <typename ObjectType, typename ValueType>
	bool SetPropertyValue(ObjectType* Object, FName PropertyName, ValueType Value, const UStruct* ObjectClass)
	{
		// Get the property addresses for the source and destination objects.
		FProperty* Property = FindFieldChecked<FProperty>(ObjectClass, PropertyName);

		// Get the property addresses for the object
		ValueType* SourceAddr = Property->ContainerPtrToValuePtr<ValueType>(Object);

		if ( SourceAddr == NULL )
		{
			return false;
		}

		if ( !Object->HasAnyFlags(RF_ClassDefaultObject) )
		{
			FEditPropertyChain PropertyChain;
			PropertyChain.AddHead(Property);
			Object->PreEditChange(PropertyChain);
		}

		// Set the value on the destination object.
		*SourceAddr = Value;

		if ( !Object->HasAnyFlags(RF_ClassDefaultObject) )
		{
			FPropertyChangedEvent PropertyEvent(Property);
			Object->PostEditChangeProperty(PropertyEvent);
		}

		return true;
	}

	/**
	 * Gets the value on an UObject using reflection.
	 * @param	Object			The object to copy the value into.
	 * @param	PropertyName	The name of the property to set.
	 *
	 * @return The value of the property.
	 */
	template <typename ObjectType, typename ValueType>
	ValueType* GetPropertyValue(ObjectType* Object, FName PropertyName)
	{
		// Get the property addresses for the source and destination objects.
		FProperty* Property = FindFieldChecked<FProperty>(ObjectType::StaticClass(), PropertyName);

		// Get the property addresses for the object
		return Property->ContainerPtrToValuePtr<ValueType>(Object);
	}

	void AddVariableToBlueprint(const FName& PinCategory, const FName& VariableName, UObject* SubCategoryContextClass , UWidgetBlueprint* Blueprint)
	{
		UEdGraphNode::FCreatePinParams PinParams;

		FEdGraphPinType PinType = FEdGraphPinType(PinCategory, {}, SubCategoryContextClass, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
		FBlueprintEditorUtils::AddMemberVariable(Blueprint, VariableName, PinType);
	}
	
	UWidgetAnimation* CreateWidgetAnimation(const FString& Name, UWidgetBlueprint* Blueprint)
	{
		const float InTime = 0.f;
		const float OutTime = 0.5f;
		
		FString BaseName = Name;
		UWidgetAnimation* NewAnimation = NewObject<UWidgetAnimation>(Blueprint, FName(), RF_Transactional);

		FString UniqueName = BaseName;

		const FName NewFName = FName(*UniqueName);
		NewAnimation->SetDisplayLabel( UniqueName );
		NewAnimation->Rename(*UniqueName);

		NewAnimation->MovieScene = NewObject<UMovieScene>(NewAnimation, NewFName, RF_Transactional);

		// Default to 20 fps display rate (as was the previous default in USequencerSettings)
		NewAnimation->MovieScene->SetDisplayRate(FFrameRate(20, 1));

		const FFrameTime InFrame  = InTime  * NewAnimation->MovieScene->GetTickResolution();
		const FFrameTime OutFrame = OutTime * NewAnimation->MovieScene->GetTickResolution();
		NewAnimation->MovieScene->SetPlaybackRange(TRange<FFrameNumber>(InFrame.FrameNumber, OutFrame.FrameNumber+1));
		NewAnimation->MovieScene->GetEditorData().WorkStart = InTime;
		NewAnimation->MovieScene->GetEditorData().WorkEnd   = OutTime;

		return NewAnimation;
	}

	void CompileBlueprint(UWidgetBlueprint* WP)
	{
		FCompilerResultsLog LogResults;
		LogResults.SetSourcePath(WP->GetPathName());
		LogResults.BeginEvent(TEXT("Compile"));
		LogResults.bLogDetailedResults = GetDefault<UBlueprintEditorSettings>()->bShowDetailedCompileResults;
		LogResults.EventDisplayThresholdMs = GetDefault<UBlueprintEditorSettings>()->CompileEventDisplayThresholdMs;
		EBlueprintCompileOptions CompileOptions = EBlueprintCompileOptions::None;

		FKismetEditorUtilities::CompileBlueprint(WP, CompileOptions, &LogResults);
	}

	void SetupBlueprintAsMenuContentWidget(UWidgetBlueprint* WP)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// Border
		{
			auto* Border = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Border"));

			auto* BackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_frame_submenu.background_frame_submenu'"),
				nullptr,
				LOAD_None);
			Border->SetBrushFromTexture(BackgroundTexture, true);
			Border->Brush.DrawAs = ESlateBrushDrawType::Box;
			Border->Brush.Margin = { 0.12f };
			Border->ColorAndOpacity =  FLinearColor(1.f, 1.f, 1.f, 0.5f);
			
			auto* BorderSlot = OverlayRoot->AddChildToOverlay(Border);
			BorderSlot->SetHorizontalAlignment(HAlign_Fill);
			BorderSlot->SetVerticalAlignment(VAlign_Fill);
		}

		// Content
		{
			auto* Content = WP->WidgetTree->ConstructWidget<UNamedSlot>(UNamedSlot::StaticClass(), TEXT("Content"));
			
			auto* ContentSlot = OverlayRoot->AddChildToOverlay(Content);
			ContentSlot->SetHorizontalAlignment(HAlign_Fill);
			ContentSlot->SetVerticalAlignment(VAlign_Fill);
		}
	}

	void SetupBlueprintAsMenuTextButtonWidget(UWidgetBlueprint* WP)
	{
		auto* BackgroundTexture = LoadObject<UTexture2D>(
			nullptr,
			TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_main_menu_base.btn_main_menu_base'"),
			nullptr,
			LOAD_None);
		
		auto* SelectedBackgroundTexture = LoadObject<UTexture2D>(
			nullptr,
			TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_main_menu_selected.btn_main_menu_selected'"),
			nullptr,
			LOAD_None);
		
		auto* RobotoFont = LoadObject<UFont>(
			nullptr,
			TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
			nullptr,
			LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// Background Image
		{
			auto* BackgroundImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("BackgroundImage"));

			BackgroundImage->SetBrushFromTexture(BackgroundTexture, true);
			BackgroundImage->Brush.DrawAs = ESlateBrushDrawType::Box;
			BackgroundImage->Brush.Margin = { 0.12f };
			BackgroundImage->ColorAndOpacity = FLinearColor::White;
			
			auto* BorderSlot = OverlayRoot->AddChildToOverlay(BackgroundImage);
		}

		// Label
		{
			auto* ButtonText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ButtonText"));
			
			ButtonText->SetFont(FSlateFontInfo(RobotoFont, 35, TEXT("Light")));
			
			auto* ButtonTextSlot = OverlayRoot->AddChildToOverlay(ButtonText);
			ButtonTextSlot->SetHorizontalAlignment(HAlign_Center);
			ButtonTextSlot->SetVerticalAlignment(VAlign_Center);
		}
		
		// Menu Button
		{
			auto* MenuButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MenuButton"));

			MenuButton->SetRenderOpacity(0.f);

			auto* MenuButtonSlot = OverlayRoot->AddChildToOverlay(MenuButton);
			MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}

		auto* Button = WP->GeneratedClass->GetDefaultObject<UMenuTextButtonWidget>();

		FButtonStyling ButtonStyling;

		ButtonStyling.IdleTexture = BackgroundTexture;
		ButtonStyling.HoveredTexture = BackgroundTexture;
		ButtonStyling.PressedTexture = BackgroundTexture;
		ButtonStyling.SelectedTexture = SelectedBackgroundTexture;
		ButtonStyling.SelectedHoveredTexture = SelectedBackgroundTexture;
		ButtonStyling.SelectedPressedTexture = SelectedBackgroundTexture;
		ButtonStyling.LockedTexture = BackgroundTexture;

		ButtonStyling.IdleColor = FLinearColor::White;
		ButtonStyling.HoveredColor = FLinearColor::White;
		ButtonStyling.PressedColor = FLinearColor::White;
		ButtonStyling.SelectedColor = FLinearColor::White;
		ButtonStyling.SelectedHoveredColor = FLinearColor::White;
		ButtonStyling.SelectedPressedColor = FLinearColor::White;
		ButtonStyling.LockedColor = FLinearColor::White;

		ButtonStyling.IdleTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Light"));
		ButtonStyling.HoveredTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Bold"));
		ButtonStyling.PressedTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Bold"));
		ButtonStyling.SelectedTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Bold"));
		ButtonStyling.SelectedHoveredTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Bold"));
		ButtonStyling.SelectedPressedTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Bold"));
		ButtonStyling.LockedTextFont = FSlateFontInfo(RobotoFont, 35, TEXT("Light"));

		ButtonStyling.IdleTextColor = FLinearColor::White;
		ButtonStyling.HoveredTextColor = FLinearColor::White;
		ButtonStyling.PressedTextColor = FLinearColor::White;
		ButtonStyling.SelectedTextColor = FLinearColor::Black;
		ButtonStyling.SelectedHoveredTextColor = FLinearColor::Black;
		ButtonStyling.SelectedPressedTextColor = FLinearColor::Black;
		ButtonStyling.LockedTextColor = FLinearColor::White;


		SetPropertyValue(Button, TEXT("Style"), ButtonStyling);

		Button->DesignSizeMode = EDesignPreviewSizeMode::Desired;
		
		CompileBlueprint(WP);
	}

	void SetupBlueprintAsMenuIconButtonWidget(UWidgetBlueprint* WP)
	{
		auto* BackgroundTexture = LoadObject<UTexture2D>(
			nullptr,
			TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_arrow_toggle.btn_arrow_toggle'"),
			nullptr,
			LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// Background Image
		{
			auto* BackgroundImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("BackgroundImage"));

			BackgroundImage->SetBrushFromTexture(BackgroundTexture, true);
			BackgroundImage->Brush.DrawAs = ESlateBrushDrawType::Box;
			BackgroundImage->Brush.Margin = { 0.12f };
			BackgroundImage->ColorAndOpacity = FLinearColor::White;
			
			auto* BorderSlot = OverlayRoot->AddChildToOverlay(BackgroundImage);
		}
		
		// Menu Button
		{
			auto* MenuButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MenuButton"));

			MenuButton->SetRenderOpacity(0.f);

			auto* MenuButtonSlot = OverlayRoot->AddChildToOverlay(MenuButton);
			MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}

		auto* Button = WP->GeneratedClass->GetDefaultObject<UMenuIconButtonWidget>();

		FButtonStyling ButtonStyling;

		ButtonStyling.IdleTexture = BackgroundTexture;
		ButtonStyling.HoveredTexture = BackgroundTexture;
		ButtonStyling.PressedTexture = BackgroundTexture;
		ButtonStyling.SelectedTexture = BackgroundTexture;
		ButtonStyling.SelectedHoveredTexture = BackgroundTexture;
		ButtonStyling.SelectedPressedTexture = BackgroundTexture;
		ButtonStyling.LockedTexture = BackgroundTexture;

		ButtonStyling.IdleColor = FLinearColor::White;
		ButtonStyling.IdleColor.A = 0.5f;
		ButtonStyling.HoveredColor = FLinearColor::White;
		ButtonStyling.PressedColor = FLinearColor::White;
		ButtonStyling.PressedColor.A = 0.75f;
		ButtonStyling.SelectedColor = FLinearColor::White;
		ButtonStyling.SelectedHoveredColor = FLinearColor::White;
		ButtonStyling.SelectedPressedColor = FLinearColor::White;
		ButtonStyling.LockedColor = FLinearColor::White;


		SetPropertyValue(Button, TEXT("Style"), ButtonStyling);

		Button->DesignSizeMode = EDesignPreviewSizeMode::Desired;
		
		CompileBlueprint(WP);
	}

	void SetupBlueprintAsVNMSliderWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> IconButtonClass)
	{
		auto* VerticalBoxRoot = WP->WidgetTree->ConstructWidget<UVerticalBox>();
		WP->WidgetTree->RootWidget = VerticalBoxRoot;

		{
			auto* ControlsOverlay = WP->WidgetTree->ConstructWidget<UOverlay>();

			auto* ControlsOverlaySlot = VerticalBoxRoot->AddChildToVerticalBox(ControlsOverlay);
			ControlsOverlaySlot->SetHorizontalAlignment(HAlign_Fill);
			ControlsOverlaySlot->SetVerticalAlignment(VAlign_Fill);

			// Background
			{
				auto* Background = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Background"));

				auto* BackgroundTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
					nullptr,
					LOAD_None);
				Background->SetBrushFromTexture(BackgroundTexture, true);
				Background->Brush.DrawAs = ESlateBrushDrawType::Box;
				Background->Brush.Margin = { 0.12f };
				Background->ColorAndOpacity = FLinearColor(1.f, 1.f, 1.f, 0.2f);
			
				auto* BackgroundSlot = ControlsOverlay->AddChildToOverlay(Background);
				BackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
				BackgroundSlot->SetVerticalAlignment(VAlign_Fill);
			}

			{
				auto* ControlsHorizontalBox = WP->WidgetTree->ConstructWidget<UHorizontalBox>();

				auto* ControlsHorizontalBoxSlot = ControlsOverlay->AddChildToOverlay(ControlsHorizontalBox);
				ControlsHorizontalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
				ControlsHorizontalBoxSlot->SetVerticalAlignment(VAlign_Fill);

				{
					auto* MinusButton = WP->WidgetTree->ConstructWidget<UMenuIconButtonWidget>(IconButtonClass, TEXT("MinusButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuIconButtonWidget, FButtonStyling>(MinusButton, TEXT("Style"));

					auto* MinusTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_minus_shape_small.icon_minus_shape_small'"),
						nullptr,
						LOAD_None);

					ButtonStyling.IdleTexture = MinusTexture;
					ButtonStyling.HoveredTexture = MinusTexture;
					ButtonStyling.PressedTexture = MinusTexture;
					ButtonStyling.SelectedTexture = MinusTexture;
					ButtonStyling.SelectedHoveredTexture = MinusTexture;
					ButtonStyling.SelectedPressedTexture = MinusTexture;
					ButtonStyling.LockedTexture = MinusTexture;
					
					SetPropertyValue(MinusButton, TEXT("Style"), ButtonStyling);
					
					MinusButton->SetRenderScale(FVector2D(0.8));
					
					auto* MinusButtonSlot = ControlsHorizontalBox->AddChildToHorizontalBox(MinusButton);
					MinusButtonSlot->SetHorizontalAlignment(HAlign_Center);
					MinusButtonSlot->SetVerticalAlignment(VAlign_Center);
					MinusButtonSlot->SetPadding(FMargin(20.f));
				}

				{
					auto* SliderNameText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SliderNameText"));
					SliderNameText->SetText(FText::FromString(TEXT("Test")));
					SliderNameText->SetFont(FSlateFontInfo( FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 24));

					auto* SliderNameTextSlot = ControlsHorizontalBox->AddChildToHorizontalBox(SliderNameText);
					SliderNameTextSlot->SetSize(FSlateChildSize(ESlateSizeRule::Fill));
					SliderNameTextSlot->SetHorizontalAlignment(HAlign_Center);
					SliderNameTextSlot->SetVerticalAlignment(VAlign_Center);
				}

				{
					auto* PlusButton = WP->WidgetTree->ConstructWidget<UMenuIconButtonWidget>(IconButtonClass, TEXT("PlusButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuIconButtonWidget, FButtonStyling>(PlusButton, TEXT("Style"));

					auto* PlusTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_plus_shape_small.icon_plus_shape_small'"),
						nullptr,
						LOAD_None);

					ButtonStyling.IdleTexture = PlusTexture;
					ButtonStyling.HoveredTexture = PlusTexture;
					ButtonStyling.PressedTexture = PlusTexture;
					ButtonStyling.SelectedTexture = PlusTexture;
					ButtonStyling.SelectedHoveredTexture = PlusTexture;
					ButtonStyling.SelectedPressedTexture = PlusTexture;
					ButtonStyling.LockedTexture = PlusTexture;
					
					SetPropertyValue(PlusButton, TEXT("Style"), ButtonStyling);

					PlusButton->SetRenderScale(FVector2D(0.8));
					
					auto* PlusButtonSlot = ControlsHorizontalBox->AddChildToHorizontalBox(PlusButton);
					PlusButtonSlot->SetHorizontalAlignment(HAlign_Center);
					PlusButtonSlot->SetVerticalAlignment(VAlign_Center);
					PlusButtonSlot->SetPadding(FMargin(20.f));
				}
			}
		}

		{
			auto* SliderOverlay = WP->WidgetTree->ConstructWidget<UOverlay>();

			auto* SliderOverlaySlot = VerticalBoxRoot->AddChildToVerticalBox(SliderOverlay);
			SliderOverlaySlot->SetHorizontalAlignment(HAlign_Fill);
			SliderOverlaySlot->SetVerticalAlignment(VAlign_Fill);

			// Slider Progress
			{
				auto* SliderProgress = WP->WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("SliderProgress"));

				auto* ProgressBackground = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base.btn_submenu_choices_base'"),
					nullptr,
					LOAD_None);
				auto* ProgressFill = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
					nullptr,
					LOAD_None);

				SliderProgress->WidgetStyle.BackgroundImage = FSlateBoxBrush(ProgressBackground, FVector2D(628.0, 80.0), FMargin(0.416667f));
				SliderProgress->WidgetStyle.FillImage = FSlateBoxBrush(ProgressFill, FVector2D(628.0, 80.0), FMargin(0.416667f));
				
				auto* SliderProgressSlot = SliderOverlay->AddChildToOverlay(SliderProgress);
				SliderProgressSlot->SetHorizontalAlignment(HAlign_Fill);
				SliderProgressSlot->SetVerticalAlignment(VAlign_Fill);
			}

			// Slider
			{
				auto* Slider = WP->WidgetTree->ConstructWidget<USlider>(USlider::StaticClass(), TEXT("Slider"));

				auto* ProgressBackground = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base.btn_submenu_choices_base'"),
					nullptr,
					LOAD_None);
				auto* ProgressFill = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
					nullptr,
					LOAD_None);

				Slider->WidgetStyle.BarThickness = 16.f;
				Slider->SetRenderOpacity(0.f);
				
				auto* SliderSlot = SliderOverlay->AddChildToOverlay(Slider);
				SliderSlot->SetHorizontalAlignment(HAlign_Fill);
				SliderSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}
		
		AddVariableToBlueprint(UEdGraphSchema_K2::PC_Text, TEXT("SliderName"), nullptr, WP);

		auto* Button = WP->GeneratedClass->GetDefaultObject<UVNMSliderWidget>();

		Button->DesignSizeMode = EDesignPreviewSizeMode::Desired;
		
		CompileBlueprint(WP);
	}

	void SetupBlueprintAsVNMDropdownItemWidget(UWidgetBlueprint* WP)
	{
		auto* BackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
				nullptr,
				LOAD_None);
		
		auto* TextFont = LoadObject<UFont>(
				nullptr,
				TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
				nullptr,
				LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// Background Image
		{
			auto* BackgroundImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("BackgroundImage"));

			
			BackgroundImage->SetBrushFromTexture(BackgroundTexture, true);
			BackgroundImage->Brush.DrawAs = ESlateBrushDrawType::Image;
			BackgroundImage->ColorAndOpacity = FLinearColor::Black;
			
			auto* BorderSlot = OverlayRoot->AddChildToOverlay(BackgroundImage);
		}

		// ItemText
		{
			auto* ItemText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ItemText"));
			
			ItemText->SetText(FText::FromString(TEXT("Dropdown Item")));
			ItemText->SetFont(FSlateFontInfo( FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 24));
			
			auto* ItemTextSlot = OverlayRoot->AddChildToOverlay(ItemText);
			ItemTextSlot->SetHorizontalAlignment(HAlign_Center);
			ItemTextSlot->SetVerticalAlignment(VAlign_Center);
		}
		
		// ItemButton
		{
			auto* ItemButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("ItemButton"));

			ItemButton->SetRenderOpacity(0.f);

			auto* ItemButtonSlot = OverlayRoot->AddChildToOverlay(ItemButton);
			ItemButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			ItemButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}

		auto* DropDownItemWidget = WP->GeneratedClass->GetDefaultObject<UVNMDropDownItemWidget>();

		FButtonStyling ButtonStyling;
		ButtonStyling.IdleTexture = BackgroundTexture;
		ButtonStyling.HoveredTexture = BackgroundTexture;
		ButtonStyling.PressedTexture = BackgroundTexture;

		ButtonStyling.IdleColor = FLinearColor::Black;
		ButtonStyling.HoveredColor = FLinearColor(0.701101f,0.887923f,0.904661f,1.f);
		ButtonStyling.PressedColor = FLinearColor(0.242281f,0.371238f,0.381326f,1.f);
		
		ButtonStyling.IdleTextFont = FSlateFontInfo(TextFont, 24, TEXT("Light"));
		ButtonStyling.HoveredTextFont = FSlateFontInfo(TextFont, 24, TEXT("Light"));
		ButtonStyling.PressedTextFont = FSlateFontInfo(TextFont, 24, TEXT("Light"));

		ButtonStyling.IdleTextColor = FLinearColor::White;
		ButtonStyling.HoveredTextColor = FLinearColor::Black;
		ButtonStyling.PressedTextColor = FLinearColor::Black;
		
		SetPropertyValue(DropDownItemWidget, TEXT("ButtonStyling"), ButtonStyling);

		DropDownItemWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;
		
		CompileBlueprint(WP);
	}

	void SetupBlueprintAsVNMDropdownContentWidget(UWidgetBlueprint* WP)
	{		
		auto* TextFont = LoadObject<UFont>(
				nullptr,
				TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
				nullptr,
				LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// Background
		{
			auto* Background = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Background"));
			
			auto* BackgroundTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
					nullptr,
					LOAD_None);

			
			Background->SetBrushFromTexture(BackgroundTexture, true);
			Background->Brush.DrawAs = ESlateBrushDrawType::Image;
			Background->ColorAndOpacity = FLinearColor::Black;
			
			auto* BackgroundSlot = OverlayRoot->AddChildToOverlay(Background);
			BackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundSlot->SetVerticalAlignment(VAlign_Fill);
		}

		// SizeContainer
		{
			auto* SizeContainer = WP->WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("SizeContainer"));
			SizeContainer->SetWidthOverride(628.f);
			SizeContainer->SetHeightOverride(320.f);
			
			auto* SizeContainerSlot = OverlayRoot->AddChildToOverlay(SizeContainer);
			SizeContainerSlot->SetHorizontalAlignment(HAlign_Fill);
			SizeContainerSlot->SetVerticalAlignment(VAlign_Fill);

			{
				auto* ScrollBox = WP->WidgetTree->ConstructWidget<UScrollBox>(UScrollBox::StaticClass(), TEXT("ScrollBox"));

				auto* ScrollBoxSlot = Cast<USizeBoxSlot>(SizeContainer->AddChild(ScrollBox));
				ScrollBoxSlot->SetHorizontalAlignment(HAlign_Fill);
				ScrollBoxSlot->SetVerticalAlignment(VAlign_Fill);

				// DropdownList
				{
					auto* DropdownList = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("DropdownList"));

					auto* DropdownListSlot = Cast<UScrollBoxSlot>(ScrollBox->AddChild(DropdownList));
					DropdownListSlot->SetHorizontalAlignment(HAlign_Fill);
					DropdownListSlot->SetVerticalAlignment(VAlign_Fill);
				}

				// DropdownList
				{
					auto* Spacer = WP->WidgetTree->ConstructWidget<USpacer>(USpacer::StaticClass(), TEXT("Spacer"));
					Spacer->SetSize(FVector2D(630.0, 20.0));

					auto* SpacerSlot = Cast<UScrollBoxSlot>(ScrollBox->AddChild(Spacer));
					SpacerSlot->SetHorizontalAlignment(HAlign_Fill);
					SpacerSlot->SetVerticalAlignment(VAlign_Fill);
				}
			}
		}
		
		auto* DropDownContentWidget = WP->GeneratedClass->GetDefaultObject<UVNMDropDownContentWidget>();
		
		SetPropertyValue(DropDownContentWidget, TEXT("RowHeight"), 80.f);
		SetPropertyValue(DropDownContentWidget, TEXT("VisibleRowCount"), 4.f);

		DropDownContentWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;
		
		CompileBlueprint(WP);
	}

	void SetupBlueprintAsVNMDropdownWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> DropdownContentWidgetClass, TObjectPtr<UClass> DropdownItemWidgetClass)
	{
		auto* TextFont = LoadObject<UFont>(
				nullptr,
				TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
				nullptr,
				LOAD_None);
		
		auto* BackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
				nullptr,
				LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// BackgroundImage
		{
			auto* BackgroundImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("BackgroundImage"));
			
			BackgroundImage->SetBrushFromTexture(BackgroundTexture, true);
			BackgroundImage->Brush.DrawAs = ESlateBrushDrawType::Image;
			BackgroundImage->ColorAndOpacity = FLinearColor::White;
			BackgroundImage->ColorAndOpacity.A = 0.2f;
			
			auto* BackgroundSlot = OverlayRoot->AddChildToOverlay(BackgroundImage);
			BackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundSlot->SetVerticalAlignment(VAlign_Fill);
		}

		// DropdownValueText
		{
			auto* DropdownValueText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DropdownValueText"));
			
			DropdownValueText->SetText(FText::FromString(TEXT("Dropdown Value Text")));
			DropdownValueText->SetFont(FSlateFontInfo(TextFont, 24, TEXT("Light")));
			
			auto* DropdownValueTextSlot = OverlayRoot->AddChildToOverlay(DropdownValueText);
			DropdownValueTextSlot->SetHorizontalAlignment(HAlign_Center);
			DropdownValueTextSlot->SetVerticalAlignment(VAlign_Center);
		}

		// DropdownArrowImage
		{
			auto* DropdownArrowImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("DropdownArrowImage"));

			auto* ArrowTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_arrow_toggle_down.btn_arrow_toggle_down'"),
				nullptr,
				LOAD_None);
			DropdownArrowImage->SetBrushFromTexture(ArrowTexture, true);
			DropdownArrowImage->Brush.DrawAs = ESlateBrushDrawType::Image;
			DropdownArrowImage->ColorAndOpacity = FLinearColor::White;
			DropdownArrowImage->Brush.ImageSize = FVector2D(36.8, 36.8);
			
			auto* DropdownArrowImageSlot = OverlayRoot->AddChildToOverlay(DropdownArrowImage);
			DropdownArrowImageSlot->SetHorizontalAlignment(HAlign_Right);
			DropdownArrowImageSlot->SetVerticalAlignment(VAlign_Center);
			DropdownArrowImageSlot->SetPadding(FMargin(0.f, 0.f, 20.f, 0.f));
		}
		
		// DropdownButton
		{
			auto* DropdownButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("DropdownButton"));

			DropdownButton->SetRenderOpacity(0.f);

			auto* DropdownButtonSlot = OverlayRoot->AddChildToOverlay(DropdownButton);
			DropdownButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			DropdownButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		auto* DropDownWidget = WP->GeneratedClass->GetDefaultObject<UVNMDropDownWidget>();
		
		FButtonStyling ButtonStyling;
		ButtonStyling.IdleTexture = BackgroundTexture;
		ButtonStyling.HoveredTexture = BackgroundTexture;
		ButtonStyling.PressedTexture = BackgroundTexture;

		ButtonStyling.IdleColor = FLinearColor::Black;
		ButtonStyling.HoveredColor = FLinearColor(0.701101f,0.887923f,0.904661f,1.f);
		ButtonStyling.PressedColor = FLinearColor(0.242281f,0.371238f,0.381326f,1.f);
		
		ButtonStyling.IdleTextFont = FSlateFontInfo(TextFont, 24, TEXT("Light"));
		ButtonStyling.HoveredTextFont = FSlateFontInfo(TextFont, 24, TEXT("Light"));
		ButtonStyling.PressedTextFont = FSlateFontInfo(TextFont, 24, TEXT("Light"));

		ButtonStyling.IdleTextColor = FLinearColor::White;
		ButtonStyling.HoveredTextColor = FLinearColor::Black;
		ButtonStyling.PressedTextColor = FLinearColor::Black;
		
		
		SetPropertyValue(DropDownWidget, TEXT("DropdownStyling"), ButtonStyling);
		SetPropertyValue(DropDownWidget, TEXT("ItemStyling"), ButtonStyling);
		SetPropertyValue(DropDownWidget, TEXT("DropdownContentWidgetClass"), DropdownContentWidgetClass);
		SetPropertyValue(DropDownWidget, TEXT("DropdownItemWidgetClass"), DropdownItemWidgetClass);

		DropDownWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;
		
		CompileBlueprint(WP);
	}
	
	void SetupBlueprintAsVNMPagingWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> IconButtonClass)
	{
		auto* HorizontalBoxRoot = WP->WidgetTree->ConstructWidget<UHorizontalBox>();
		WP->WidgetTree->RootWidget = HorizontalBoxRoot;

		{
			auto* PreviousPageButton = WP->WidgetTree->ConstructWidget<UMenuButtonWidget>(IconButtonClass, TEXT("PreviousPageButton"));
			PreviousPageButton->SetRenderScale(FVector2D(-1.0, 1.0));

			auto* PreviousPageButtonSlot = HorizontalBoxRoot->AddChildToHorizontalBox(PreviousPageButton);
			PreviousPageButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			PreviousPageButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}

		{
			auto* PageIconList = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("PageIconList"));

			auto* PageIconListSlot = HorizontalBoxRoot->AddChildToHorizontalBox(PageIconList);
			PageIconListSlot->SetHorizontalAlignment(HAlign_Fill);
			PageIconListSlot->SetVerticalAlignment(VAlign_Center);
		}
		
		{
			auto* NextPageButton = WP->WidgetTree->ConstructWidget<UMenuButtonWidget>(IconButtonClass, TEXT("NextPageButton"));

			auto* NextPageButtonSlot = HorizontalBoxRoot->AddChildToHorizontalBox(NextPageButton);
			NextPageButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			NextPageButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		auto* PagingWidget = WP->GeneratedClass->GetDefaultObject<UVNMPagingWidget>();

		auto* PageIconTexture = LoadObject<UTexture2D>(
			nullptr,
			TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/icon_page_toggle.icon_page_toggle'"),
			nullptr,
			LOAD_None);

		SetPropertyValue(PagingWidget, TEXT("NumPages"), 3);
		SetPropertyValue(PagingWidget, TEXT("PageIconTexture"), PageIconTexture);

		PagingWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);		
	}

	void SetupBlueprintAsGalleryDisplayImageVisual(UWidgetBlueprint* WP)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;
		
		// GalleryDisplayImage
		{
			auto* GalleryDisplayImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("GalleryDisplayImage"));
			
			auto* GalleryDisplayImageSlot = OverlayRoot->AddChildToOverlay(GalleryDisplayImage);
			GalleryDisplayImageSlot->SetHorizontalAlignment(HAlign_Fill);
			GalleryDisplayImageSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		// Menu Button
		{
			auto* MenuButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MenuButton"));

			MenuButton->SetRenderOpacity(0.f);

			auto* MenuButtonSlot = OverlayRoot->AddChildToOverlay(MenuButton);
			MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}
	}
	
	void SetupBlueprintAsGalleryImageVisual(UWidgetBlueprint* WP, TObjectPtr<UClass> GalleryDisplayImageVisual)
	{
		auto* SizeBoxRoot = WP->WidgetTree->ConstructWidget<USizeBox>();
		SizeBoxRoot->SetWidthOverride(590.f);
		SizeBoxRoot->SetHeightOverride(336.f);
		WP->WidgetTree->RootWidget = SizeBoxRoot;

		{
			auto* Overlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("Overlay"));

			auto* OverlaySlot = Cast<USizeBoxSlot>(SizeBoxRoot->AddChild(Overlay));
			OverlaySlot->SetHorizontalAlignment(HAlign_Fill);
			OverlaySlot->SetVerticalAlignment(VAlign_Fill);

			// Gradient
			{
				auto* Gradient = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Gradient"));

				auto* GradientTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/gradient_shading_save_load_menu_opac.gradient_shading_save_load_menu_opac'"),
					nullptr,
					LOAD_None);
				Gradient->SetBrushFromTexture(GradientTexture, true);
			
				auto* GradientSlot = Overlay->AddChildToOverlay(Gradient);
				GradientSlot->SetHorizontalAlignment(HAlign_Fill);
				GradientSlot->SetVerticalAlignment(VAlign_Fill);
			}
			
			// GalleryPreviewImage
			{
				auto* GalleryPreviewImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("GalleryPreviewImage"));

				auto* PreviewImageTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_1080p.background_1080p'"),
					nullptr,
					LOAD_None);
				GalleryPreviewImage->SetBrushFromTexture(PreviewImageTexture, true);
			
				auto* GalleryPreviewImageSlot = Overlay->AddChildToOverlay(GalleryPreviewImage);
				GalleryPreviewImageSlot->SetHorizontalAlignment(HAlign_Fill);
				GalleryPreviewImageSlot->SetVerticalAlignment(VAlign_Fill);
				GalleryPreviewImageSlot->SetPadding(FMargin(10.f));
			}

			// GalleryLockBlur
			{
				auto* GalleryLockBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("GalleryLockBlur"));
				GalleryLockBlur->SetBlurStrength(30.f);
				GalleryLockBlur->SetVisibility(ESlateVisibility::Collapsed);
			
				auto* GalleryLockBlurSlot = Overlay->AddChildToOverlay(GalleryLockBlur);
				GalleryLockBlurSlot->SetHorizontalAlignment(HAlign_Fill);
				GalleryLockBlurSlot->SetVerticalAlignment(VAlign_Fill);
			}

			// GalleryLockImage
			{
				auto* GalleryLockImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("GalleryLockImage"));

				auto* LockTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_padlock.icon_padlock'"),
					nullptr,
					LOAD_None);
				GalleryLockImage->SetBrushFromTexture(LockTexture, true);
				GalleryLockImage->SetVisibility(ESlateVisibility::Collapsed);
			
				auto* GalleryLockImageSlot = Overlay->AddChildToOverlay(GalleryLockImage);
				GalleryLockImageSlot->SetHorizontalAlignment(HAlign_Center);
				GalleryLockImageSlot->SetVerticalAlignment(VAlign_Center);
			}

			// Border
			{
				auto* Border = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Border"));

				auto* LockTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/frame_save_load_menu.frame_save_load_menu'"),
					nullptr,
					LOAD_None);
				Border->SetBrushFromTexture(LockTexture, true);
			
				auto* BorderSlot = Overlay->AddChildToOverlay(Border);
				BorderSlot->SetHorizontalAlignment(HAlign_Fill);
				BorderSlot->SetVerticalAlignment(VAlign_Fill);
			}
		
			// Menu Button
			{
				auto* MenuButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MenuButton"));

				MenuButton->SetRenderOpacity(0.f);

				auto* MenuButtonSlot = Overlay->AddChildToOverlay(MenuButton);
				MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
				MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}
		
		
		auto* GalleryImageVisual = WP->GeneratedClass->GetDefaultObject<UGalleryImageVisual>();

		SetPropertyValue(GalleryImageVisual, TEXT("GalleryDisplayImageVisualClass"), GalleryDisplayImageVisual);

		GalleryImageVisual->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);	
	}
	
	void SetupBlueprintAsGalleryWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> GalleryImageVisualClass, TObjectPtr<UClass> PagingWidgetClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* VerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("VerticalBox"));

			auto* VerticalBoxSlot = OverlayRoot->AddChildToOverlay(VerticalBox);
			VerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
			VerticalBoxSlot->SetVerticalAlignment(VAlign_Fill);
			VerticalBoxSlot->SetPadding(FMargin(34.f, 25.f, 0.f, 0.f));

			{
				auto* WidgetTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WidgetTitleText"));
				WidgetTitleText->SetText(NSLOCTEXT("VNM", "GalleryWidgetTitle", "GALLERY"));
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				WidgetTitleText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
				WidgetTitleText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));				

				auto* WidgetTitleTextSlot = VerticalBox->AddChildToVerticalBox(WidgetTitleText);
				WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Left);
				WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Fill);
				WidgetTitleTextSlot->SetPadding(FMargin(10.f, 0.f, 0.f, 0.f));
			}

			{
				auto* GalleryCgList = WP->WidgetTree->ConstructWidget<UUniformGridPanel>(UUniformGridPanel::StaticClass(), TEXT("GalleryCgList"));
				GalleryCgList->SlotPadding = FMargin(10.f);

				auto* GalleryCgListSlot = VerticalBox->AddChildToVerticalBox(GalleryCgList);
				GalleryCgListSlot->SetHorizontalAlignment(HAlign_Left);
				GalleryCgListSlot->SetVerticalAlignment(VAlign_Fill);
				GalleryCgListSlot->SetPadding(FMargin(0.f, 90.f, 0.f, 0.f));

				for (int32 Row = 0; Row < 2; Row++)
				{
					for (int32 Column = 0; Column < 3; Column++)
					{
						auto* GalleryImageVisual = WP->WidgetTree->ConstructWidget<UGalleryImageVisual>(GalleryImageVisualClass);

						auto* GalleryImageVisualSlot = GalleryCgList->AddChildToUniformGrid(GalleryImageVisual);
						GalleryImageVisualSlot->SetRow(Row);
						GalleryImageVisualSlot->SetColumn(Column);
					}
				}
			}

			{
				auto* PagingWidget = WP->WidgetTree->ConstructWidget<UVNMPagingWidget>(PagingWidgetClass, TEXT("PagingWidget"));

				auto* PagingWidgetSlot = VerticalBox->AddChildToVerticalBox(PagingWidget);
				PagingWidgetSlot->SetHorizontalAlignment(HAlign_Center);
				PagingWidgetSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}
		
		auto* GalleryWidget = WP->GeneratedClass->GetDefaultObject<UGalleryWidget>();

		GalleryWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);	
	}

	void SetupBlueprintAsUSaveGameVisual(UWidgetBlueprint* WP, TObjectPtr<UClass> DeleteButtonClass)
	{
		auto* VerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>();
		WP->WidgetTree->RootWidget = VerticalBox;
		{
			auto* SizeBox = WP->WidgetTree->ConstructWidget<USizeBox>();
			SizeBox->SetWidthOverride(590.f);
			SizeBox->SetHeightOverride(336.f);

			auto* SizeBoxSlot = VerticalBox->AddChildToVerticalBox(SizeBox);
			SizeBoxSlot->SetHorizontalAlignment(HAlign_Fill);
			SizeBoxSlot->SetVerticalAlignment(VAlign_Fill);			

			{
				auto* Overlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("Overlay"));

				auto* OverlaySlot = Cast<USizeBoxSlot>(SizeBox->AddChild(Overlay));
				OverlaySlot->SetHorizontalAlignment(HAlign_Fill);
				OverlaySlot->SetVerticalAlignment(VAlign_Fill);

				// PlusSign
				{
					auto* PlusSign = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PlusSign"));

					auto* LockTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_plus_shape_large.icon_plus_shape_large'"),
						nullptr,
						LOAD_None);
					PlusSign->SetBrushFromTexture(LockTexture, true);
			
					auto* PlusSignSlot = Overlay->AddChildToOverlay(PlusSign);
					PlusSignSlot->SetHorizontalAlignment(HAlign_Center);
					PlusSignSlot->SetVerticalAlignment(VAlign_Center);
				}

				// Gradient
				{
					auto* Gradient = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Gradient"));

					auto* GradientTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/gradient_shading_save_load_menu_opac.gradient_shading_save_load_menu_opac'"),
						nullptr,
						LOAD_None);
					Gradient->SetBrushFromTexture(GradientTexture, true);
			
					auto* GradientSlot = Overlay->AddChildToOverlay(Gradient);
					GradientSlot->SetHorizontalAlignment(HAlign_Fill);
					GradientSlot->SetVerticalAlignment(VAlign_Fill);
				}
			
				// SaveGameImage
				{
					auto* SaveGameImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("SaveGameImage"));

					auto* PreviewImageTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_1080p.background_1080p'"),
						nullptr,
						LOAD_None);
					SaveGameImage->SetBrushFromTexture(PreviewImageTexture, true);
			
					auto* GalleryPreviewImageSlot = Overlay->AddChildToOverlay(SaveGameImage);
					GalleryPreviewImageSlot->SetHorizontalAlignment(HAlign_Fill);
					GalleryPreviewImageSlot->SetVerticalAlignment(VAlign_Fill);
					GalleryPreviewImageSlot->SetPadding(FMargin(10.f));
				}

				// Border
				{
					auto* Border = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Border"));

					auto* BorderTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/frame_save_load_menu.frame_save_load_menu'"),
						nullptr,
						LOAD_None);
					Border->SetBrushFromTexture(BorderTexture, true);
			
					auto* BorderSlot = Overlay->AddChildToOverlay(Border);
					BorderSlot->SetHorizontalAlignment(HAlign_Fill);
					BorderSlot->SetVerticalAlignment(VAlign_Fill);
				}
		
				// Menu Button
				{
					auto* MenuButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MenuButton"));

					MenuButton->SetRenderOpacity(0.f);

					auto* MenuButtonSlot = Overlay->AddChildToOverlay(MenuButton);
					MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}
		
				// Delete Button
				{
					auto* DeleteButton = WP->WidgetTree->ConstructWidget<UMenuIconButtonWidget>(DeleteButtonClass, TEXT("DeleteButton"));

					DeleteButton->SetRenderScale(FVector2D(0.5, 0.5));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuIconButtonWidget, FButtonStyling>(DeleteButton, TEXT("Style"));

					auto* DeleteIconTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_delete.btn_delete'"),
						nullptr,
						LOAD_None);

					ButtonStyling.IdleTexture = DeleteIconTexture;
					ButtonStyling.HoveredTexture = DeleteIconTexture;
					ButtonStyling.PressedTexture = DeleteIconTexture;
					ButtonStyling.SelectedTexture = DeleteIconTexture;
					ButtonStyling.SelectedHoveredTexture = DeleteIconTexture;
					ButtonStyling.SelectedPressedTexture = DeleteIconTexture;
					ButtonStyling.LockedTexture = DeleteIconTexture;
					
					SetPropertyValue(DeleteButton, TEXT("Style"), ButtonStyling);

					auto* DeleteButtonSlot = Overlay->AddChildToOverlay(DeleteButton);
					DeleteButtonSlot->SetHorizontalAlignment(HAlign_Right);
					DeleteButtonSlot->SetVerticalAlignment(VAlign_Top);
				}
			}

			
			{
				auto* SaveGameName = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SaveGameName"));
				
				SaveGameName->SetText(NSLOCTEXT("VNM", "SaveGameVisualNewSaveGame", "NEW SAVE GAME"));
				SaveGameName->SetJustification(ETextJustify::Center);
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				SaveGameName->SetFont(FSlateFontInfo(TextFont, 30, TEXT("Light")));			

				auto* SaveGameNameSlot = VerticalBox->AddChildToVerticalBox(SaveGameName);
				SaveGameNameSlot->SetHorizontalAlignment(HAlign_Fill);
				SaveGameNameSlot->SetVerticalAlignment(VAlign_Fill);
				SaveGameNameSlot->SetPadding(FMargin(0.f, 16.f, 0.f, 0.f));
			}
		}
		
		
		auto* SaveGameVisual = WP->GeneratedClass->GetDefaultObject<USaveGameVisual>();
		
		SaveGameVisual->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);	
	}
	
	void SetupBlueprintAsSaveGameWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> SaveGameVisualClass, TObjectPtr<UClass> PagingWidgetClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* VerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("VerticalBox"));

			auto* VerticalBoxSlot = OverlayRoot->AddChildToOverlay(VerticalBox);
			VerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
			VerticalBoxSlot->SetVerticalAlignment(VAlign_Fill);
			VerticalBoxSlot->SetPadding(FMargin(34.f, 25.f, 0.f, 0.f));

			{
				auto* WidgetTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WidgetTitleText"));
				WidgetTitleText->SetText(NSLOCTEXT("VNM", "SaveGameWidgetTitle", "SAVE GAME"));
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				WidgetTitleText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
				WidgetTitleText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));				

				auto* WidgetTitleTextSlot = VerticalBox->AddChildToVerticalBox(WidgetTitleText);
				WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Left);
				WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Fill);
				WidgetTitleTextSlot->SetPadding(FMargin(10.f, 0.f, 0.f, 0.f));
			}

			{
				auto* GalleryCgList = WP->WidgetTree->ConstructWidget<UUniformGridPanel>(UUniformGridPanel::StaticClass(), TEXT("SaveGameList"));
				GalleryCgList->SlotPadding = FMargin(10.f);

				auto* GalleryCgListSlot = VerticalBox->AddChildToVerticalBox(GalleryCgList);
				GalleryCgListSlot->SetHorizontalAlignment(HAlign_Left);
				GalleryCgListSlot->SetVerticalAlignment(VAlign_Fill);
				GalleryCgListSlot->SetPadding(FMargin(0.f, 90.f, 0.f, 0.f));

				for (int32 Row = 0; Row < 2; Row++)
				{
					for (int32 Column = 0; Column < 3; Column++)
					{
						auto* SaveGameVisual = WP->WidgetTree->ConstructWidget<USaveGameVisual>(SaveGameVisualClass);
						
						SetPropertyValue(SaveGameVisual, TEXT("SlotIndex"), Row * 3 + Column + 1);
						SetPropertyValue(SaveGameVisual, TEXT("bIsForSaving"), true);

						auto* SaveGameVisualSlot = GalleryCgList->AddChildToUniformGrid(SaveGameVisual);
						SaveGameVisualSlot->SetRow(Row);
						SaveGameVisualSlot->SetColumn(Column);
					}
				}
			}

			{
				auto* PagingWidget = WP->WidgetTree->ConstructWidget<UVNMPagingWidget>(PagingWidgetClass, TEXT("PagingWidget"));

				auto* PagingWidgetSlot = VerticalBox->AddChildToVerticalBox(PagingWidget);
				PagingWidgetSlot->SetHorizontalAlignment(HAlign_Center);
				PagingWidgetSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}
		
		auto* SaveGameWidget = WP->GeneratedClass->GetDefaultObject<USaveGameWidget>();

		SaveGameWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);	
	}
	
	void SetupBlueprintAsLoadGameWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> SaveGameVisualClass, TObjectPtr<UClass> PagingWidgetClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* VerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("VerticalBox"));

			auto* VerticalBoxSlot = OverlayRoot->AddChildToOverlay(VerticalBox);
			VerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
			VerticalBoxSlot->SetVerticalAlignment(VAlign_Fill);
			VerticalBoxSlot->SetPadding(FMargin(34.f, 25.f, 0.f, 0.f));

			{
				auto* WidgetTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WidgetTitleText"));
				WidgetTitleText->SetText(NSLOCTEXT("VNM", "LoadGameWidgetTitle", "LOAD GAME"));
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				WidgetTitleText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
				WidgetTitleText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));				

				auto* WidgetTitleTextSlot = VerticalBox->AddChildToVerticalBox(WidgetTitleText);
				WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Left);
				WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Fill);
				WidgetTitleTextSlot->SetPadding(FMargin(10.f, 0.f, 0.f, 0.f));
			}

			{
				auto* GalleryCgList = WP->WidgetTree->ConstructWidget<UUniformGridPanel>(UUniformGridPanel::StaticClass(), TEXT("SaveGameList"));
				GalleryCgList->SlotPadding = FMargin(10.f);

				auto* GalleryCgListSlot = VerticalBox->AddChildToVerticalBox(GalleryCgList);
				GalleryCgListSlot->SetHorizontalAlignment(HAlign_Left);
				GalleryCgListSlot->SetVerticalAlignment(VAlign_Fill);
				GalleryCgListSlot->SetPadding(FMargin(0.f, 90.f, 0.f, 0.f));

				for (int32 Row = 0; Row < 2; Row++)
				{
					for (int32 Column = 0; Column < 3; Column++)
					{
						auto* SaveGameVisual = WP->WidgetTree->ConstructWidget<USaveGameVisual>(SaveGameVisualClass);
						
						SetPropertyValue(SaveGameVisual, TEXT("SlotIndex"), Row * 3 + Column + 1);
						SetPropertyValue(SaveGameVisual, TEXT("bIsForSaving"), false);

						auto* SaveGameVisualSlot = GalleryCgList->AddChildToUniformGrid(SaveGameVisual);
						SaveGameVisualSlot->SetRow(Row);
						SaveGameVisualSlot->SetColumn(Column);
					}
				}
			}

			{
				auto* PagingWidget = WP->WidgetTree->ConstructWidget<UVNMPagingWidget>(PagingWidgetClass, TEXT("PagingWidget"));

				auto* PagingWidgetSlot = VerticalBox->AddChildToVerticalBox(PagingWidget);
				PagingWidgetSlot->SetHorizontalAlignment(HAlign_Center);
				PagingWidgetSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}
		
		auto* LoadGameWidget = WP->GeneratedClass->GetDefaultObject<ULoadGameWidget>();

		LoadGameWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);	
	}

	void SetupBlueprintAsVNMBasePopUpWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> ButtonClass)
	{
		auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* PopUpBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("PopUpBlur"));
			PopUpBlur->SetBlurStrength(30.f);
			
			auto* PopUpBlurSlot = OverlayRoot->AddChildToOverlay(PopUpBlur);
			PopUpBlurSlot->SetHorizontalAlignment(HAlign_Fill);
			PopUpBlurSlot->SetVerticalAlignment(VAlign_Fill);
		}

		{
			auto* PopUpOverlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("PopUpOverlay"));
			
			auto* PopUpOverlaySlot = OverlayRoot->AddChildToOverlay(PopUpOverlay);
			PopUpOverlaySlot->SetHorizontalAlignment(HAlign_Center);
			PopUpOverlaySlot->SetVerticalAlignment(VAlign_Center);

			{
				auto* PopUpBackground = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PopUpBackground"));
				
				auto* BackgroundTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_2160p.background_2160p'"),
						nullptr,
						LOAD_None);
				PopUpBackground->SetBrushFromTexture(BackgroundTexture, true);
				PopUpBackground->Brush.ImageSize = FVector2D(1097.142857,617.142857);
				
				auto* PopUpBackgroundSlot = PopUpOverlay->AddChildToOverlay(PopUpBackground);
				PopUpBackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
				PopUpBackgroundSlot->SetVerticalAlignment(VAlign_Fill);
			}

			{
				auto* PopUpVerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("PopUpVerticalBox"));
			
				auto* PopUpVerticalBoxSlot = PopUpOverlay->AddChildToOverlay(PopUpVerticalBox);
				PopUpVerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
				PopUpVerticalBoxSlot->SetVerticalAlignment(VAlign_Fill);

				{
					auto* PopUpTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("TitleText"));
					PopUpTitleText->SetText(FText::FromString(TEXT("Title Text")));

					PopUpTitleText->SetFont(FSlateFontInfo(TextFont, 35, TEXT("Bold")));
					PopUpTitleText->SetColorAndOpacity(FLinearColor::White);				

					auto* WidgetTitleTextSlot = PopUpVerticalBox->AddChildToVerticalBox(PopUpTitleText);
					WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Center);
					WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Fill);
					WidgetTitleTextSlot->SetPadding(FMargin(50.f));
				}

				{
					auto* PopUpDescriptionText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DescriptionText"));
					PopUpDescriptionText->SetText(FText::FromString(TEXT("Long description text")));

					PopUpDescriptionText->SetFont(FSlateFontInfo(TextFont, 24, TEXT("Bold")));
					PopUpDescriptionText->SetColorAndOpacity(FLinearColor::White);				

					auto* PopUpDescriptionTextSlot = PopUpVerticalBox->AddChildToVerticalBox(PopUpDescriptionText);
					PopUpDescriptionTextSlot->SetHorizontalAlignment(HAlign_Center);
					PopUpDescriptionTextSlot->SetVerticalAlignment(VAlign_Center);
					PopUpDescriptionTextSlot->SetPadding(FMargin(25.f));
					PopUpDescriptionTextSlot->SetSize(FSlateChildSize());
				}

				{
					auto* PopUpButtonBox = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("PopUpButtonBox"));
			
					auto* PopUpButtonBoxSlot = PopUpVerticalBox->AddChildToVerticalBox(PopUpButtonBox);
					PopUpButtonBoxSlot->SetHorizontalAlignment(HAlign_Fill);
					PopUpButtonBoxSlot->SetVerticalAlignment(VAlign_Bottom);
					PopUpButtonBoxSlot->SetSize(FSlateChildSize());
					
					{
						auto* MenuButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(ButtonClass, TEXT("ConfirmButton"));
			
						auto* MenuButtonSlot = PopUpButtonBox->AddChildToHorizontalBox(MenuButton);
						MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
						MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
						MenuButtonSlot->SetPadding(FMargin(1.f));
					}
					
					{
						auto* MenuButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(ButtonClass, TEXT("CancelButton"));
			
						auto* MenuButtonSlot = PopUpButtonBox->AddChildToHorizontalBox(MenuButton);
						MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
						MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
						MenuButtonSlot->SetPadding(FMargin(1.f));
					}
				}
			}
		}
	}

	void SetupBlueprintAsVNMBaseTextPopUpWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> ButtonClass)
	{
		auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* PopUpBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("PopUpBlur"));
			PopUpBlur->SetBlurStrength(30.f);
			
			auto* PopUpBlurSlot = OverlayRoot->AddChildToOverlay(PopUpBlur);
			PopUpBlurSlot->SetHorizontalAlignment(HAlign_Fill);
			PopUpBlurSlot->SetVerticalAlignment(VAlign_Fill);
		}

		{
			auto* PopUpOverlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("PopUpOverlay"));
			
			auto* PopUpOverlaySlot = OverlayRoot->AddChildToOverlay(PopUpOverlay);
			PopUpOverlaySlot->SetHorizontalAlignment(HAlign_Center);
			PopUpOverlaySlot->SetVerticalAlignment(VAlign_Center);

			{
				auto* PopUpBackground = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PopUpBackground"));
				
				auto* BackgroundTexture = LoadObject<UTexture2D>(
						nullptr,
						TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_2160p.background_2160p'"),
						nullptr,
						LOAD_None);
				PopUpBackground->SetBrushFromTexture(BackgroundTexture, true);
				PopUpBackground->Brush.ImageSize = FVector2D(1097.142857,617.142857);
				
				auto* PopUpBackgroundSlot = PopUpOverlay->AddChildToOverlay(PopUpBackground);
				PopUpBackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
				PopUpBackgroundSlot->SetVerticalAlignment(VAlign_Fill);
			}

			{
				auto* PopUpVerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("PopUpVerticalBox"));
			
				auto* PopUpVerticalBoxSlot = PopUpOverlay->AddChildToOverlay(PopUpVerticalBox);
				PopUpVerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
				PopUpVerticalBoxSlot->SetVerticalAlignment(VAlign_Fill);

				{
					auto* PopUpTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("TitleText"));
					PopUpTitleText->SetText(FText::FromString(TEXT("Title Text")));

					PopUpTitleText->SetFont(FSlateFontInfo(TextFont, 35, TEXT("Bold")));
					PopUpTitleText->SetColorAndOpacity(FLinearColor::White);				

					auto* WidgetTitleTextSlot = PopUpVerticalBox->AddChildToVerticalBox(PopUpTitleText);
					WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Center);
					WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Fill);
					WidgetTitleTextSlot->SetPadding(FMargin(50.f));
				}

				{
					auto* PopUpContentBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("PopUpContentBox"));
			
					auto* PopUpContentBoxSlot = PopUpVerticalBox->AddChildToVerticalBox(PopUpContentBox);
					PopUpContentBoxSlot->SetHorizontalAlignment(HAlign_Fill);
					PopUpContentBoxSlot->SetVerticalAlignment(VAlign_Center);
					PopUpContentBoxSlot->SetPadding(FMargin(25.f));
					PopUpContentBoxSlot->SetSize(FSlateChildSize());
					
					{
						auto* PopUpDescriptionText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DescriptionText"));
						PopUpDescriptionText->SetText(FText::FromString(TEXT("Long description text")));
						PopUpDescriptionText->SetJustification(ETextJustify::Center);

						PopUpDescriptionText->SetFont(FSlateFontInfo(TextFont, 24, TEXT("Bold")));
						PopUpDescriptionText->SetColorAndOpacity(FLinearColor::White);				

						auto* PopUpDescriptionTextSlot = PopUpContentBox->AddChildToVerticalBox(PopUpDescriptionText);
						PopUpDescriptionTextSlot->SetHorizontalAlignment(HAlign_Fill);
						PopUpDescriptionTextSlot->SetVerticalAlignment(VAlign_Fill);
						PopUpDescriptionTextSlot->SetPadding(FMargin(5.f));
					}

					{
						auto* PopUpTextBox = WP->WidgetTree->ConstructWidget<UEditableTextBox>(UEditableTextBox::StaticClass(), TEXT("PopUpTextBox"));

						FEditableTextBoxStyle DialogTextBoxTextStyle = FUMGCoreStyle::Get().GetWidgetStyle<FEditableTextBoxStyle>("NormalEditableTextBox");
						DialogTextBoxTextStyle.SetFont(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 24 ));

						DialogTextBoxTextStyle.ForegroundColor = FLinearColor::Black;
						DialogTextBoxTextStyle.FocusedForegroundColor = FLinearColor::Black;
						
						PopUpTextBox->WidgetStyle = DialogTextBoxTextStyle;
					
						auto* PopUpTextBoxSlot = PopUpContentBox->AddChildToVerticalBox(PopUpTextBox);
						PopUpTextBoxSlot->SetHorizontalAlignment(HAlign_Fill);
						PopUpTextBoxSlot->SetVerticalAlignment(VAlign_Fill);
						PopUpTextBoxSlot->SetPadding(FMargin(5.f));
					}
				}

				{
					auto* PopUpButtonBox = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("PopUpButtonBox"));
			
					auto* PopUpButtonBoxSlot = PopUpVerticalBox->AddChildToVerticalBox(PopUpButtonBox);
					PopUpButtonBoxSlot->SetHorizontalAlignment(HAlign_Fill);
					PopUpButtonBoxSlot->SetVerticalAlignment(VAlign_Bottom);
					PopUpButtonBoxSlot->SetSize(FSlateChildSize());
					
					{
						auto* MenuButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(ButtonClass, TEXT("ConfirmButton"));
			
						auto* MenuButtonSlot = PopUpButtonBox->AddChildToHorizontalBox(MenuButton);
						MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
						MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
						MenuButtonSlot->SetPadding(FMargin(1.f));
					}
					
					{
						auto* MenuButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(ButtonClass, TEXT("CancelButton"));
			
						auto* MenuButtonSlot = PopUpButtonBox->AddChildToHorizontalBox(MenuButton);
						MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
						MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
						MenuButtonSlot->SetPadding(FMargin(1.f));
					}
				}
			}
		}
	}

	void SetupBlueprintAsWindowModeVisual(UWidgetBlueprint* WP)
	{
		auto* Overlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("Overlay"));
		WP->WidgetTree->RootWidget = Overlay;
		
		// Frame
		{
			auto* Frame = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Frame"));

			auto* FrameTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/frame_save_load_menu.frame_save_load_menu'"),
				nullptr,
				LOAD_None);
			Frame->SetBrushFromTexture(FrameTexture, true);
			Frame->Brush.ImageSize = FVector2D(660.0, 336.0);
			Frame->SetRenderOpacity(0.23f);
	
			auto* FrameSlot = Overlay->AddChildToOverlay(Frame);
			FrameSlot->SetHorizontalAlignment(HAlign_Fill);
			FrameSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		// Gradient
		{
			auto* Gradient = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Gradient"));

			auto* GradientTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/gradient_shading_save_load_menu_opac.gradient_shading_save_load_menu_opac'"),
				nullptr,
				LOAD_None);
			Gradient->SetBrushFromTexture(GradientTexture, true);
	
			auto* GradientSlot = Overlay->AddChildToOverlay(Gradient);
			GradientSlot->SetHorizontalAlignment(HAlign_Fill);
			GradientSlot->SetVerticalAlignment(VAlign_Fill);
		}
	
		// SelectedIndicator
		{
			auto* SelectedIndicator = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("SelectedIndicator"));

			auto* SelectedIndicatorTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/marker_selection_frame.marker_selection_frame'"),
				nullptr,
				LOAD_None);
			SelectedIndicator->SetBrushFromTexture(SelectedIndicatorTexture, true);
			SelectedIndicator->SetRenderOpacity(0.23f);
	
			auto* SelectedIndicatorSlot = Overlay->AddChildToOverlay(SelectedIndicator);
			SelectedIndicatorSlot->SetHorizontalAlignment(HAlign_Left);
			SelectedIndicatorSlot->SetVerticalAlignment(VAlign_Top);
		}

		{
			auto* WindowModeInfoBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("WindowModeInfoBox"));
	
			auto* WindowModeInfoBoxSlot = Overlay->AddChildToOverlay(WindowModeInfoBox);
			WindowModeInfoBoxSlot->SetHorizontalAlignment(HAlign_Center);
			WindowModeInfoBoxSlot->SetVerticalAlignment(VAlign_Center);

			// WindowModeIcon
			{
				auto* WindowModeIcon = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("WindowModeIcon"));

				auto* WindowModeIconTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_fullscreen.icon_fullscreen'"),
					nullptr,
					LOAD_None);
				WindowModeIcon->SetBrushFromTexture(WindowModeIconTexture, true);
	
				auto* WindowModeIconSlot = WindowModeInfoBox->AddChildToVerticalBox(WindowModeIcon);
				WindowModeIconSlot->SetHorizontalAlignment(HAlign_Center);
				WindowModeIconSlot->SetVerticalAlignment(VAlign_Fill);
				WindowModeIconSlot->SetPadding(FMargin(0.f, 0.f, 0.f, 36.f));
			}

			{
				auto* WindowModeLabel = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WindowModeLabel"));
				WindowModeLabel->SetText(FText::FromString(TEXT("Fullscreen")));
				WindowModeLabel->SetJustification(ETextJustify::Center);
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				WindowModeLabel->SetFont(FSlateFontInfo(TextFont, 35, TEXT("Light")));
				WindowModeLabel->SetColorAndOpacity(FLinearColor::White);				

				auto* WindowModeLabelSlot = WindowModeInfoBox->AddChildToVerticalBox(WindowModeLabel);
				WindowModeLabelSlot->SetHorizontalAlignment(HAlign_Fill);
				WindowModeLabelSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}

		// Menu Button
		{
			auto* MenuButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MenuButton"));

			MenuButton->SetRenderOpacity(0.f);

			auto* MenuButtonSlot = Overlay->AddChildToOverlay(MenuButton);
			MenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			MenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		auto* WindowModeVisual = WP->GeneratedClass->GetDefaultObject<UMenuButtonWidget>();
		
		WindowModeVisual->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		AddVariableToBlueprint(UEdGraphSchema_K2::PC_Object, TEXT("WindowModeIconTexture"), UTexture2D::StaticClass(), WP);
		AddVariableToBlueprint(UEdGraphSchema_K2::PC_Text, TEXT("WindowModeText"), nullptr, WP);

		CompileBlueprint(WP);	
	}

	void SetupBlueprintAsOptionsWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> WindowModeVisualClass, TObjectPtr<UClass> DropdownWidgetClass, TObjectPtr<UClass> SliderWidgetClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* VerticalBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("VerticalBox"));

			auto* VerticalBoxSlot = OverlayRoot->AddChildToOverlay(VerticalBox);
			VerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
			VerticalBoxSlot->SetVerticalAlignment(VAlign_Fill);
			VerticalBoxSlot->SetPadding(FMargin(34.f, 25.f, 0.f, 0.f));
			
			{
				auto* WidgetTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WidgetTitleText"));
				WidgetTitleText->SetText(NSLOCTEXT("VNM", "OptionsWidgetTitle", "OPTIONS"));
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				WidgetTitleText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
				WidgetTitleText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));				

				auto* WidgetTitleTextSlot = VerticalBox->AddChildToVerticalBox(WidgetTitleText);
				WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Left);
				WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Fill);
				WidgetTitleTextSlot->SetPadding(FMargin(10.f, 0.f, 0.f, 0.f));
			}
			
			{
				auto* OptionsContentBox = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("OptionsContentBox"));

				auto* OptionsContentBoxSlot = VerticalBox->AddChildToVerticalBox(OptionsContentBox);
				OptionsContentBoxSlot->SetHorizontalAlignment(HAlign_Fill);
				OptionsContentBoxSlot->SetVerticalAlignment(VAlign_Fill);
				OptionsContentBoxSlot->SetPadding(FMargin(100.f, 242.f, 100.f, 0.f));
			
				{
					auto* WindowModesBox = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("WindowModesBox"));

					auto* WindowModesBoxSlot = OptionsContentBox->AddChildToVerticalBox(WindowModesBox);
					WindowModesBoxSlot->SetHorizontalAlignment(HAlign_Fill);
					WindowModesBoxSlot->SetVerticalAlignment(VAlign_Center);

					{
						auto* FullscreenOptionBox = WP->WidgetTree->ConstructWidget<UScaleBox>(UScaleBox::StaticClass(), TEXT("FullscreenOptionBox"));
						FullscreenOptionBox->Stretch = EStretch::UserSpecified;
						FullscreenOptionBox->UserSpecifiedScale = 0.8f;

						auto* FullscreenOptionBoxSlot = WindowModesBox->AddChildToHorizontalBox(FullscreenOptionBox);
						FullscreenOptionBoxSlot->SetHorizontalAlignment(HAlign_Fill);
						FullscreenOptionBoxSlot->SetVerticalAlignment(VAlign_Fill);
						FullscreenOptionBoxSlot->SetPadding(FMargin(10.f));
						FullscreenOptionBoxSlot->SetSize(FSlateChildSize());

						{
							auto* FullscreenOptionButton = WP->WidgetTree->ConstructWidget<UMenuButtonWidget>(WindowModeVisualClass, TEXT("DisplayOptionFullScreen"));

							auto* WindowModeIconTexture = LoadObject<UTexture2D>(
							nullptr,
							TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_fullscreen.icon_fullscreen'"),
							nullptr,
							LOAD_None);
							
							SetPropertyValue(FullscreenOptionButton, TEXT("WindowModeIconTexture"), WindowModeIconTexture, WindowModeVisualClass);
							SetPropertyValue(FullscreenOptionButton, TEXT("WindowModeText"), NSLOCTEXT("VNM", "WindowModeFullscreenText", "FULLSCREEN"), WindowModeVisualClass);
							
							auto* FullscreenOptionButtonSlot = Cast<UScaleBoxSlot>(FullscreenOptionBox->AddChild(FullscreenOptionButton));
							FullscreenOptionButtonSlot->SetHorizontalAlignment(HAlign_Center);
							FullscreenOptionButtonSlot->SetVerticalAlignment(VAlign_Center);
						}
					}

					{
						auto* WindowedFullScreenOptionBox = WP->WidgetTree->ConstructWidget<UScaleBox>(UScaleBox::StaticClass(), TEXT("WindowedFullScreenOptionBox"));
						WindowedFullScreenOptionBox->Stretch = EStretch::UserSpecified;
						WindowedFullScreenOptionBox->UserSpecifiedScale = 0.8f;

						auto* WindowedFullScreenOptionBoxSlot = WindowModesBox->AddChildToHorizontalBox(WindowedFullScreenOptionBox);
						WindowedFullScreenOptionBoxSlot->SetHorizontalAlignment(HAlign_Fill);
						WindowedFullScreenOptionBoxSlot->SetVerticalAlignment(VAlign_Fill);
						WindowedFullScreenOptionBoxSlot->SetPadding(FMargin(10.f));
						WindowedFullScreenOptionBoxSlot->SetSize(FSlateChildSize());

						{
							auto* WindowedFullScreenOptionButton = WP->WidgetTree->ConstructWidget<UMenuButtonWidget>(WindowModeVisualClass, TEXT("DisplayOptionWindowedFullScreen"));

							auto* WindowModeIconTexture = LoadObject<UTexture2D>(
							nullptr,
							TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_windowed_fullscreen.icon_windowed_fullscreen'"),
							nullptr,
							LOAD_None);
							
							SetPropertyValue(WindowedFullScreenOptionButton, TEXT("WindowModeIconTexture"), WindowModeIconTexture, WindowModeVisualClass);
							SetPropertyValue(WindowedFullScreenOptionButton, TEXT("WindowModeText"), NSLOCTEXT("VNM", "WindowModeWindowedFullScreenText", "WINDOWED FULLSCREEN"), WindowModeVisualClass);
							
							auto* WindowedFullScreenOptionButtonSlot = Cast<UScaleBoxSlot>(WindowedFullScreenOptionBox->AddChild(WindowedFullScreenOptionButton));
							WindowedFullScreenOptionButtonSlot->SetHorizontalAlignment(HAlign_Center);
							WindowedFullScreenOptionButtonSlot->SetVerticalAlignment(VAlign_Center);
						}
					}

					{
						auto* WindowedOptionBox = WP->WidgetTree->ConstructWidget<UScaleBox>(UScaleBox::StaticClass(), TEXT("WindowedOptionBox"));
						WindowedOptionBox->Stretch = EStretch::UserSpecified;
						WindowedOptionBox->UserSpecifiedScale = 0.8f;

						auto* WindowedOptionBoxSlot = WindowModesBox->AddChildToHorizontalBox(WindowedOptionBox);
						WindowedOptionBoxSlot->SetHorizontalAlignment(HAlign_Fill);
						WindowedOptionBoxSlot->SetVerticalAlignment(VAlign_Fill);
						WindowedOptionBoxSlot->SetPadding(FMargin(10.f));
						WindowedOptionBoxSlot->SetSize(FSlateChildSize());

						{
							auto* WindowedOptionButton = WP->WidgetTree->ConstructWidget<UMenuButtonWidget>(WindowModeVisualClass, TEXT("DisplayOptionWindowed"));

							auto* WindowModeIconTexture = LoadObject<UTexture2D>(
							nullptr,
							TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_windowed.icon_windowed'"),
							nullptr,
							LOAD_None);
							
							SetPropertyValue(WindowedOptionButton, TEXT("WindowModeIconTexture"), WindowModeIconTexture, WindowModeVisualClass);
							SetPropertyValue(WindowedOptionButton, TEXT("WindowModeText"), NSLOCTEXT("VNM", "WindowModeWindowedText", "WINDOWED"), WindowModeVisualClass);
							
							auto* WindowedOptionButtonSlot = Cast<UScaleBoxSlot>(WindowedOptionBox->AddChild(WindowedOptionButton));
							WindowedOptionButtonSlot->SetHorizontalAlignment(HAlign_Center);
							WindowedOptionButtonSlot->SetVerticalAlignment(VAlign_Center);
						}
					}

					{
						auto* DisplayResolutions = WP->WidgetTree->ConstructWidget<UVNMDropDownWidget>(DropdownWidgetClass, TEXT("DisplayResolutions"));

						auto* DisplayResolutionsSlot = OptionsContentBox->AddChildToVerticalBox(DisplayResolutions);
						DisplayResolutionsSlot->SetHorizontalAlignment(HAlign_Fill);
						DisplayResolutionsSlot->SetVerticalAlignment(VAlign_Fill);
						DisplayResolutionsSlot->SetPadding(FMargin(10.f));
					}

					{
						auto* TypeWritingSpeedSlider = WP->WidgetTree->ConstructWidget<UVNMSliderWidget>(SliderWidgetClass, TEXT("TypeWritingSpeedSlider"));
						SetPropertyValue(TypeWritingSpeedSlider, TEXT("SliderName"), NSLOCTEXT("VNM", "TypeWritingSpeedSliderText", "Typewriting Speed:"), SliderWidgetClass);
						SetPropertyValue(TypeWritingSpeedSlider, TEXT("MinValue"), 0.01f, SliderWidgetClass);
						SetPropertyValue(TypeWritingSpeedSlider, TEXT("MaxValue"), 0.1f, SliderWidgetClass);
						SetPropertyValue(TypeWritingSpeedSlider, TEXT("StepValue"), 0.005f, SliderWidgetClass);
						SetPropertyValue(TypeWritingSpeedSlider, TEXT("Value"), 0.05f, SliderWidgetClass);

						auto* TypeWritingSpeedSliderSlot = OptionsContentBox->AddChildToVerticalBox(TypeWritingSpeedSlider);
						TypeWritingSpeedSliderSlot->SetHorizontalAlignment(HAlign_Fill);
						TypeWritingSpeedSliderSlot->SetVerticalAlignment(VAlign_Fill);
						TypeWritingSpeedSliderSlot->SetPadding(FMargin(10.f));
					}

					{
						auto* AutoForwardTimeSlider = WP->WidgetTree->ConstructWidget<UVNMSliderWidget>(SliderWidgetClass, TEXT("AutoForwardTimeSlider"));
						SetPropertyValue(AutoForwardTimeSlider, TEXT("SliderName"), NSLOCTEXT("VNM", "AutoFowardTimeSliderText", "Auto Forward Time:"), SliderWidgetClass);
						SetPropertyValue(AutoForwardTimeSlider, TEXT("MinValue"), 0.f, SliderWidgetClass);
						SetPropertyValue(AutoForwardTimeSlider, TEXT("MaxValue"), 42.f, SliderWidgetClass);
						SetPropertyValue(AutoForwardTimeSlider, TEXT("StepValue"), 1.f, SliderWidgetClass);
						SetPropertyValue(AutoForwardTimeSlider, TEXT("Value"), 0.f, SliderWidgetClass);

						auto* AutoForwardTimeSliderSlot = OptionsContentBox->AddChildToVerticalBox(AutoForwardTimeSlider);
						AutoForwardTimeSliderSlot->SetHorizontalAlignment(HAlign_Fill);
						AutoForwardTimeSliderSlot->SetVerticalAlignment(VAlign_Fill);
						AutoForwardTimeSliderSlot->SetPadding(FMargin(10.f));
					}
				}
			}
			
		}
	}

	void SetupBlueprintAsAboutWidget(UWidgetBlueprint* WP)
	{
		auto* VerticalBoxRoot= WP->WidgetTree->ConstructWidget<UVerticalBox>();
		WP->WidgetTree->RootWidget = VerticalBoxRoot;

		{
			auto* AboutText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("AboutText"));
			AboutText->SetText(FText::FromString(TEXT(
				"Created by Al_Fe\n"
				"\n"
				"Made with Unreal Engine 5 and Visual Novel Machinery 1.5")));
				
			auto* TextFont = LoadObject<UFont>(
					nullptr,
					TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
					nullptr,
					LOAD_None);

			AboutText->SetFont(FSlateFontInfo(TextFont, 24, TEXT("Bold")));	

			auto* AboutTextSlot = VerticalBoxRoot->AddChildToVerticalBox(AboutText);
			AboutTextSlot->SetHorizontalAlignment(HAlign_Fill);
			AboutTextSlot->SetVerticalAlignment(VAlign_Fill);
			AboutTextSlot->SetPadding(FMargin(25.f));
		}
		
		auto* AboutWidget = WP->GeneratedClass->GetDefaultObject<UUserWidget>();
		
		AboutWidget->DesignSizeMode = EDesignPreviewSizeMode::Desired;
	}
	
	void SetupBlueprintAsChoicesWidget(UWidgetBlueprint* WP)
	{
		auto* TextFont = LoadObject<UFont>(
					nullptr,
					TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
					nullptr,
					LOAD_None);
		
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* WidgetTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("WidgetTitleText"));
			WidgetTitleText->SetText(NSLOCTEXT("VNM", "OptionsWidgetTitle", "CHOICES"));

			WidgetTitleText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
			WidgetTitleText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));				

			auto* WidgetTitleTextSlot = OverlayRoot->AddChildToOverlay(WidgetTitleText);
			WidgetTitleTextSlot->SetHorizontalAlignment(HAlign_Left);
			WidgetTitleTextSlot->SetVerticalAlignment(VAlign_Top);
			WidgetTitleTextSlot->SetPadding(FMargin(45.f, 24.f, 35.f, 24.f));
		}

		{
			auto* VerticalScrollBox = WP->WidgetTree->ConstructWidget<UScrollBox>(UScrollBox::StaticClass(), TEXT("VerticalScrollBox"));

			VerticalScrollBox->SetScrollBarVisibility(ESlateVisibility::Collapsed);
			VerticalScrollBox->SetConsumeMouseWheel(EConsumeMouseWheel::Never);

			auto* VerticalScrollBoxSlot = OverlayRoot->AddChildToOverlay(VerticalScrollBox);
			VerticalScrollBoxSlot->SetHorizontalAlignment(HAlign_Left);
			VerticalScrollBoxSlot->SetVerticalAlignment(VAlign_Top);
			VerticalScrollBoxSlot->SetPadding(FMargin(35.f, 200.f, 35.f, 24.f));

			{
				auto* HorizontalScrollBox = WP->WidgetTree->ConstructWidget<UScrollBox>(UScrollBox::StaticClass(), TEXT("HorizontalScrollBox"));

				HorizontalScrollBox->SetOrientation(Orient_Horizontal);
				HorizontalScrollBox->SetScrollBarVisibility(ESlateVisibility::Collapsed);
				HorizontalScrollBox->SetConsumeMouseWheel(EConsumeMouseWheel::Never);

				auto* HorizontalScrollBoxSlot = Cast<UScrollBoxSlot>(VerticalScrollBox->AddChild(HorizontalScrollBox));
				HorizontalScrollBoxSlot->SetHorizontalAlignment(HAlign_Left);
				HorizontalScrollBoxSlot->SetVerticalAlignment(VAlign_Top);
				HorizontalScrollBoxSlot->SetPadding(FMargin(35.f, 200.f, 35.f, 24.f));

				{
					auto* Switcher = WP->WidgetTree->ConstructWidget<UWidgetSwitcher>(UWidgetSwitcher::StaticClass(), TEXT("Switcher"));

					auto* SwitcherSlot = Cast<UScrollBoxSlot>(HorizontalScrollBox->AddChild(Switcher));
					SwitcherSlot->SetHorizontalAlignment(HAlign_Fill);
					SwitcherSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* DialogScenes = WP->WidgetTree->ConstructWidget<UDialogScenesGraph>(UDialogScenesGraph::StaticClass(), ("UDialogScenes"));

						DialogScenes->SetChoicesFont(FSlateFontInfo(TextFont, 24, TEXT("Light")));
						DialogScenes->SetChoiceBoxStyles(
						{
							{
								EChoiceType::CHOICE,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::BRANCH,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.f, 0.119f, 0.f, 1.f))
							},
							{
								EChoiceType::START,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::END,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::SCENE,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::LOOP_PORTAL_START,
								{},
								FSlateBoxBrush(TEXT(""), {64.0, 64.0}, {0.f}, FLinearColor::White)
							},
							{
								EChoiceType::LOOP_PORTAL_END,
								{},
								FSlateBoxBrush(TEXT(""), {64.0, 64.0}, {0.f}, FLinearColor::White)
							}
						});

						DialogScenes->SetChoiceOutputPinsImage(FSlateBoxBrush(TEXT(""), FVector2D(8.0, 8.0), FMargin(0.0f), FLinearColor::White));
						DialogScenes->SetChoiceInputPinImage(FSlateBoxBrush(TEXT(""), FVector2D(8.0, 8.0), FMargin(0.0f), FLinearColor::White));

						DialogScenes->SetPortalNodeColors(
							{
								{0.263021f,1.000000f,0.470716f,1.f},
								{0.263021f,1.000000f,0.470716f,1.f},
								{0.000000f,0.331741f,1.000000f,1.f},
								{1.000000f,0.714767f,0.000000f,1.f},
								{1.000000f,0.000000f,0.569898f,1.f},
								{0.584599f,0.000000f,1.000000f,1.f},
								{0.094700f,0.000000f,1.000000f,1.f},
								{0.709577f,1.000000f,0.038438f,1.f},
								{1.000000f,1.000000f,1.000000f,1.f},
								{0.251736f,0.115284f,0.141332f,1.f},
								{0.000000f,0.000000f,0.000000f,1.f},
								{0.413194f,0.413194f,0.413194f,1.f}
								});

						DialogScenes->SetBoxPadding({25.f});
						DialogScenes->SetBoxMargin({50.f});

						DialogScenes->SetLineStyle({
							4.f,
							FLinearColor::White,
							false,
							0.f,
							FLinearColor::Black,
							false,
							FVector2D::ZeroVector,
							FLinearColor::Black
						});

						auto* DialogScenesSlot = Cast<UWidgetSwitcherSlot>(Switcher->AddChild(DialogScenes));
						DialogScenesSlot->SetHorizontalAlignment(HAlign_Fill);
						DialogScenesSlot->SetVerticalAlignment(VAlign_Fill);
					}

					{
						auto* Choices = WP->WidgetTree->ConstructWidget<UChoiceGraph>(UChoiceGraph::StaticClass(), ("Choices"));
						
						Choices->SetChoicesFont(FSlateFontInfo(TextFont, 24, TEXT("Light")));
						Choices->SetChoiceBoxStyles(
						{
							{
								EChoiceType::CHOICE,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::BRANCH,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.f, 0.119f, 0.f, 1.f))
							},
							{
								EChoiceType::START,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::END,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::SCENE,
								{
									{
										EChoiceBoxState::HOVERED,
										FSlateBoxBrush(TEXT(""), FVector2D(628.0, 80.0), FMargin(0.f), FLinearColor(0.701101f,0.887923f,0.904661f,1.f))
									},
									{
										EChoiceBoxState::PRESSED,
										FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor(0.242281f,0.371238f,0.381326f,1.f))
									}
								},
								FSlateBoxBrush(TEXT(""), {628.0, 80.0}, {0.f}, FLinearColor::Black)
							},
							{
								EChoiceType::LOOP_PORTAL_START,
								{},
								FSlateBoxBrush(TEXT(""), {64.0, 64.0}, {0.f}, FLinearColor::White)
							},
							{
								EChoiceType::LOOP_PORTAL_END,
								{},
								FSlateBoxBrush(TEXT(""), {64.0, 64.0}, {0.f}, FLinearColor::White)
							}
						});

						Choices->SetChoiceOutputPinsImage(FSlateBoxBrush(TEXT(""), FVector2D(8.0, 8.0), FMargin(0.0f), FLinearColor::White));
						Choices->SetChoiceInputPinImage(FSlateBoxBrush(TEXT(""), FVector2D(8.0, 8.0), FMargin(0.0f), FLinearColor::White));

						Choices->SetPortalNodeColors(
							{
								{0.263021f,1.000000f,0.470716f,1.f},
								{0.263021f,1.000000f,0.470716f,1.f},
								{0.000000f,0.331741f,1.000000f,1.f},
								{1.000000f,0.714767f,0.000000f,1.f},
								{1.000000f,0.000000f,0.569898f,1.f},
								{0.584599f,0.000000f,1.000000f,1.f},
								{0.094700f,0.000000f,1.000000f,1.f},
								{0.709577f,1.000000f,0.038438f,1.f},
								{1.000000f,1.000000f,1.000000f,1.f},
								{0.251736f,0.115284f,0.141332f,1.f},
								{0.000000f,0.000000f,0.000000f,1.f},
								{0.413194f,0.413194f,0.413194f,1.f}
								});

						Choices->SetBoxPadding({25.f});
						Choices->SetBoxMargin({50.f});

						Choices->SetLineStyle({
							4.f,
							FLinearColor::White,
							false,
							0.f,
							FLinearColor::Black,
							false,
							FVector2D::ZeroVector,
							FLinearColor::Black
						});

						auto* ChoicesSlot = Cast<UWidgetSwitcherSlot>(Switcher->AddChild(Choices));
						ChoicesSlot->SetHorizontalAlignment(HAlign_Fill);
						ChoicesSlot->SetVerticalAlignment(VAlign_Fill);
					}
				}
			}
		}
	}
	
	void SetupBlueprintAsMainMenuWidget(UWidgetBlueprint* WP,
		TObjectPtr<UClass> MenuContentWidgetClass,
		TObjectPtr<UClass> MenuTextButtonClass,
		TObjectPtr<UClass> ChoicesWidgetClass,
		TObjectPtr<UClass> LoadGameWidgetClass,
		TObjectPtr<UClass> GalleryWidgetClass,
		TObjectPtr<UClass> OptionsWidgetClass,
		TObjectPtr<UClass> AboutWidgetClass,
		TObjectPtr<UClass> MenuIconButtonClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		// Background
		{
			auto* Background = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Background"));

			auto* BackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_2160p.background_2160p'"),
				nullptr,
				LOAD_None);
			Background->SetBrushFromTexture(BackgroundTexture, true);
	
			auto* BackgroundSlot = OverlayRoot->AddChildToOverlay(Background);
			BackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		// Background Blur
		{
			auto* BackgroundBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("ContentAreaBlur"));
	
			auto* BackgroundBlurSlot = OverlayRoot->AddChildToOverlay(BackgroundBlur);
			BackgroundBlurSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundBlurSlot->SetVerticalAlignment(VAlign_Fill);
			BackgroundBlurSlot->SetPadding({573.5f, 0.f, 0.f, 0.f});

			{
				auto* MainMenuContentSwitcher = WP->WidgetTree->ConstructWidget<UWidgetSwitcher>(UWidgetSwitcher::StaticClass(), TEXT("MainMenuContentSwitcher"));
	
				auto* MainMenuContentSwitcherSlot = Cast<UBackgroundBlurSlot>(BackgroundBlur->AddChild(MainMenuContentSwitcher));
				MainMenuContentSwitcherSlot->SetHorizontalAlignment(HAlign_Fill);
				MainMenuContentSwitcherSlot->SetVerticalAlignment(VAlign_Fill);
				MainMenuContentSwitcherSlot->SetPadding({80.f, 109.5f, 0.f, 109.5f});

				// MainMenuEmpty
				{
					auto* MainMenuEmpty = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("MainMenuEmpty"));

					MainMenuEmpty->SetColorAndOpacity(FLinearColor::Transparent);
	
					auto* MainMenuEmptySlot = Cast<UWidgetSwitcherSlot>(MainMenuContentSwitcher->AddChild(MainMenuEmpty));
					MainMenuEmptySlot->SetHorizontalAlignment(HAlign_Fill);
					MainMenuEmptySlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* ChoicesContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("ChoicesContentWidget"));
	
					auto* ChoicesContentWidgetSlot = Cast<UWidgetSwitcherSlot>(MainMenuContentSwitcher->AddChild(ChoicesContentWidget));
					ChoicesContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					ChoicesContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* ChoicesWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(ChoicesWidgetClass, TEXT("ChoicesWidget"));
						
						ChoicesContentWidget->SetContentForSlot(TEXT("Content"), ChoicesWidget);
					}
				}

				{
					auto* LoadGameContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("LoadGameContentWidget"));
	
					auto* LoadGameContentWidgetSlot = Cast<UWidgetSwitcherSlot>(MainMenuContentSwitcher->AddChild(LoadGameContentWidget));
					LoadGameContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					LoadGameContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* LoadGameWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(LoadGameWidgetClass, TEXT("LoadGameWidget"));
						
						LoadGameContentWidget->SetContentForSlot(TEXT("Content"), LoadGameWidget);
					}
				}

				{
					auto* GalleryContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("GalleryContentWidget"));
	
					auto* GalleryContentWidgetSlot = Cast<UWidgetSwitcherSlot>(MainMenuContentSwitcher->AddChild(GalleryContentWidget));
					GalleryContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					GalleryContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* GalleryWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(GalleryWidgetClass, TEXT("GalleryWidget"));
						
						GalleryContentWidget->SetContentForSlot(TEXT("Content"), GalleryWidget);
					}				
				}

				{
					auto* OptionsContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("OptionsContentWidget"));
	
					auto* OptionsContentWidgetSlot = Cast<UWidgetSwitcherSlot>(MainMenuContentSwitcher->AddChild(OptionsContentWidget));
					OptionsContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					OptionsContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* OptionsWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(OptionsWidgetClass, TEXT("OptionsWidget"));
						
						OptionsContentWidget->SetContentForSlot(TEXT("Content"), OptionsWidget);
					}
				}

				{
					auto* AboutContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("AboutContentWidget"));
	
					auto* AboutContentWidgetSlot = Cast<UWidgetSwitcherSlot>(MainMenuContentSwitcher->AddChild(AboutContentWidget));
					AboutContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					AboutContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* AboutWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(AboutWidgetClass, TEXT("AboutWidget"));
						
						AboutContentWidget->SetContentForSlot(TEXT("Content"), AboutWidget);
					}
				}
			}
		}

		// MenuBarOverlay
		{
			auto* MenuBarOverlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("MenuBarOverlay"));
	
			auto* MenuBarOverlaySlot = OverlayRoot->AddChildToOverlay(MenuBarOverlay);
			MenuBarOverlaySlot->SetHorizontalAlignment(HAlign_Left);
			MenuBarOverlaySlot->SetVerticalAlignment(VAlign_Fill);

			// MenuBarBackgroundBlur
			{
				auto* MenuBarBackgroundBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("MenuBarBackgroundBlur"));
	
				auto* MenuBarBackgroundBlurSlot = MenuBarOverlay->AddChildToOverlay(MenuBarBackgroundBlur);
				MenuBarBackgroundBlurSlot->SetHorizontalAlignment(HAlign_Fill);
				MenuBarBackgroundBlurSlot->SetVerticalAlignment(VAlign_Fill);
				MenuBarBackgroundBlurSlot->SetPadding({0.f, 0.f, 50.f, 0.f});
			}
			
			{
				auto* MenuBarBackground = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("MenuBarBackground"));

				auto* MenuBarBackgroundTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/main_menu_sidebar_opac_white.main_menu_sidebar_opac_white'"),
					nullptr,
					LOAD_None);
				MenuBarBackground->SetBrushFromTexture(MenuBarBackgroundTexture, true);
	
				auto* MenuBarBackgroundSlot = MenuBarOverlay->AddChildToOverlay(MenuBarBackground);
				MenuBarBackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
				MenuBarBackgroundSlot->SetVerticalAlignment(VAlign_Fill);
			}
			
			{
				auto* ProjectTitleText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ProjectTitleText"));
				ProjectTitleText->SetText(FText::FromString(TEXT("EXAMPLE PROJECT")));
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				ProjectTitleText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
				ProjectTitleText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));
				SetPropertyValue(ProjectTitleText, TEXT("WrapTextAt"), 310.f);

				auto* ProjectTitleTextSlot = MenuBarOverlay->AddChildToOverlay(ProjectTitleText);
				ProjectTitleTextSlot->SetHorizontalAlignment(HAlign_Center);
				ProjectTitleTextSlot->SetVerticalAlignment(VAlign_Top);
				ProjectTitleTextSlot->SetPadding({-22.f, 95.f, 0.f, 0.f});
			}

			{
				auto* MenuButtonList = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("MenuButtonList"));

				auto* MenuButtonListSlot = MenuBarOverlay->AddChildToOverlay(MenuButtonList);
				MenuButtonListSlot->SetHorizontalAlignment(HAlign_Left);
				MenuButtonListSlot->SetVerticalAlignment(VAlign_Center);
				MenuButtonListSlot->SetPadding({0.f, -40.f, 0.f, 0.f});

				{
					auto* StartGameButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("StartGameButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(StartGameButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					
					SetPropertyValue(StartGameButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(StartGameButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "StartGameButtonText", "START GAME"));

					auto* StartGameButtonSlot = MenuButtonList->AddChildToVerticalBox(StartGameButton);
					StartGameButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					StartGameButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* LoadGameButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("LoadGameButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(LoadGameButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					
					SetPropertyValue(LoadGameButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(LoadGameButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "LoadGameButtonText", "LOAD GAME"));

					auto* LoadGameButtonSlot = MenuButtonList->AddChildToVerticalBox(LoadGameButton);
					LoadGameButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					LoadGameButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* OptionsButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("OptionsButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(OptionsButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					
					SetPropertyValue(OptionsButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(OptionsButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "OptionsButtonText", "OPTIONS"));

					auto* OptionsButtonSlot = MenuButtonList->AddChildToVerticalBox(OptionsButton);
					OptionsButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					OptionsButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* GalleryButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("GalleryButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(GalleryButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					
					SetPropertyValue(GalleryButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(GalleryButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "GalleryButtonText", "GALLERY"));

					auto* GalleryButtonSlot = MenuButtonList->AddChildToVerticalBox(GalleryButton);
					GalleryButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					GalleryButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* ChoicesButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("ChoicesButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(ChoicesButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					
					SetPropertyValue(ChoicesButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(ChoicesButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "ChoicesButtonText", "CHOICES"));

					auto* ChoicesButtonSlot = MenuButtonList->AddChildToVerticalBox(ChoicesButton);
					ChoicesButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					ChoicesButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* ExitGameButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("ExitGameButton"));

					

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(ExitGameButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					
					SetPropertyValue(ExitGameButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(ExitGameButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "ExitGameButtonText", "EXIT GAME"));

					auto* ExitGameButtonSlot = MenuButtonList->AddChildToVerticalBox(ExitGameButton);
					ExitGameButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					ExitGameButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}
			}

			{
				auto* AboutButton = WP->WidgetTree->ConstructWidget<UMenuIconButtonWidget>(MenuIconButtonClass, TEXT("AboutButton"));

				FButtonStyling ButtonStyling = *GetPropertyValue<UMenuIconButtonWidget, FButtonStyling>(AboutButton, TEXT("Style"));

				auto* AboutInfoIconTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_game_info.icon_game_info'"),
					nullptr,
					LOAD_None);

				ButtonStyling.IdleTexture = AboutInfoIconTexture;
				ButtonStyling.HoveredTexture = AboutInfoIconTexture;
				ButtonStyling.PressedTexture = AboutInfoIconTexture;
				ButtonStyling.SelectedTexture = AboutInfoIconTexture;
				ButtonStyling.SelectedHoveredTexture = AboutInfoIconTexture;
				ButtonStyling.SelectedPressedTexture = AboutInfoIconTexture;
				ButtonStyling.LockedTexture = AboutInfoIconTexture;
					
				SetPropertyValue(AboutButton, TEXT("Style"), ButtonStyling);

				auto* AboutButtonSlot = MenuBarOverlay->AddChildToOverlay(AboutButton);
				AboutButtonSlot->SetHorizontalAlignment(HAlign_Center);
				AboutButtonSlot->SetVerticalAlignment(VAlign_Bottom);
				AboutButtonSlot->SetPadding({-22.f, 0.f, 0.f, 100.f});
			}
		}
	}
	
	void SetupBlueprintAsPauseMenuWidget(UWidgetBlueprint* WP,
		TObjectPtr<UClass> MenuContentWidgetClass,
		TObjectPtr<UClass> MenuTextButtonClass,
		TObjectPtr<UClass> SaveGameWidgetClass,
		TObjectPtr<UClass> LoadGameWidgetClass,
		TObjectPtr<UClass> OptionsWidgetClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		// Background
		{
			auto* Background = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Background"));

			auto* BackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_2160p.background_2160p'"),
				nullptr,
				LOAD_None);
			Background->SetBrushFromTexture(BackgroundTexture, true);
	
			auto* BackgroundSlot = OverlayRoot->AddChildToOverlay(Background);
			BackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		// Background Blur
		{
			auto* BackgroundBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("ContentAreaBlur"));
	
			auto* BackgroundBlurSlot = OverlayRoot->AddChildToOverlay(BackgroundBlur);
			BackgroundBlurSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundBlurSlot->SetVerticalAlignment(VAlign_Fill);
			BackgroundBlurSlot->SetPadding({573.5f, 0.f, 0.f, 0.f});

			{
				auto* PauseMenuContentSwitcher = WP->WidgetTree->ConstructWidget<UWidgetSwitcher>(UWidgetSwitcher::StaticClass(), TEXT("PauseMenuContentSwitcher"));
	
				auto* PauseMenuContentSwitcherSlot = Cast<UBackgroundBlurSlot>(BackgroundBlur->AddChild(PauseMenuContentSwitcher));
				PauseMenuContentSwitcherSlot->SetHorizontalAlignment(HAlign_Fill);
				PauseMenuContentSwitcherSlot->SetVerticalAlignment(VAlign_Fill);
				PauseMenuContentSwitcherSlot->SetPadding({80.f, 109.5f, 0.f, 109.5f});

				// PauseMenuEmpty
				{
					auto* PauseMenuEmpty = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("PauseMenuEmpty"));

					PauseMenuEmpty->SetColorAndOpacity(FLinearColor::Transparent);
	
					auto* PauseMenuEmptySlot = Cast<UWidgetSwitcherSlot>(PauseMenuContentSwitcher->AddChild(PauseMenuEmpty));
					PauseMenuEmptySlot->SetHorizontalAlignment(HAlign_Fill);
					PauseMenuEmptySlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* SaveGameContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("SaveGameContentWidget"));
	
					auto* SaveGameContentWidgetSlot = Cast<UWidgetSwitcherSlot>(PauseMenuContentSwitcher->AddChild(SaveGameContentWidget));
					SaveGameContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					SaveGameContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* SaveGameWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(SaveGameWidgetClass, TEXT("SaveGameWidget"));
						
						SaveGameContentWidget->SetContentForSlot(TEXT("Content"), SaveGameWidget);
					}
				}

				{
					auto* LoadGameContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("LoadGameContentWidget"));
	
					auto* LoadGameContentWidgetSlot = Cast<UWidgetSwitcherSlot>(PauseMenuContentSwitcher->AddChild(LoadGameContentWidget));
					LoadGameContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					LoadGameContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* LoadGameWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(LoadGameWidgetClass, TEXT("LoadGameWidget"));
						
						LoadGameContentWidget->SetContentForSlot(TEXT("Content"), LoadGameWidget);
					}
				}

				{
					auto* OptionsContentWidget = WP->WidgetTree->ConstructWidget<UMenuContentWidget>(MenuContentWidgetClass, TEXT("OptionsContentWidget"));
	
					auto* OptionsContentWidgetSlot = Cast<UWidgetSwitcherSlot>(PauseMenuContentSwitcher->AddChild(OptionsContentWidget));
					OptionsContentWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
					OptionsContentWidgetSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* OptionsWidget = WP->WidgetTree->ConstructWidget<UUserWidget>(OptionsWidgetClass, TEXT("OptionsWidget"));
						
						OptionsContentWidget->SetContentForSlot(TEXT("Content"), OptionsWidget);
					}
				}
			}
		}

		// MenuBarOverlay
		{
			auto* MenuBarOverlay = WP->WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("MenuBarOverlay"));
	
			auto* MenuBarOverlaySlot = OverlayRoot->AddChildToOverlay(MenuBarOverlay);
			MenuBarOverlaySlot->SetHorizontalAlignment(HAlign_Left);
			MenuBarOverlaySlot->SetVerticalAlignment(VAlign_Fill);

			// MenuBarBackgroundBlur
			{
				auto* MenuBarBackgroundBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("MenuBarBackgroundBlur"));
	
				auto* MenuBarBackgroundBlurSlot = MenuBarOverlay->AddChildToOverlay(MenuBarBackgroundBlur);
				MenuBarBackgroundBlurSlot->SetHorizontalAlignment(HAlign_Fill);
				MenuBarBackgroundBlurSlot->SetVerticalAlignment(VAlign_Fill);
				MenuBarBackgroundBlurSlot->SetPadding({0.f, 0.f, 50.f, 0.f});
			}
			
			{
				auto* MenuBarBackground = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("MenuBarBackground"));

				auto* MenuBarBackgroundTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/main_menu_sidebar_opac_white.main_menu_sidebar_opac_white'"),
					nullptr,
					LOAD_None);
				MenuBarBackground->SetBrushFromTexture(MenuBarBackgroundTexture, true);
	
				auto* MenuBarBackgroundSlot = MenuBarOverlay->AddChildToOverlay(MenuBarBackground);
				MenuBarBackgroundSlot->SetHorizontalAlignment(HAlign_Fill);
				MenuBarBackgroundSlot->SetVerticalAlignment(VAlign_Fill);
			}
			
			{
				auto* PauseMenuText = WP->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("PauseMenuText"));
				PauseMenuText->SetText(FText::FromString(TEXT("SETUP")));
				
				auto* TextFont = LoadObject<UFont>(
						nullptr,
						TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
						nullptr,
						LOAD_None);

				PauseMenuText->SetFont(FSlateFontInfo(TextFont, 50, TEXT("Bold")));
				PauseMenuText->SetColorAndOpacity(FLinearColor(0.701102f, 0.887923f, 0.904661f, 1.f));
				SetPropertyValue(PauseMenuText, TEXT("WrapTextAt"), 310.f);

				auto* PauseMenuTextSlot = MenuBarOverlay->AddChildToOverlay(PauseMenuText);
				PauseMenuTextSlot->SetHorizontalAlignment(HAlign_Center);
				PauseMenuTextSlot->SetVerticalAlignment(VAlign_Top);
				PauseMenuTextSlot->SetPadding({-22.f, 135.f, 0.f, 0.f});
			}

			{
				auto* IconSizeBox = WP->WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("IconSizeBox"));

				IconSizeBox->SetWidthOverride(476.f);
				IconSizeBox->SetHeightOverride(448.f);
				IconSizeBox->SetClipping(EWidgetClipping::ClipToBounds);

				auto* IconSizeBoxSlot = MenuBarOverlay->AddChildToOverlay(IconSizeBox);
				IconSizeBoxSlot->SetHorizontalAlignment(HAlign_Right);
				IconSizeBoxSlot->SetVerticalAlignment(VAlign_Top);
				IconSizeBoxSlot->SetPadding({0.f, 7.5f, 50.f, 0.f});
				
				{
					auto* VNMIcon = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("VNMIcon"));

					auto* VNMIconTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Icons/icon_software_tool_large_no_txt.icon_software_tool_large_no_txt'"),
					nullptr,
					LOAD_None);
					VNMIcon->SetBrushFromTexture(VNMIconTexture, true);
					VNMIcon->SetRenderOpacity(0.23f);
					VNMIcon->SetRenderTranslation(FVector2D(75.0, 0.0));
					VNMIcon->SetRenderScale(FVector2D(0.9, 0.9));

					auto* VNMIconSlot = Cast<USizeBoxSlot>(IconSizeBox->AddChild(VNMIcon));
					VNMIconSlot->SetHorizontalAlignment(HAlign_Fill);
					VNMIconSlot->SetVerticalAlignment(VAlign_Fill);
				}
			}

			{
				auto* MenuButtonList = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("MenuButtonList"));

				auto* MenuButtonListSlot = MenuBarOverlay->AddChildToOverlay(MenuButtonList);
				MenuButtonListSlot->SetHorizontalAlignment(HAlign_Left);
				MenuButtonListSlot->SetVerticalAlignment(VAlign_Center);
				MenuButtonListSlot->SetPadding({0.f, -40.f, 0.f, 0.f});

				{
					auto* ReturnButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("ReturnButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(ReturnButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.7f);
					
					SetPropertyValue(ReturnButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(ReturnButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "StartGameButtonText", "START GAME"));

					auto* ReturnButtonSlot = MenuButtonList->AddChildToVerticalBox(ReturnButton);
					ReturnButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					ReturnButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* SaveGameButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("SaveGameButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(SaveGameButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.6f);
					
					SetPropertyValue(SaveGameButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(SaveGameButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "SaveGameButtonText", "SAVE GAME"));

					auto* SaveGameButtonSlot = MenuButtonList->AddChildToVerticalBox(SaveGameButton);
					SaveGameButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					SaveGameButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* LoadGameButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("LoadGameButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(LoadGameButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.4f);
					
					SetPropertyValue(LoadGameButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(LoadGameButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "LoadGameButtonText", "LOAD GAME"));

					auto* LoadGameButtonSlot = MenuButtonList->AddChildToVerticalBox(LoadGameButton);
					LoadGameButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					LoadGameButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* OptionsButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("OptionsButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(OptionsButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.2f);
					
					SetPropertyValue(OptionsButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(OptionsButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "OptionsButtonText", "OPTIONS"));

					auto* OptionsButtonSlot = MenuButtonList->AddChildToVerticalBox(OptionsButton);
					OptionsButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					OptionsButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* ReturnToMainMenuButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("ReturnToMainMenuButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(ReturnToMainMenuButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.1f);
					
					SetPropertyValue(ReturnToMainMenuButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(ReturnToMainMenuButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "GalleryButtonText", "GALLERY"));

					auto* ReturnToMainMenuButtonSlot = MenuButtonList->AddChildToVerticalBox(ReturnToMainMenuButton);
					ReturnToMainMenuButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					ReturnToMainMenuButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				{
					auto* ExitGameButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("ExitGameButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(ExitGameButton, TEXT("Style"));

					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.05f);
					
					SetPropertyValue(ExitGameButton, TEXT("Style"), ButtonStyling);
					SetPropertyValue(ExitGameButton, TEXT("ButtonDefaultText"), NSLOCTEXT("VNM", "ExitGameButtonText", "EXIT GAME"));

					auto* ExitGameButtonSlot = MenuButtonList->AddChildToVerticalBox(ExitGameButton);
					ExitGameButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					ExitGameButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}
			}
		}
	}
	
	class FWidgetClassFilter : public IClassViewerFilter
	{
	public:
		/** All children of these classes will be included unless filtered out by another setting. */
		TSet <const UClass*> AllowedChildrenOfClasses;

		/** Disallowed class flags. */
		EClassFlags DisallowedClassFlags;

		virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
		{
			return !InClass->HasAnyClassFlags(DisallowedClassFlags)
				&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
		}
	
		virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
		{
			return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
				&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
		}
	};

	class FNoWidgetClassFilter : public IClassViewerFilter
	{
	public:
		virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
		{
			return false;
		}
	
		virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
		{
			return false;
		}
	};
}

UMainMenuWidgetBlueprintFactory::UMainMenuWidgetBlueprintFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMainMenuWidget::StaticClass();
}

bool UMainMenuWidgetBlueprintFactory::ConfigureProperties()
{
	// Load the classviewer module to display a class picker
	FClassViewerModule& ClassViewerModule = FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer");

	{
		if (!SVNMMenuWidgetClassPicker::PickClass(MenuWidget))
		{
			return false;
		}

		switch (MenuWidget)
		{
		case EVNMMenuWidget::DropdownWidget:
			ParentClass = UVNMDropDownWidget::StaticClass();
			break;
		case EVNMMenuWidget::GalleryWidget:
			ParentClass = UGalleryWidget::StaticClass();
			break;
		case EVNMMenuWidget::OptionsWidget:
			ParentClass = UOptionsWidget::StaticClass();
			break;
		case EVNMMenuWidget::PagingWidget:
			ParentClass = UVNMPagingWidget::StaticClass();
			break;
		case EVNMMenuWidget::SliderWidget:
			ParentClass = UVNMSliderWidget::StaticClass();
			break;
		case EVNMMenuWidget::DropdownContentWidget:
			ParentClass = UVNMDropDownContentWidget::StaticClass();
			break;
		case EVNMMenuWidget::DropdownItemWidget:
			ParentClass = UVNMDropDownItemWidget::StaticClass();
			break;
		case EVNMMenuWidget::GalleryImageVisual:
			ParentClass = UGalleryImageVisual::StaticClass();
			break;
		case EVNMMenuWidget::LoadGameWidget:
			ParentClass = ULoadGameWidget::StaticClass();
			break;
		case EVNMMenuWidget::MenuContentWidget:
			ParentClass = UMenuContentWidget::StaticClass();
			break;
		case EVNMMenuWidget::SaveGameVisual:
			ParentClass = USaveGameVisual::StaticClass();
			break;
		case EVNMMenuWidget::SaveGameWidget:
			ParentClass = USaveGameWidget::StaticClass();
			break;
		case EVNMMenuWidget::WindowModeVisual:
			ParentClass = UMenuButtonWidget::StaticClass();
			bGenerateAlternative = true;
			break;
		case EVNMMenuWidget::BasePopUpWidget:
			ParentClass = UVNMBasePopUpWidget::StaticClass();
			break;
		case EVNMMenuWidget::BaseTextBoxPopUpWidget:
			ParentClass = UVNMBaseTextBoxPopUpWidget::StaticClass();
			break;
		case EVNMMenuWidget::GalleryDisplayImageVisual:
			ParentClass = UGalleryDisplayImageVisual::StaticClass();
			break;
		case EVNMMenuWidget::MenuIconButtonWidget:
			ParentClass = UMenuIconButtonWidget::StaticClass();
			break;
		case EVNMMenuWidget::MenuTextButtonWidget:
			ParentClass = UMenuTextButtonWidget::StaticClass();
			break;
		case EVNMMenuWidget::AboutWidget:
			ParentClass = UUserWidget::StaticClass();
			break;
		case EVNMMenuWidget::ChoicesWidget:
			ParentClass = UUserWidget::StaticClass();
			break;
		case EVNMMenuWidget::MainMenuWidget:
			ParentClass = UMainMenuWidget::StaticClass();
			break;
		case EVNMMenuWidget::PauseMenuWidget:
			ParentClass = UPauseMenuWidget::StaticClass();
			break;
		default:
			return false;
		}
	}

	// Fill in options
	FClassViewerInitializationOptions Options;
	Options.Mode = EClassViewerMode::ClassPicker;
	Options.bShowNoneOption = true;

	TSharedPtr<MainMenuWidgetGeneratorUtils::FWidgetClassFilter> Filter = MakeShareable(new MainMenuWidgetGeneratorUtils::FWidgetClassFilter);
	Options.ClassFilters.Add(Filter.ToSharedRef());

	Filter->DisallowedClassFlags = CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists;

	if (MenuWidget == EVNMMenuWidget::SliderWidget)
	{
		AdditionalWidgetClasses.SetNum(1);
		Filter->AllowedChildrenOfClasses.Add(UMenuIconButtonWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateSliderWidgetBlueprintSelectIconButton", "Pick widget to use for the operation icon buttons!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuIconButtonWidget::StaticClass());
	}
	else if (MenuWidget == EVNMMenuWidget::DropdownWidget)
	{
		AdditionalWidgetClasses.SetNum(2);
		Filter->AllowedChildrenOfClasses.Add(UVNMDropDownContentWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateDropdownWidgetBlueprintSelectContentWidget", "Pick widget to use for the dropdown content widget!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UVNMDropDownContentWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UVNMDropDownContentWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UVNMDropDownItemWidget::StaticClass());

		FText TitleText2 = NSLOCTEXT("VNMEditor", "CreateDropdownWidgetBlueprintSelectItemWidget", "Pick widget to use for the dropdown item widget!");
		if (!SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClasses[1]), UVNMDropDownItemWidget::StaticClass()))
		{
			return false;
		}

		return true;
	}
	else if (MenuWidget == EVNMMenuWidget::PagingWidget)
	{
		AdditionalWidgetClasses.SetNum(1);
		Filter->AllowedChildrenOfClasses.Add(UMenuIconButtonWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreatePagingWidgetBlueprintSelectIconButton", "Pick widget to use for the arrow icon button!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuIconButtonWidget::StaticClass());
	}
	else if (ParentClass == UGalleryImageVisual::StaticClass())
	{
		AdditionalWidgetClasses.SetNum(1);
		Filter->AllowedChildrenOfClasses.Add(UGalleryDisplayImageVisual::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateGalleryImageVisualBlueprintSelectGalleryDisplayImageVisual", "Pick widget to use for gallery display image visual!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UGalleryDisplayImageVisual::StaticClass());
	}
	else if (MenuWidget == EVNMMenuWidget::GalleryWidget)
	{
		AdditionalWidgetClasses.SetNum(2);
		Filter->AllowedChildrenOfClasses.Add(UGalleryImageVisual::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateGalleryWidgetBlueprintSelectGalleryImageVisual", "Pick widget to use for the gallery image visual!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UGalleryImageVisual::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UGalleryImageVisual::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UVNMPagingWidget::StaticClass());

		FText TitleText2 = NSLOCTEXT("VNMEditor", "CreateDropdownWidgetBlueprintSelectPagigngWidget", "Pick widget to use for the paging widget!");
		if (!SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClasses[1]), UVNMPagingWidget::StaticClass()))
		{
			return false;
		}

		return true;
	}
	else if (MenuWidget == EVNMMenuWidget::SaveGameVisual)
	{
		AdditionalWidgetClasses.SetNum(1);
		Filter->AllowedChildrenOfClasses.Add(UMenuIconButtonWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateSaveImageVisualBlueprintSelectIconButton", "Pick widget to use for delete icon button!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuIconButtonWidget::StaticClass());
	}
	else if (MenuWidget == EVNMMenuWidget::SaveGameWidget || MenuWidget == EVNMMenuWidget::LoadGameWidget)
	{
		AdditionalWidgetClasses.SetNum(2);
		Filter->AllowedChildrenOfClasses.Add(USaveGameVisual::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateSaveLoadWidgetBlueprintSelectSaveImageVisual", "Pick widget to use for the save image visual!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), USaveGameVisual::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(USaveGameVisual::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UVNMPagingWidget::StaticClass());

		FText TitleText2 = NSLOCTEXT("VNMEditor", "CreateSaveLoadWidgetBlueprintSelectPagigngWidget", "Pick widget to use for the paging widget!");
		if (!SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClasses[1]), UVNMPagingWidget::StaticClass()))
		{
			return false;
		}

		return true;
	}
	else if (MenuWidget == EVNMMenuWidget::BasePopUpWidget)
	{
		AdditionalWidgetClasses.SetNum(1);
		Filter->AllowedChildrenOfClasses.Add(UMenuTextButtonWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreatePopUpWidgetBlueprintSelectMenuTextButton", "Pick widget to use for menu text button!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuTextButtonWidget::StaticClass());
	}
	else if (MenuWidget == EVNMMenuWidget::BaseTextBoxPopUpWidget)
	{
		AdditionalWidgetClasses.SetNum(1);
		Filter->AllowedChildrenOfClasses.Add(UMenuTextButtonWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateTextBoxPopUpWidgetBlueprintSelectMenuTextButton", "Pick widget to use for menu text button!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuTextButtonWidget::StaticClass());
	}
	else if (MenuWidget == EVNMMenuWidget::OptionsWidget)
	{
		AdditionalWidgetClasses.SetNum(3);
		Filter->AllowedChildrenOfClasses.Add(UMenuButtonWidget::StaticClass());

		FText TitleText = NSLOCTEXT("VNMEditor", "CreateOptionsWidgetBlueprintSelectWindowModeVisual", "Pick widget to use for the window mode visual!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuButtonWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UMenuButtonWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UVNMDropDownWidget::StaticClass());

		FText TitleText2 = NSLOCTEXT("VNMEditor", "CreateOptionsWidgetBlueprintSelectDropdownWidget", "Pick widget to use for the dropdown widget!");
		if (!SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClasses[1]), UVNMDropDownWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UVNMDropDownWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UVNMSliderWidget::StaticClass());

		FText TitleText3 = NSLOCTEXT("VNMEditor", "CreateOptionsWidgetBlueprintSelectSliderWidget", "Pick widget to use for the slider widget!");
		if (!SClassPickerDialog::PickClass(TitleText3, Options, static_cast<UClass*&>(AdditionalWidgetClasses[2]), UVNMSliderWidget::StaticClass()))
		{
			return false;
		}

		return true;
	}
	else if (MenuWidget == EVNMMenuWidget::MainMenuWidget)
	{
		AdditionalWidgetClasses.SetNum(8);
		Filter->AllowedChildrenOfClasses.Add(UMenuContentWidget::StaticClass());

		const FText TitleText = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectMenuContentWidget", "Pick widget to use for the menu content widget!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuContentWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UMenuContentWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UMenuTextButtonWidget::StaticClass());

		const FText TitleText2 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectMenuTextButtonWidget", "Pick widget to use for the menu text buttons!");
		if (!SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClasses[1]), UMenuTextButtonWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UMenuTextButtonWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UUserWidget::StaticClass());

		const FText TitleText3 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectChoicesWidget", "Pick widget to use for the choices widget!");
		if (!SClassPickerDialog::PickClass(TitleText3, Options, static_cast<UClass*&>(AdditionalWidgetClasses[2]), UUserWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UUserWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(ULoadGameWidget::StaticClass());

		const FText TitleText4 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectLoadGameWidget", "Pick widget to use for the load game widget!");
		if (!SClassPickerDialog::PickClass(TitleText4, Options, static_cast<UClass*&>(AdditionalWidgetClasses[3]), ULoadGameWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(ULoadGameWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UGalleryWidget::StaticClass());

		const FText TitleText5 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectGalleryWidget", "Pick widget to use for the gallery widget!");
		if (!SClassPickerDialog::PickClass(TitleText5, Options, static_cast<UClass*&>(AdditionalWidgetClasses[4]), UGalleryWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UGalleryWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UOptionsWidget::StaticClass());

		const FText TitleText6 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectOptionsWidget", "Pick widget to use for the options widget!");
		if (!SClassPickerDialog::PickClass(TitleText6, Options, static_cast<UClass*&>(AdditionalWidgetClasses[5]), UOptionsWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UOptionsWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UUserWidget::StaticClass());

		const FText TitleText7 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectAboutWidget", "Pick widget to use for the about widget!");
		if (!SClassPickerDialog::PickClass(TitleText7, Options, static_cast<UClass*&>(AdditionalWidgetClasses[6]), UUserWidget::StaticClass()))
		{
			return false;
		}
		Filter->AllowedChildrenOfClasses.Remove(UUserWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UMenuIconButtonWidget::StaticClass());

		const FText TitleText8 = NSLOCTEXT("VNMEditor", "CreateMainMenuWidgetBlueprintSelectAboutButtonWidget", "Pick widget to use for the about button!");
		if (!SClassPickerDialog::PickClass(TitleText8, Options, static_cast<UClass*&>(AdditionalWidgetClasses[7]), UMenuIconButtonWidget::StaticClass()))
		{
			return false;
		}

		return true;
	}
	else if (MenuWidget == EVNMMenuWidget::PauseMenuWidget)
	{
		AdditionalWidgetClasses.SetNum(5);
		Filter->AllowedChildrenOfClasses.Add(UMenuContentWidget::StaticClass());

		const FText TitleText = NSLOCTEXT("VNMEditor", "CreatePauseMenuWidgetBlueprintSelectMenuContentWidget", "Pick widget to use for the menu content widget!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClasses[0]), UMenuContentWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UMenuContentWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UMenuTextButtonWidget::StaticClass());

		const FText TitleText2 = NSLOCTEXT("VNMEditor", "CreatePauseMenuWidgetBlueprintSelectMenuTextButtonWidget", "Pick widget to use for the menu text buttons!");
		if (!SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClasses[1]), UMenuTextButtonWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(UMenuTextButtonWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(USaveGameWidget::StaticClass());

		const FText TitleText3 = NSLOCTEXT("VNMEditor", "CreatePauseMenuWidgetBlueprintSelectSaveGameWidget", "Pick widget to use for the save game widget!");
		if (!SClassPickerDialog::PickClass(TitleText3, Options, static_cast<UClass*&>(AdditionalWidgetClasses[2]), USaveGameWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(USaveGameWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(ULoadGameWidget::StaticClass());

		const FText TitleText4 = NSLOCTEXT("VNMEditor", "CreatePauseMenuWidgetBlueprintSelectLoadGameWidget", "Pick widget to use for the load game widget!");
		if (!SClassPickerDialog::PickClass(TitleText4, Options, static_cast<UClass*&>(AdditionalWidgetClasses[3]), ULoadGameWidget::StaticClass()))
		{
			return false;
		}

		Filter->AllowedChildrenOfClasses.Remove(ULoadGameWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UOptionsWidget::StaticClass());

		const FText TitleText5 = NSLOCTEXT("VNMEditor", "CreatePauseMenuWidgetBlueprintSelectOptionsWidget", "Pick widget to use for the options widget!");
		if (!SClassPickerDialog::PickClass(TitleText5, Options, static_cast<UClass*&>(AdditionalWidgetClasses[4]), UOptionsWidget::StaticClass()))
		{
			return false;
		}

		return true;
	}

	return true;
}

UObject* UMainMenuWidgetBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	UWidgetBlueprint* NewBP = CastChecked<UWidgetBlueprint>(FKismetEditorUtilities::CreateBlueprint(
		ParentClass,
		InParent,
		Name,
		BPTYPE_Normal,
		UWidgetBlueprint::StaticClass(),
		UWidgetBlueprintGeneratedClass::StaticClass(),
		CallingContext));

	if (MenuWidget == EVNMMenuWidget::MenuContentWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsMenuContentWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::MenuTextButtonWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsMenuTextButtonWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::MenuIconButtonWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsMenuIconButtonWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::SliderWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMSliderWidget(NewBP, AdditionalWidgetClasses[0]);
	}
	else if (MenuWidget == EVNMMenuWidget::DropdownItemWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMDropdownItemWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::DropdownContentWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMDropdownContentWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::DropdownWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMDropdownWidget(NewBP, AdditionalWidgetClasses[0], AdditionalWidgetClasses[1]);
	}
	else if (MenuWidget == EVNMMenuWidget::PagingWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMPagingWidget(NewBP, AdditionalWidgetClasses[0]);
	}
	else if (MenuWidget == EVNMMenuWidget::GalleryDisplayImageVisual)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsGalleryDisplayImageVisual(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::GalleryImageVisual)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsGalleryImageVisual(NewBP, AdditionalWidgetClasses[0]);
	}
	else if (MenuWidget == EVNMMenuWidget::GalleryWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsGalleryWidget(NewBP, AdditionalWidgetClasses[0], AdditionalWidgetClasses[1]);
	}
	else if (MenuWidget == EVNMMenuWidget::SaveGameVisual)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsUSaveGameVisual(NewBP, AdditionalWidgetClasses[0]);
	}
	else if (MenuWidget == EVNMMenuWidget::SaveGameWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsSaveGameWidget(NewBP, AdditionalWidgetClasses[0], AdditionalWidgetClasses[1]);
	}
	else if (MenuWidget == EVNMMenuWidget::LoadGameWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsLoadGameWidget(NewBP, AdditionalWidgetClasses[0], AdditionalWidgetClasses[1]);
	}
	else if (MenuWidget == EVNMMenuWidget::BasePopUpWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMBasePopUpWidget(NewBP, AdditionalWidgetClasses[0]);
	}
	else if (MenuWidget == EVNMMenuWidget::BaseTextBoxPopUpWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsVNMBaseTextPopUpWidget(NewBP, AdditionalWidgetClasses[0]);
	}
	else if (MenuWidget == EVNMMenuWidget::WindowModeVisual)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsWindowModeVisual(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::OptionsWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsOptionsWidget(NewBP, AdditionalWidgetClasses[0], AdditionalWidgetClasses[1], AdditionalWidgetClasses[2]);
	}
	else if (MenuWidget == EVNMMenuWidget::AboutWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsAboutWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::ChoicesWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsChoicesWidget(NewBP);
	}
	else if (MenuWidget == EVNMMenuWidget::MainMenuWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsMainMenuWidget(NewBP,
			AdditionalWidgetClasses[0],
			AdditionalWidgetClasses[1],
			AdditionalWidgetClasses[2],
			AdditionalWidgetClasses[3],
			AdditionalWidgetClasses[4],
			AdditionalWidgetClasses[5],
			AdditionalWidgetClasses[6],
			AdditionalWidgetClasses[7]);
	}
	else if (MenuWidget == EVNMMenuWidget::PauseMenuWidget)
	{
		MainMenuWidgetGeneratorUtils::SetupBlueprintAsPauseMenuWidget(NewBP,
			AdditionalWidgetClasses[0],
			AdditionalWidgetClasses[1],
			AdditionalWidgetClasses[2],
			AdditionalWidgetClasses[3],
			AdditionalWidgetClasses[4]);
	}
	
	return NewBP;
}

UObject* UMainMenuWidgetBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}