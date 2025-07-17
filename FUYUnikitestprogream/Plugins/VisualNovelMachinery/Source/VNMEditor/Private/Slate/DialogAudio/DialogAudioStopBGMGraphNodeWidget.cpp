// Copyright (c) 2022 Al_Fe

#include "DialogAudioStopBGMGraphNodeWidget.h"



#include "DialogAudioStopBGMNode.h"

#define LOCTEXT_NAMESPACE "VNM"

void SDialogAudioStopBGMGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogAudioStopBGMGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();
}

#undef LOCTEXT_NAMESPACE
