// Copyright (c) 2022 Al_Fe

#include "CgHideGraphNodeWidget.h"



#include "CgHideNode.h"
#include "CgShowNode.h"
#include "CharacterShowNode.h"
#include "SNameComboBox.h"

#include "DialogTextNode.h"
#include "TransitionEvent.h"
#include "VNMSettings.h"
#include "Kismet2/BlueprintEditorUtils.h"

#define LOCTEXT_NAMESPACE "VNM"

void SCgHideGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SCgHideGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();
}

#undef LOCTEXT_NAMESPACE
