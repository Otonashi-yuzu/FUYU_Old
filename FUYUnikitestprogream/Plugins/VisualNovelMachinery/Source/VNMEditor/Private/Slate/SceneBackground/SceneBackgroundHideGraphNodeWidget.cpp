// Copyright (c) 2022 Al_Fe

#include "SceneBackgroundHideGraphNodeWidget.h"



#include "SceneBackgroundHideNode.h"
#include "SNameComboBox.h"
#include "TransitionEvent.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"

#define LOCTEXT_NAMESPACE "VNM"

void SSceneBackgroundHideGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;

    UpdateGraphNode();
}

void SSceneBackgroundHideGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();

    auto* SceneBackgroundHideNode = Cast<USceneBackgroundHideNode>(GraphNode);
}

#undef LOCTEXT_NAMESPACE
