// Copyright (c) 2022 Al_Fe

#include "DialogAudioStopVoiceOverGraphNodeWidget.h"



#include "DialogAudioStopVoiceOverNode.h"

#define LOCTEXT_NAMESPACE "VNM"

void SDialogAudioStopVoiceOverGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogAudioStopVoiceOverGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();
}

#undef LOCTEXT_NAMESPACE
