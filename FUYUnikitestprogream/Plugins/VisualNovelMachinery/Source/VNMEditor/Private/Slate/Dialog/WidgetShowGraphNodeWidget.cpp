// Copyright (c) 2022 Al_Fe

#include "WidgetShowGraphNodeWidget.h"

#include "PropertyCustomizationHelpers.h"
#include "WidgetShowNode.h"
#include "VNMSettings.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SWidgetShowGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
	GraphNode = InNode;

	UpdateGraphNode();
}

void SWidgetShowGraphNodeWidget::CreatePinWidgets()
{
	SGraphNodeK2Base::CreatePinWidgets();

	auto* WidgetShowNode = Cast<UWidgetShowNode>(GraphNode);
	
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
        .SelectedClass_Raw(this, &SWidgetShowGraphNodeWidget::GetClass)
        .OnSetClass_Raw(this, &SWidgetShowGraphNodeWidget::OnClassSet)
	];
}

const UClass* SWidgetShowGraphNodeWidget::GetClass() const
{
	auto* WidgetShowNode = Cast<UWidgetShowNode>(GraphNode);
	return WidgetShowNode->ActivatableWidgetClass;
}

void SWidgetShowGraphNodeWidget::OnClassSet(const UClass* Class)
{
	auto* WidgetShowNode = Cast<UWidgetShowNode>(GraphNode);

	WidgetShowNode->ActivatableWidgetClass = const_cast<UClass*>(Class);
}

#undef LOCTEXT_NAMESPACE
