// Fill out your copyright notice in the Description page of Project Settings.


#include "Factories/VNMWidgetBlueprintFactory.h"

#include "BaseCgDisplayWidget.h"
#include "BaseCharacterDisplayWidget.h"
#include "BaseChoiceButton.h"
#include "BaseChoiceWidget.h"
#include "BaseDialogBoxWidget.h"
#include "BaseSceneBackgroundDisplayWidget.h"
#include "BlueprintEditorSettings.h"
#include "ClassViewerFilter.h"
#include "ClassViewerModule.h"
#include "K2Node_CallFunction.h"
#include "MenuButtonWidget.h"
#include "MenuIconButtonWidget.h"
#include "MenuInputButtonWidget.h"
#include "MenuTextButtonWidget.h"
#include "MovieScene.h"
#include "ObjectEditorUtils.h"
#include "WidgetBlueprint.h"
#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateBoxBrush.h"
#include "Components/BackgroundBlur.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/EditableTextBox.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/ScaleBox.h"
#include "Components/ScaleBoxSlot.h"
#include "Components/SizeBox.h"
#include "Components/SizeBoxSlot.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/WidgetSwitcher.h"
#include "Components/WidgetSwitcherSlot.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/SClassPickerDialog.h"
#include "Styling/UMGCoreStyle.h"
#include "UI/VNMClassPicker.h"
#include "K2Node_Event.h"
#include "K2Node_VariableGet.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Engine/Font.h"

namespace VNMWidgetGeneratorUtils
{
	constexpr int32 ColumnWidth = 250;
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

	void AddVariableToBlueprint(const FName& PinCategory, const FName& VariableName, UObject* SubCategoryContextClass , UWidgetBlueprint* Blueprint, const FString& DefaultValue)
	{
		UEdGraphNode::FCreatePinParams PinParams;

		FEdGraphPinType PinType = FEdGraphPinType(PinCategory, {}, SubCategoryContextClass, PinParams.ContainerType, PinParams.bIsReference, PinParams.ValueTerminalType);
		FBlueprintEditorUtils::AddMemberVariable(Blueprint, VariableName, PinType, DefaultValue);
	}

	UK2Node_VariableGet* CreateVariableGetNodeFromVariableName(UEdGraph* Graph, const FString& VariableName)
	{
		auto* NewNode = NewObject<UK2Node_VariableGet>(Graph);
		NewNode->SetFlags(RF_Transactional);
	
		NewNode->VariableReference.SetSelfMember(*VariableName);
		NewNode->CreateNewGuid();
		NewNode->PostPlacedNewNode();
		NewNode->ReconstructNode();
		NewNode->NodePosX = 0;
		NewNode->NodePosY = 0;
		NewNode->SnapToGrid(16);

		Graph->AddNode(NewNode);

		return NewNode;
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

	void SetupBlueprintAsDialogBoxWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> ControlsButtonClass)
	{
		auto* CanvasPanelRoot = WP->WidgetTree->ConstructWidget<UCanvasPanel>();
		WP->WidgetTree->RootWidget = CanvasPanelRoot;

		// Background Blur
		{
			auto* DialogBoxBackgroundBlur = WP->WidgetTree->ConstructWidget<UBackgroundBlur>(UBackgroundBlur::StaticClass(), TEXT("BackgroundBlur"));
			DialogBoxBackgroundBlur->SetBlurStrength(5.f);

			auto* DialogBoxBackgroundBlurSlot = CanvasPanelRoot->AddChildToCanvas(DialogBoxBackgroundBlur);
			DialogBoxBackgroundBlurSlot->SetAnchors({0.f, 1.f, 1.f, 1.f});
			DialogBoxBackgroundBlurSlot->SetOffsets({0.f, 0.f, 0.f, 465.f});
			DialogBoxBackgroundBlurSlot->SetAlignment({0.0, 1.0});
		}

		// Dialog Box Background
		{
			auto* DialogBoxBackground = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("DialogBoxBackground"));

			auto* DialogBoxBackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_dialogue_opac.background_dialogue_opac'"),
				nullptr,
				LOAD_None);
			DialogBoxBackground->SetBrushFromTexture(DialogBoxBackgroundTexture, true);
			
