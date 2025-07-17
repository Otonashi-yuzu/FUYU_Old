// Copyright (c) 2022 Al_Fe


#include "SceneBackgroundRemoveLayerNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "SceneBackgroundRemoveLayerGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void USceneBackgroundRemoveLayerNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText USceneBackgroundRemoveLayerNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.SceneBackgroundRemoveLayerNode.Title", "SceneBackground Remove Layer");
}

FText USceneBackgroundRemoveLayerNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.SceneBackgroundRemoveLayerNode.Tooltip", "This node is used to remove an image layer from the specified SceneBackground!");
}

FLinearColor USceneBackgroundRemoveLayerNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->SceneBackgroundNodeColor;
}

FSlateIcon USceneBackgroundRemoveLayerNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> USceneBackgroundRemoveLayerNode::CreateVisualWidget()
{
    return SNew(SSceneBackgroundRemoveLayerGraphNodeWidget, this);
}

void USceneBackgroundRemoveLayerNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, RemoveLayerFromSceneBackground);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeRemoveLayerFromSceneBackgroundDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeRemoveLayerFromSceneBackgroundDataStruct->StructType = FRemoveLayerFromSceneBackgroundData::StaticStruct();
    MakeRemoveLayerFromSceneBackgroundDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeRemoveLayerFromSceneBackgroundDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeRemoveLayerFromSceneBackgroundDataStruct, this);
    
    //Input
    MakeRemoveLayerFromSceneBackgroundDataStruct->FindPin(TEXT("SceneBackgroundId"))->DefaultValue = SceneBackgroundId.ToString();
    MakeRemoveLayerFromSceneBackgroundDataStruct->FindPin(TEXT("LayerId"))->DefaultValue = LayerId.ToString();
    MakeRemoveLayerFromSceneBackgroundDataStruct->FindPin(TEXT("RemoveLayerFromSceneBackgroundData"))->MakeLinkTo(CallFunction->FindPin(TEXT("RemoveLayerFromSceneBackgroundData")));

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

bool USceneBackgroundRemoveLayerNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("SceneBackgroundId")
    || PropertyName == TEXT("LayerId");
}

#undef LOCTEXT_NAMESPACE
