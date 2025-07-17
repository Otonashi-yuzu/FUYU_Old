// Copyright (c) 2022 Al_Fe

#include "WidgetHideGraphNodeWidget.h"

#include "PropertyCustomizationHelpers.h"
#include "WidgetHideNode.h"
#include "VNMSettings.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SWidgetHideGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
	GraphNode = InNode;

	UpdateGraphNode();
}

void SWidgetHideGraphNodeWidget::CreatePinWidgets()
{
	SGraphNodeK2Base::CreatePinWidgets();

	auto* WidgetHideNode = Cast<UWidgetHideNode>(GraphNode);
	
	LeftNodeBox->AddSlot()
	           .AutoHeight()
	           .Padding(FMargin{32, 4, 4, 4})
	[
		SNew(STextBlock)
		.Text(LOCTEXT("Label.ActivatableWidgetClass", "ActivatableWidgetClass"))
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
            .TextStyle(FAppStyle::Get(), "Graph.Node.PinName")
#else
		.TextStyle(FEditorStyle::Get(), "Graph.Node.PinName")
#endif
		.IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
	];

	LeftNodeBox->AddSlot()
	           .AutoHeight()
	           .Padding(FMargin{36, 4, 4, 4})
	[
		SNew(SClassPropertyEntryBox)
        .MetaClass(UBaseVNMActivatableWidget::StaticClass())
        .IsEnabled(this, &SGraphNodeK2Base::IsNodeEditable)
        .SelectedClass_Raw(this, &SWidgetHideGraphNodeWidget::GetClass)
        .OnSetClass_Raw(this, &SWidgetHideGraphNodeWidget::OnClassSet)
	];
}

const UClass* SWidgetHideGraphNodeWidget::GetClass() const
{
	auto* WidgetHideNode = Cast<UWidgetHideNode>(GraphNode);
	return WidgetHideNode->ActivatableWidgetClass;
}

void SWidgetHideGraphNodeWidget::OnClassSet(const UClass* Class)
{
	auto* WidgetHideNode = Cast<UWidgetHideNode>(GraphNode);

	WidgetHideNode->ActivatableWidgetClass = const_cast<UClass*>(Class);
}

#undef LOCTEXT_NAMESPACE