			auto* DialogBoxBackgroundSlot = CanvasPanelRoot->AddChildToCanvas(DialogBoxBackground);
			DialogBoxBackgroundSlot->SetAnchors({0.f, 1.f, 1.f, 1.f});
			DialogBoxBackgroundSlot->SetOffsets({0.f, 0.f, 0.f, 465.f});
			DialogBoxBackgroundSlot->SetAlignment({0.0, 1.0});
		}

		// Dialog Box
		{
			auto* DialogBoxCanvas = WP->WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("DialogBox"));
			
			auto* DialogBoxSlot = CanvasPanelRoot->AddChildToCanvas(DialogBoxCanvas);
			DialogBoxSlot->SetAnchors({0.5f, 1.f, 0.5f, 1.f});
			DialogBoxSlot->SetOffsets({0.f, -185.f, 1250.f, 256.f});
			DialogBoxSlot->SetAlignment({0.5, 1.0});

			// CharacterNameAlignmentBox
			{
				auto* CharacterNameAlignmentBox = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("CharacterNameAlignmentBox"));
			
				auto* CharacterNameAlignmentBoxSlot = DialogBoxCanvas->AddChildToCanvas(DialogBoxCanvas);
				CharacterNameAlignmentBoxSlot->SetAnchors({0.f, 0.2f, 1.f, 0.2f});
				CharacterNameAlignmentBoxSlot->SetOffsets({15.f, 0.f, 50.f, 30.f});
				CharacterNameAlignmentBoxSlot->SetAlignment({0.0, 0.5});
				CharacterNameAlignmentBoxSlot->SetAutoSize(true);
				
				// Character Name Text
				{
					auto* CharacterNameText = WP->WidgetTree->ConstructWidget<URichTextBlock>(URichTextBlock::StaticClass(), TEXT("CharacterNameText"));
					CharacterNameText->SetText(FText::FromString(TEXT("A very long character name")));

					FTextBlockStyle CharacterNameTextStyle;
					CharacterNameTextStyle.Font = FSlateFontInfo( FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Bold.ttf"), 30 );
					CharacterNameTextStyle.ColorAndOpacity = FLinearColor::White;
					CharacterNameTextStyle.SetShadowOffset({ 1.0, 1.0 });
					CharacterNameTextStyle.ShadowColorAndOpacity = FLinearColor::Transparent;
					CharacterNameText->SetDefaultTextStyle(CharacterNameTextStyle);
			
					auto* CharacterNameTextSlot = CharacterNameAlignmentBox->AddChildToHorizontalBox(CharacterNameText);
					CharacterNameTextSlot->SetHorizontalAlignment(HAlign_Left);
					CharacterNameTextSlot->SetVerticalAlignment(VAlign_Fill);
				}
			}

			// Dialog Text
			{
				auto* DialogText = WP->WidgetTree->ConstructWidget<URichTextBlock>(URichTextBlock::StaticClass(), TEXT("DialogText"));
				DialogText->SetText(FText::FromString(
					TEXT("Lorem ipsum dolor sit amet, consectetur adipiscing elit. "
						"Nulla sagittis tellus at tempor mattis. "
						"Quisque dolor lorem, tincidunt sit amet tellus eget, pretium pretium lectus. "
						"Vestibulum blandit tortor eu congue suscipit. "
						"Pellentesque tincidunt fermentum accumsan.")));

				auto* DialogTextStyles = LoadObject<UDataTable>(
				nullptr,
				TEXT("DataTable'/VisualNovelMachinery/Data/DT_DialogTextStyles.DT_DialogTextStyles'"),
				nullptr,
				LOAD_None);
				DialogText->SetTextStyleSet(DialogTextStyles);
				DialogText->SetAutoWrapText(true);
			
				auto* DialogTextSlot = DialogBoxCanvas->AddChildToCanvas(DialogText);
				DialogTextSlot->SetAnchors({0.f, 0.3f, 1.f, 1.f});
				DialogTextSlot->SetOffsets({10.f, 16.f, 0.f, 0.f});
				DialogTextSlot->SetAlignment({0.0, 0.0});
			}

			// Dialog Text Box
			{
				auto* DialogTextBox = WP->WidgetTree->ConstructWidget<UEditableTextBox>(UEditableTextBox::StaticClass(), TEXT("DialogTextBox"));
				
				auto* DialogTextBoxBackgroundTexture = LoadObject<UTexture2D>(
					nullptr,
					TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base_white.btn_submenu_choices_base_white'"),
					nullptr,
					LOAD_None);

				FEditableTextBoxStyle DialogTextBoxTextStyle = FUMGCoreStyle::Get().GetWidgetStyle<FEditableTextBoxStyle>("NormalEditableTextBox");
				DialogTextBoxTextStyle.SetFont(FSlateFontInfo( FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 24 ));
				
				DialogTextBoxTextStyle.BackgroundImageNormal.SetResourceObject(DialogTextBoxBackgroundTexture);
				DialogTextBoxTextStyle.BackgroundImageNormal.Margin = { 0.25 };
				DialogTextBoxTextStyle.BackgroundImageNormal.TintColor = FLinearColor(0.362847f,0.362847f,0.362847f,1.000000f);
				DialogTextBoxTextStyle.BackgroundImageNormal.SetImageSize({ 628.0, 80.0 });
				DialogTextBoxTextStyle.BackgroundImageNormal.DrawAs = ESlateBrushDrawType::Box;
				
				DialogTextBoxTextStyle.BackgroundImageHovered.SetResourceObject(DialogTextBoxBackgroundTexture);
				DialogTextBoxTextStyle.BackgroundImageHovered.Margin = { 0.25 };
				DialogTextBoxTextStyle.BackgroundImageHovered.TintColor = FLinearColor(0.465278f,0.465278f,0.465278f,1.000000f);
				DialogTextBoxTextStyle.BackgroundImageHovered.SetImageSize({ 628.0, 80.0 });
				DialogTextBoxTextStyle.BackgroundImageHovered.DrawAs = ESlateBrushDrawType::Box;
				
				DialogTextBoxTextStyle.BackgroundImageHovered.SetResourceObject(DialogTextBoxBackgroundTexture);
				DialogTextBoxTextStyle.BackgroundImageHovered.Margin = { 0.25 };
				DialogTextBoxTextStyle.BackgroundImageHovered.TintColor = FLinearColor(0.277778f,0.277778f,0.277778f,1.000000f);
				DialogTextBoxTextStyle.BackgroundImageHovered.SetImageSize({ 628.0, 80.0 });
				DialogTextBoxTextStyle.BackgroundImageHovered.DrawAs = ESlateBrushDrawType::Box;

				DialogTextBoxTextStyle.ForegroundColor = FLinearColor::Black;
				
				DialogTextBox->WidgetStyle = DialogTextBoxTextStyle;
			
				auto* DialogTextBoxSlot = DialogBoxCanvas->AddChildToCanvas(DialogTextBox);
				DialogTextBoxSlot->SetAnchors({0.f, 0.3f, 1.f, 0.3f});
				DialogTextBoxSlot->SetOffsets({10.f, 16.f, 10.f, 40.f});
				DialogTextBoxSlot->SetAlignment({0.0, 0.0});
			}
		}

		// Controls Box
		if (ControlsButtonClass)
		{
			auto* ControlsBox = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("ControlsBox"));
			
			auto* ControlsBoxSlot = CanvasPanelRoot->AddChildToCanvas(ControlsBox);
			ControlsBoxSlot->SetAnchors({0.5f, 1.f, 0.5f, 1.f});
			ControlsBoxSlot->SetOffsets({0.f, -45.f, 100.f, 30.f});
			ControlsBoxSlot->SetAlignment({0.5, 1.0});
			ControlsBoxSlot->SetAutoSize(true);

			// Save Control
			{
				auto* SaveControl = WP->WidgetTree->ConstructWidget<UMenuInputButtonWidget>(ControlsButtonClass, TEXT("SaveControl"));

				auto* SaveControlSlot = ControlsBox->AddChildToHorizontalBox(SaveControl);
			}

			// Load Control
			{
				auto* LoadControl = WP->WidgetTree->ConstructWidget<UMenuInputButtonWidget>(ControlsButtonClass, TEXT("LoadControl"));

				auto* LoadControlSlot = ControlsBox->AddChildToHorizontalBox(LoadControl);
				LoadControlSlot->SetPadding({47.f, 0.f});
			}

			// Pause Menu Control
			{
				auto* PauseMenuControl = WP->WidgetTree->ConstructWidget<UMenuInputButtonWidget>(ControlsButtonClass, TEXT("PauseMenuControl"));

				auto* PauseMenuControlSlot = ControlsBox->AddChildToHorizontalBox(PauseMenuControl);
			}

			
			auto* ContinueSign = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("ContinueSign"));
			
			auto* ContinueSignSlot = CanvasPanelRoot->AddChildToCanvas(ContinueSign);
			ContinueSignSlot->SetAnchors({1.f, 1.f, 1.f, 1.f});
			ContinueSignSlot->SetOffsets({-60.f, -45.f, 100.f, 30.f});
			ContinueSignSlot->SetAlignment({1.0, 1.0});
			ContinueSignSlot->SetAutoSize(true);

			// Continue Control
			{
				auto* ContinueControl = WP->WidgetTree->ConstructWidget<UMenuInputButtonWidget>(ControlsButtonClass, TEXT("ContinueControl"));

				auto* ContinueControlSlot = ContinueSign->AddChildToHorizontalBox(ContinueControl);
			}
		}
		
		{
			auto* FadeAnimation = CreateWidgetAnimation(TEXT("FadeAnimation"), WP);
			WP->Animations.Add(FadeAnimation);
		}
		{
			auto* DissolveAnimation = CreateWidgetAnimation(TEXT("DissolveAnimation"), WP);
			WP->Animations.Add(DissolveAnimation);
		}
		{
			auto* ZoomAnimation = CreateWidgetAnimation(TEXT("ZoomAnimation"), WP);
			WP->Animations.Add(ZoomAnimation);
		}
		{
			auto* VPunchAnimation = CreateWidgetAnimation(TEXT("VPunchAnimation"), WP);
			WP->Animations.Add(VPunchAnimation);
		}
		{
			auto* HPunchAnimation = CreateWidgetAnimation(TEXT("HPunchAnimation"), WP);
			WP->Animations.Add(HPunchAnimation);
		}
		{
			auto* PunchAnimation = CreateWidgetAnimation(TEXT("PunchAnimation"), WP);
			WP->Animations.Add(PunchAnimation);
		}
	}
	
	void SetupBlueprintAsChoiceButton(UWidgetBlueprint* WP)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		// Background
		{
			auto* Background = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Background"));

			auto* ChoiceButtonBackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_submenu_choices_base.btn_submenu_choices_base'"),
				nullptr,
				LOAD_None);
			Background->SetBrushFromTexture(ChoiceButtonBackgroundTexture, true);
			Background->Brush.DrawAs = ESlateBrushDrawType::Box;
			Background->Brush.Margin = { 0.12f };
			Background->SetRenderOpacity(0.82f);
			
			auto* BackgroundSlot = OverlayRoot->AddChildToOverlay(Background);
		}
		
		// Choice Text
		{
			auto* ChoiceText = WP->WidgetTree->ConstructWidget<URichTextBlock>(URichTextBlock::StaticClass(), TEXT("ChoiceText"));
			ChoiceText->SetText(FText::FromString(TEXT("A very long choice text")));

			auto* DialogTextStyles = LoadObject<UDataTable>(
			nullptr,
			TEXT("DataTable'/VisualNovelMachinery/Data/DT_DialogTextStyles.DT_DialogTextStyles'"),
			nullptr,
			LOAD_None);
			ChoiceText->SetTextStyleSet(DialogTextStyles);

			FTextBlockStyle ChoiceButtonTextStyle;
			ChoiceButtonTextStyle.Font = FSlateFontInfo( FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 25 );
			ChoiceButtonTextStyle.ColorAndOpacity = FLinearColor::White;
			ChoiceButtonTextStyle.SetShadowOffset({ 1.0, 1.0 });
			ChoiceButtonTextStyle.ShadowColorAndOpacity = FLinearColor::Transparent;
			ChoiceText->SetDefaultTextStyle(ChoiceButtonTextStyle);
			
			auto* ChoiceTextSlot = OverlayRoot->AddChildToOverlay(ChoiceText);
			ChoiceTextSlot->SetHorizontalAlignment(HAlign_Center);
			ChoiceTextSlot->SetVerticalAlignment(VAlign_Center);
		}

		// Choice Button
		{
			auto* ChoiceButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("ChoiceButton"));

			ChoiceButton->SetRenderOpacity(0.f);

			auto* ChoiceButtonSlot = OverlayRoot->AddChildToOverlay(ChoiceButton);
			ChoiceButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			ChoiceButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}

		auto* Button = WP->GeneratedClass->GetDefaultObject<UBaseChoiceButton>();

		Button->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);
	}
	
	void SetupBlueprintAsImageChoiceButton(UWidgetBlueprint* WP)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		// ChoiceImage
		{
			auto* ChoiceImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("ChoiceImage"));

			auto* ChoiceImageButtonBackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Items/cuby_mustache_item.cuby_mustache_item'"),
				nullptr,
				LOAD_None);
			ChoiceImage->SetBrushFromTexture(ChoiceImageButtonBackgroundTexture, true);
			ChoiceImage->Brush.DrawAs = ESlateBrushDrawType::Image;
			
			auto* ChoiceImageSlot = OverlayRoot->AddChildToOverlay(ChoiceImage);
		}
		
		// Choice Button
		{
			auto* ChoiceButton = WP->WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("ChoiceButton"));

			ChoiceButton->SetRenderOpacity(0.f);

			auto* ChoiceButtonSlot = OverlayRoot->AddChildToOverlay(ChoiceButton);
			ChoiceButtonSlot->SetHorizontalAlignment(HAlign_Fill);
			ChoiceButtonSlot->SetVerticalAlignment(VAlign_Fill);
		}

		auto* Button = WP->GeneratedClass->GetDefaultObject<UBaseImageChoiceButton>();

		Button->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);
	}

	void SetupBlueprintAsChoiceWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> ChoiceButtonClass)
	{
		auto* CanvasPanelRoot = WP->WidgetTree->ConstructWidget<UCanvasPanel>();
		WP->WidgetTree->RootWidget = CanvasPanelRoot;

		// Choice Buttons List
		{
			auto* ChoiceButtonsList = WP->WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("ChoiceButtonsList"));

			for (int32 i = 0; i < 6; i++)
			{
				auto* ChoiceButton = WP->WidgetTree->ConstructWidget<UBaseChoiceButton>(ChoiceButtonClass);

				auto* Slot = ChoiceButtonsList->AddChildToVerticalBox(ChoiceButton);
				Slot->SetPadding({ 0.f, 12.5f, 0.f, 0.f });
			}

			auto* ChoiceButtonsListSlot = CanvasPanelRoot->AddChildToCanvas(ChoiceButtonsList);
			ChoiceButtonsListSlot->SetAnchors({0.5f, 0.322963f, 0.5f, 0.322963f});
			ChoiceButtonsListSlot->SetOffsets({0.f, 0.f, 0.f, 465.f});
			ChoiceButtonsListSlot->SetAlignment({0.5, 0.5});
			ChoiceButtonsListSlot->SetAutoSize(true);
		}
		
		// Choice Arrow
		{
			auto* ChoiceArrow = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("ChoiceArrow"));

			auto* ChoiceButtonBackgroundTexture = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_dialogue_arrow_opac.background_dialogue_arrow_opac'"),
				nullptr,
				LOAD_None);
			ChoiceArrow->SetBrushFromTexture(ChoiceButtonBackgroundTexture, true);
			ChoiceArrow->Brush.DrawAs = ESlateBrushDrawType::Image;
			ChoiceArrow->SetRenderOpacity(0.82f);
			
			auto* ChoiceArrowSlot = CanvasPanelRoot->AddChildToCanvas(ChoiceArrow);
			ChoiceArrowSlot->SetAnchors({0.5f, 1.f, 0.5f, 1.f});
			ChoiceArrowSlot->SetOffsets({0.f, -465.f, 0.f, 465.f});
			ChoiceArrowSlot->SetAlignment({0.5, 1.0});
			ChoiceArrowSlot->SetAutoSize(true);
		}
		
		{
			auto* FadeAnimation = CreateWidgetAnimation(TEXT("FadeAnimation"), WP);
			WP->Animations.Add(FadeAnimation);
		}
		{
			auto* DissolveAnimation = CreateWidgetAnimation(TEXT("DissolveAnimation"), WP);
			WP->Animations.Add(DissolveAnimation);
		}
		{
			auto* ZoomAnimation = CreateWidgetAnimation(TEXT("ZoomAnimation"), WP);
			WP->Animations.Add(ZoomAnimation);
		}
		{
			auto* VPunchAnimation = CreateWidgetAnimation(TEXT("VPunchAnimation"), WP);
			WP->Animations.Add(VPunchAnimation);
		}
		{
			auto* HPunchAnimation = CreateWidgetAnimation(TEXT("HPunchAnimation"), WP);
			WP->Animations.Add(HPunchAnimation);
		}
		{
			auto* PunchAnimation = CreateWidgetAnimation(TEXT("PunchAnimation"), WP);
			WP->Animations.Add(PunchAnimation);
		}
		
		auto* ChoiceWidget = WP->GeneratedClass->GetDefaultObject<UBaseChoiceWidget>();
		
		SetPropertyValue(ChoiceWidget, TEXT("ChoiceButtonClass"), ChoiceButtonClass);

		CompileBlueprint(WP);
	}

	void SetupBlueprintAsCgDisplayWidget(UWidgetBlueprint* WP)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		// Cg Image
		{
			auto* CgImage = WP->WidgetTree->ConstructWidget<UAdvancedLayeredImage>(UAdvancedLayeredImage::StaticClass(), TEXT("CgImage"));
			
			auto* CgImageSlot = OverlayRoot->AddChildToOverlay(CgImage);
			CgImageSlot->SetHorizontalAlignment(HAlign_Fill);
			CgImageSlot->SetVerticalAlignment(VAlign_Fill);
		}

		// Cg Image For Transition
		{
			auto* CgImageForTransition = WP->WidgetTree->ConstructWidget<UAdvancedLayeredImage>(UAdvancedLayeredImage::StaticClass(), TEXT("CgImageForTransition"));
			
			auto* CgImageForTransitionSlot = OverlayRoot->AddChildToOverlay(CgImageForTransition);
			CgImageForTransitionSlot->SetHorizontalAlignment(HAlign_Fill);
			CgImageForTransitionSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		{
			auto* FadeAnimation = CreateWidgetAnimation(TEXT("FadeAnimation"), WP);
			WP->Animations.Add(FadeAnimation);
		}
		{
			auto* DissolveAnimation = CreateWidgetAnimation(TEXT("DissolveAnimation"), WP);
			WP->Animations.Add(DissolveAnimation);
		}
		{
			auto* ZoomAnimation = CreateWidgetAnimation(TEXT("ZoomAnimation"), WP);
			WP->Animations.Add(ZoomAnimation);
		}
		{
			auto* VPunchAnimation = CreateWidgetAnimation(TEXT("VPunchAnimation"), WP);
			WP->Animations.Add(VPunchAnimation);
		}
		{
			auto* HPunchAnimation = CreateWidgetAnimation(TEXT("HPunchAnimation"), WP);
			WP->Animations.Add(HPunchAnimation);
		}
		{
			auto* PunchAnimation = CreateWidgetAnimation(TEXT("PunchAnimation"), WP);
			WP->Animations.Add(PunchAnimation);
		}
	}

	void SetupBlueprintAsSceneBackgroundDisplayWidget(UWidgetBlueprint* WP)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		// Scene Background Image
		{
			auto* SceneBackgroundImage = WP->WidgetTree->ConstructWidget<UAdvancedLayeredImage>(UAdvancedLayeredImage::StaticClass(), TEXT("SceneBackgroundImage"));
			
			auto* SceneBackgroundImageSlot = OverlayRoot->AddChildToOverlay(SceneBackgroundImage);
			SceneBackgroundImageSlot->SetHorizontalAlignment(HAlign_Fill);
			SceneBackgroundImageSlot->SetVerticalAlignment(VAlign_Fill);
		}

		// Scene Background Image For Transition
		{
			auto* SceneBackgroundImageForTransition = WP->WidgetTree->ConstructWidget<UAdvancedLayeredImage>(UAdvancedLayeredImage::StaticClass(), TEXT("SceneBackgroundImageForTransition"));
			
			auto* SceneBackgroundImageForTransitionSlot = OverlayRoot->AddChildToOverlay(SceneBackgroundImageForTransition);
			SceneBackgroundImageForTransitionSlot->SetHorizontalAlignment(HAlign_Fill);
			SceneBackgroundImageForTransitionSlot->SetVerticalAlignment(VAlign_Fill);
		}
		
		{
			auto* FadeAnimation = CreateWidgetAnimation(TEXT("FadeAnimation"), WP);
			WP->Animations.Add(FadeAnimation);
		}
		{
			auto* DissolveAnimation = CreateWidgetAnimation(TEXT("DissolveAnimation"), WP);
			WP->Animations.Add(DissolveAnimation);
		}
		{
			auto* ZoomAnimation = CreateWidgetAnimation(TEXT("ZoomAnimation"), WP);
			WP->Animations.Add(ZoomAnimation);
		}
		{
			auto* VPunchAnimation = CreateWidgetAnimation(TEXT("VPunchAnimation"), WP);
			WP->Animations.Add(VPunchAnimation);
		}
		{
			auto* HPunchAnimation = CreateWidgetAnimation(TEXT("HPunchAnimation"), WP);
			WP->Animations.Add(HPunchAnimation);
		}
		{
			auto* PunchAnimation = CreateWidgetAnimation(TEXT("PunchAnimation"), WP);
			WP->Animations.Add(PunchAnimation);
		}
	}

	void SetupBlueprintAsCharacterDisplayWidget(UWidgetBlueprint* WP)
	{
		auto* CanvasPanelRoot = WP->WidgetTree->ConstructWidget<UCanvasPanel>();
		WP->WidgetTree->RootWidget = CanvasPanelRoot;

		// Character Image
		{
			auto* CharacterImage = WP->WidgetTree->ConstructWidget<UAdvancedLayeredImage>(UAdvancedLayeredImage::StaticClass(), TEXT("CharacterImage"));
			CharacterImage->Brush.ImageSize = FVector2D(500.0, 800.0);
			
			auto* CharacterImageSlot = CanvasPanelRoot->AddChildToCanvas(CharacterImage);
			CharacterImageSlot->SetAnchors({ 0.5f, 1.f, 0.5f, 1.f });
			CharacterImageSlot->SetAlignment({ 0.5, 1.0 });
			CharacterImageSlot->SetAutoSize(true);
		}
		
		{
			auto* FadeAnimation = CreateWidgetAnimation(TEXT("FadeAnimation"), WP);
			WP->Animations.Add(FadeAnimation);
		}
		{
			auto* DissolveAnimation = CreateWidgetAnimation(TEXT("DissolveAnimation"), WP);
			WP->Animations.Add(DissolveAnimation);
		}
		{
			auto* ZoomAnimation = CreateWidgetAnimation(TEXT("ZoomAnimation"), WP);
			WP->Animations.Add(ZoomAnimation);
		}
		{
			auto* VPunchAnimation = CreateWidgetAnimation(TEXT("VPunchAnimation"), WP);
			WP->Animations.Add(VPunchAnimation);
		}
		{
			auto* HPunchAnimation = CreateWidgetAnimation(TEXT("HPunchAnimation"), WP);
			WP->Animations.Add(HPunchAnimation);
		}
		{
			auto* PunchAnimation = CreateWidgetAnimation(TEXT("PunchAnimation"), WP);
			WP->Animations.Add(PunchAnimation);
		}
	}

	void SetupBlueprintAsControlButton(UWidgetBlueprint* WP,
		TObjectPtr<UClass> MenuTextButtonClass,
		TObjectPtr<UClass> MenuIconButtonClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* InputVisualizationSwitcher = WP->WidgetTree->ConstructWidget<UWidgetSwitcher>(UWidgetSwitcher::StaticClass(), TEXT("InputVisualizationSwitcher"));

			auto* InputVisualizationSwitcherSlot = OverlayRoot->AddChildToOverlay(InputVisualizationSwitcher);
			InputVisualizationSwitcherSlot->SetHorizontalAlignment(HAlign_Left);
			InputVisualizationSwitcherSlot->SetVerticalAlignment(VAlign_Top);

			{
				auto* TextControl = WP->WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("TextControl"));

				auto* TextControlSlot = Cast<UWidgetSwitcherSlot>(InputVisualizationSwitcher->AddChild(TextControl));
				TextControlSlot->SetHorizontalAlignment(HAlign_Fill);
				TextControlSlot->SetVerticalAlignment(VAlign_Fill);

				{
					auto* KeyIconSizeBox = WP->WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("KeyIconSizeBox"));

					KeyIconSizeBox->SetWidthOverride(64.f);
					KeyIconSizeBox->SetHeightOverride(64.f);

					auto* KeyIconSizeBoxSlot = TextControl->AddChildToHorizontalBox(KeyIconSizeBox);
					KeyIconSizeBoxSlot->SetHorizontalAlignment(HAlign_Fill);
					KeyIconSizeBoxSlot->SetVerticalAlignment(VAlign_Fill);

					{
						auto* KeyIcon = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("KeyIcon"));

						auto* KeyIconSlot = Cast<USizeBoxSlot>(KeyIconSizeBox->AddChild(KeyIcon));
						KeyIconSlot->SetHorizontalAlignment(HAlign_Fill);
						KeyIconSlot->SetVerticalAlignment(VAlign_Fill);
					}
				}

				{
					auto* InputButton = WP->WidgetTree->ConstructWidget<UMenuTextButtonWidget>(MenuTextButtonClass, TEXT("InputButton"));

					FButtonStyling ButtonStyling = *GetPropertyValue<UMenuTextButtonWidget, FButtonStyling>(InputButton, TEXT("Style"));

					ButtonStyling.IdleTexture = nullptr;
					ButtonStyling.HoveredTexture = nullptr;
					ButtonStyling.PressedTexture = nullptr;
					ButtonStyling.SelectedTexture = nullptr;
					ButtonStyling.SelectedHoveredTexture = nullptr;
					ButtonStyling.SelectedPressedTexture = nullptr;
					ButtonStyling.LockedTexture = nullptr;
					
					ButtonStyling.IdleColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					ButtonStyling.HoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					ButtonStyling.PressedColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					ButtonStyling.SelectedColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					ButtonStyling.SelectedHoveredColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					ButtonStyling.SelectedPressedColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					ButtonStyling.LockedColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
					
					ButtonStyling.SelectedTextColor = FLinearColor(1.f, 1.f, 1.f, 1.f);
					ButtonStyling.SelectedHoveredTextColor = FLinearColor(1.f, 1.f, 1.f, 1.f);
					ButtonStyling.SelectedPressedTextColor = FLinearColor(1.f, 1.f, 1.f, 1.f);
					
					SetPropertyValue(InputButton, TEXT("Style"), ButtonStyling);

					auto* InputButtonSlot = TextControl->AddChildToHorizontalBox(InputButton);
					InputButtonSlot->SetHorizontalAlignment(HAlign_Center);
					InputButtonSlot->SetVerticalAlignment(VAlign_Center);
				}
			}

			{
				auto* TouchButtonScaleBox = WP->WidgetTree->ConstructWidget<UScaleBox>(UScaleBox::StaticClass(), TEXT("TouchButtonScaleBox"));

				TouchButtonScaleBox->SetStretch(EStretch::UserSpecified);
				TouchButtonScaleBox->SetUserSpecifiedScale(0.8f);

				auto* TouchButtonScaleBoxSlot = Cast<UWidgetSwitcherSlot>(InputVisualizationSwitcher->AddChild(TouchButtonScaleBox));
				TouchButtonScaleBoxSlot->SetHorizontalAlignment(HAlign_Fill);
				TouchButtonScaleBoxSlot->SetVerticalAlignment(VAlign_Fill);

				{
					auto* TouchButton = WP->WidgetTree->ConstructWidget<UMenuIconButtonWidget>(MenuIconButtonClass, TEXT("TouchButton"));
					
					auto* TouchButtonSlot = Cast<UScaleBoxSlot>(TouchButtonScaleBox->AddChild(TouchButton));
					TouchButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					TouchButtonSlot->SetVerticalAlignment(VAlign_Fill);
					
				}
			}
		}

		
		auto* Button = WP->GeneratedClass->GetDefaultObject<UMenuInputButtonWidget>();

		SetPropertyValue(Button, TEXT("InputActionName"), FName(TEXT("SaveGame")));
		SetPropertyValue(Button, TEXT("BindingText"), FText::FromString("Save"));

		auto* MobileSaveIcon = LoadObject<UTexture2D>(
				nullptr,
				TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Controls/btn_mobile_save.btn_mobile_save'"),
				nullptr,
				LOAD_None);
		
		auto* RobotoFont = LoadObject<UFont>(
			nullptr,
			TEXT("Font'/Engine/EngineFonts/Roboto.Roboto'"),
			nullptr,
			LOAD_None);

		FButtonStyling TouchButtonStyling;

		TouchButtonStyling.IdleTexture = MobileSaveIcon;
		TouchButtonStyling.HoveredTexture = MobileSaveIcon;
		TouchButtonStyling.PressedTexture = MobileSaveIcon;
		TouchButtonStyling.SelectedTexture = MobileSaveIcon;
		TouchButtonStyling.SelectedHoveredTexture = MobileSaveIcon;
		TouchButtonStyling.SelectedPressedTexture = MobileSaveIcon;
		TouchButtonStyling.LockedTexture = MobileSaveIcon;

		TouchButtonStyling.IdleColor = FLinearColor::White;
		TouchButtonStyling.HoveredColor = FLinearColor::White;
		TouchButtonStyling.PressedColor = FLinearColor::White;
		TouchButtonStyling.SelectedColor = FLinearColor::White;
		TouchButtonStyling.SelectedHoveredColor = FLinearColor::White;
		TouchButtonStyling.SelectedPressedColor = FLinearColor::White;
		TouchButtonStyling.LockedColor = FLinearColor::White;

		TouchButtonStyling.IdleTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));
		TouchButtonStyling.HoveredTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));
		TouchButtonStyling.PressedTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));
		TouchButtonStyling.SelectedTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));
		TouchButtonStyling.SelectedHoveredTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));
		TouchButtonStyling.SelectedPressedTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));
		TouchButtonStyling.LockedTextFont = FSlateFontInfo(RobotoFont, 24, TEXT("Regular"));

		TouchButtonStyling.IdleTextColor = FLinearColor::Transparent;
		TouchButtonStyling.HoveredTextColor = FLinearColor::Transparent;
		TouchButtonStyling.PressedTextColor = FLinearColor::Transparent;
		TouchButtonStyling.SelectedTextColor = FLinearColor::Transparent;
		TouchButtonStyling.SelectedHoveredTextColor = FLinearColor::Transparent;
		TouchButtonStyling.SelectedPressedTextColor = FLinearColor::Transparent;
		TouchButtonStyling.LockedTextColor = FLinearColor::Transparent;
		
		SetPropertyValue(Button, TEXT("TouchButtonStyle"), TouchButtonStyling);

		Button->DesignSizeMode = EDesignPreviewSizeMode::Desired;

		CompileBlueprint(WP);
	}

	void SetupBlueprintAsImageChoiceWidget(UWidgetBlueprint* WP, TObjectPtr<UClass> PanelWidgetClass)
	{
		auto* OverlayRoot = WP->WidgetTree->ConstructWidget<UOverlay>();
		WP->WidgetTree->RootWidget = OverlayRoot;

		{
			auto* BackgroundImage = WP->WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Background"));
			
			auto* BackgroundTexture = LoadObject<UTexture2D>(
							nullptr,
							TEXT("Texture2D'/VisualNovelMachinery/Art/UI/Backgrounds/background_2160p.background_2160p'"),
							nullptr,
							LOAD_None);
			BackgroundImage->SetBrushFromTexture(BackgroundTexture, true);
			
			auto* BackgroundImageSlot = OverlayRoot->AddChildToOverlay(BackgroundImage);
			BackgroundImageSlot->SetHorizontalAlignment(HAlign_Fill);
			BackgroundImageSlot->SetVerticalAlignment(VAlign_Fill);
		}

		{
			auto* PanelWidget = WP->WidgetTree->ConstructWidget<UPanelWidget>(PanelWidgetClass, TEXT("ChoiceButtonsList"));

			auto* PanelWidgetSlot = OverlayRoot->AddChildToOverlay(PanelWidget);
			PanelWidgetSlot->SetHorizontalAlignment(HAlign_Fill);
			PanelWidgetSlot->SetVerticalAlignment(VAlign_Fill);			
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

UVNMWidgetBlueprintFactory::UVNMWidgetBlueprintFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UBaseVNMWidget::StaticClass();
}

bool UVNMWidgetBlueprintFactory::ConfigureProperties()
{
	// Load the classviewer module to display a class picker
	FClassViewerModule& ClassViewerModule = FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer");

	{
		if (!SVNMWidgetClassPicker::PickClass(VNMWidget))
		{
			return false;
		}

		switch (VNMWidget)
		{
		case EVNMWidget::CgDisplayWidget:
			ParentClass = UBaseCgDisplayWidget::StaticClass();
			break;
		case EVNMWidget::CharacterDisplayWidget:
			ParentClass = UBaseCharacterDisplayWidget::StaticClass();
			break;
		case EVNMWidget::ChoiceButton:
			ParentClass = UBaseChoiceButton::StaticClass();
			break;
		case EVNMWidget::ChoiceWidget:
			ParentClass = UBaseChoiceWidget::StaticClass();
			break;
		case EVNMWidget::ControlButton:
			ParentClass = UMenuInputButtonWidget::StaticClass();
			break;
		case EVNMWidget::DialogBoxWidget:
			ParentClass = UBaseDialogBoxWidget::StaticClass();
			break;
		case EVNMWidget::ImageChoiceButton:
			ParentClass = UBaseImageChoiceButton::StaticClass();
			break;
		case EVNMWidget::ImageChoiceWidget:
			ParentClass = UBaseImageChoiceWidget::StaticClass();
			break;
		case EVNMWidget::SceneBackgroundDisplayWidget:
			ParentClass = UBaseSceneBackgroundDisplayWidget::StaticClass();
			break;
		default:
			return false;
		}
	}

	// Fill in options
	FClassViewerInitializationOptions Options;
	Options.Mode = EClassViewerMode::ClassPicker;
	Options.bShowNoneOption = true;

	TSharedPtr<VNMWidgetGeneratorUtils::FWidgetClassFilter> Filter = MakeShareable(new VNMWidgetGeneratorUtils::FWidgetClassFilter);
	Options.ClassFilters.Add(Filter.ToSharedRef());

	Filter->DisallowedClassFlags = CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists;

	if (VNMWidget == EVNMWidget::DialogBoxWidget)
	{
		Filter->AllowedChildrenOfClasses.Add(UMenuInputButtonWidget::StaticClass());

		const FText TitleText = NSLOCTEXT("VNMEditor", "CreateDialogBoxWidgetBlueprint", "Pick widget to use for control buttons!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClass), UMenuInputButtonWidget::StaticClass());
	}

	if (VNMWidget == EVNMWidget::ChoiceWidget)
	{
		Filter->AllowedChildrenOfClasses.Add(UBaseChoiceButton::StaticClass());

		const FText TitleText = NSLOCTEXT("VNMEditor", "CreateChoiceWidgetBlueprint", "Pick widget to use for the choice buttons!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClass), UBaseChoiceButton::StaticClass());
	}

	if (VNMWidget == EVNMWidget::ImageChoiceWidget)
	{
		Filter->AllowedChildrenOfClasses.Add(UPanelWidget::StaticClass());

		const FText TitleText = NSLOCTEXT("VNMEditor", "CreateImageChoiceWidgetBlueprint", "Pick panel container to be used the image choice widget!");
		return SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClass), UPanelWidget::StaticClass());
	}

	if (VNMWidget == EVNMWidget::ControlButton)
	{
		Filter->AllowedChildrenOfClasses.Add(UMenuTextButtonWidget::StaticClass());

		const FText TitleText = NSLOCTEXT("VNMEditor", "CreateControlButtonBlueprintSelectTextButton", "Pick widget to use for the text button version of this widget!");
		if (!SClassPickerDialog::PickClass(TitleText, Options, static_cast<UClass*&>(AdditionalWidgetClass), UMenuTextButtonWidget::StaticClass()))
		{
			return false;
		}
		
		Filter->AllowedChildrenOfClasses.Remove(UMenuTextButtonWidget::StaticClass());
		Filter->AllowedChildrenOfClasses.Add(UMenuIconButtonWidget::StaticClass());

		const FText TitleText2 = NSLOCTEXT("VNMEditor", "CreateControlButtonBlueprintSelectIconButton", "Pick widget to use for the icon button version of this widget!");
		return SClassPickerDialog::PickClass(TitleText2, Options, static_cast<UClass*&>(AdditionalWidgetClass2), UMenuIconButtonWidget::StaticClass());
	}

	return true;
}

UObject* UVNMWidgetBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	UWidgetBlueprint* NewBP = CastChecked<UWidgetBlueprint>(FKismetEditorUtilities::CreateBlueprint(
		ParentClass,
		InParent,
		Name,
		BPTYPE_Normal,
		UWidgetBlueprint::StaticClass(),
		UWidgetBlueprintGeneratedClass::StaticClass(),
		CallingContext));

	if (VNMWidget == EVNMWidget::DialogBoxWidget)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsDialogBoxWidget(NewBP, AdditionalWidgetClass);
	}
	else if (VNMWidget == EVNMWidget::ChoiceButton)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsChoiceButton(NewBP);
	}
	else if (VNMWidget == EVNMWidget::ImageChoiceButton)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsImageChoiceButton(NewBP);
	}
	else if (VNMWidget == EVNMWidget::ChoiceWidget)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsChoiceWidget(NewBP, AdditionalWidgetClass);
	}
	else if (VNMWidget == EVNMWidget::CgDisplayWidget)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsCgDisplayWidget(NewBP);
	}
	else if (VNMWidget == EVNMWidget::SceneBackgroundDisplayWidget)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsSceneBackgroundDisplayWidget(NewBP);
	}
	else if (VNMWidget == EVNMWidget::CharacterDisplayWidget)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsCharacterDisplayWidget(NewBP);
	}
	else if (VNMWidget == EVNMWidget::ControlButton)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsControlButton(NewBP, AdditionalWidgetClass, AdditionalWidgetClass2);
	}
	else if (VNMWidget == EVNMWidget::ImageChoiceWidget)
	{
		VNMWidgetGeneratorUtils::SetupBlueprintAsImageChoiceWidget(NewBP, AdditionalWidgetClass);
	}
	
	return NewBP;
}

UObject* UVNMWidgetBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}
