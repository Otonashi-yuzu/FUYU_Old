// Copyright (c) 2022 Al_Fe

#include "CgPlayAnimationGraphNodeWidget.h"

#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 1
#include "Styling/AppStyle.h"
#endif

#define LOCTEXT_NAMESPACE "VNM"

void SCgPlayAnimationGraphNodeWidget::Construct(const FArguments&, UK2Node* InNode)
{
	GraphNode = InNode;

	UpdateGraphNode();
}

void SCgPlayAnimationGraphNodeWidget::CreatePinWidgets()
{
	SGraphNodeK2Base::CreatePinWidgets();
}
#undef LOCTEXT_NAMESPACE
