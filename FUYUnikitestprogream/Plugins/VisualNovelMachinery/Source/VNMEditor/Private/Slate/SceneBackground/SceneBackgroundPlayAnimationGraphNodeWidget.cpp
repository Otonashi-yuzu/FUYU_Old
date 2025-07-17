// Copyright (c) 2022 Al_Fe

#include "SceneBackgroundPlayAnimationGraphNodeWidget.h"



#include "SceneBackgroundPlayAnimationNode.h"
#include "SNameComboBox.h"

#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SSceneBackgroundPlayAnimationGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SSceneBackgroundPlayAnimationGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();
}

#undef LOCTEXT_NAMESPACE
