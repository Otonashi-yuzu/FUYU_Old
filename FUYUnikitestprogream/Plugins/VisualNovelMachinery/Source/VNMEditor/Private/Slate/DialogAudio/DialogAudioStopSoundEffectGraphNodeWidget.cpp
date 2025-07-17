// Copyright (c) 2022 Al_Fe

#include "DialogAudioStopSoundEffectGraphNodeWidget.h"



#include "DialogAudioStopSoundEffectNode.h"

#define LOCTEXT_NAMESPACE "VNM"

void SDialogAudioStopSoundEffectGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
    GraphNode = InNode;
    
    UpdateGraphNode();
}

void SDialogAudioStopSoundEffectGraphNodeWidget::CreatePinWidgets()
{
    SGraphNodeK2Base::CreatePinWidgets();
}

#undef LOCTEXT_NAMESPACE
