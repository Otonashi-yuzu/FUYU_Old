// Copyright (c) 2022 Al_Fe


#include "CgRemoveLayerNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CgRemoveLayerGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCgRemoveLayerNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCgRemoveLayerNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CgRemoveLayerNode.Title", "Cg Remove Layer");
}

FText UCgRemoveLayerNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CgRemoveLayerNode.Tooltip", "This node is used to remove an image layer from the specified Cg!");
}

FLinearColor UCgRemoveLayerNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UCgRemoveLayerNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Cg", "NodeIcon.Cg");
    return Icon;
}

TSharedPtr<SGraphNode> UCgRemoveLayerNode::CreateVisualWidget()
{
    return SNew(SCgRemoveLayerGraphNodeWidget, this);
}

void UCgRemoveLayerNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, RemoveLayerFromCg);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeRemoveLayerFromCgDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeRemoveLayerFromCgDataStruct->StructType = FRemoveLayerFromCgData::StaticStruct();
    MakeRemoveLayerFromCgDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeRemoveLayerFromCgDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeRemoveLayerFromCgDataStruct, this);
    
    //Input
    MakeRemoveLayerFromCgDataStruct->FindPin(TEXT("CgId"))->DefaultValue = CgId.ToString();
    MakeRemoveLayerFromCgDataStruct->FindPin(TEXT("LayerId"))->DefaultValue = LayerId.ToString();
    MakeRemoveLayerFromCgDataStruct->FindPin(TEXT("RemoveLayerFromCgData"))->MakeLinkTo(CallFunction->FindPin(TEXT("RemoveLayerFromCgData")));

    //Exec pins
    UEdGraphPin* NodeExec = GetExecPin();
    UEdGraphPin* NodeThen = FindPin(UEdGraphSchema_K2::PN_Then);

    UEdGraphPin* InternalExec = CallFunction->GetExecPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeExec, *InternalExec);

    UEdGraphPin* InternalThen = CallFunction->GetThenPin();
    CompilerContext.MovePinLinksToIntermediate(*NodeThen, *InternalThen);

    //After we are done we break all links to this node (not the internally created one)
    BreakAllNodeLinks();
}

bool UCgRemoveLayerNode::IsDiffableProperty(const FName& PropertyName) const
{
    
    return PropertyName == TEXT("CgId")
    || PropertyName == TEXT("LayerId");
}

#undef LOCTEXT_NAMESPACE
