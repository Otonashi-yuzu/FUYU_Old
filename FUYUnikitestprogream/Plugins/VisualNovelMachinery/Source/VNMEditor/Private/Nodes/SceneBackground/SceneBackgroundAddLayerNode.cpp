// Copyright (c) 2022 Al_Fe


#include "SceneBackgroundAddLayerNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "SceneBackgroundAddLayerGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void USceneBackgroundAddLayerNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText USceneBackgroundAddLayerNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.SceneBackgroundAddLayerNode.Title", "SceneBackground Add Layer");
}

FText USceneBackgroundAddLayerNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.SceneBackgroundAddLayerNode.Tooltip", "This node is used to add an image layer to the specified SceneBackground!");
}

FLinearColor USceneBackgroundAddLayerNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->SceneBackgroundNodeColor;
}

FSlateIcon USceneBackgroundAddLayerNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> USceneBackgroundAddLayerNode::CreateVisualWidget()
{
    return SNew(SSceneBackgroundAddLayerGraphNodeWidget, this);
}

void USceneBackgroundAddLayerNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, AddLayerToSceneBackground);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeAddLayerToSceneBackgroundDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeAddLayerToSceneBackgroundDataStruct->StructType = FAddLayerToSceneBackgroundData::StaticStruct();
    MakeAddLayerToSceneBackgroundDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeAddLayerToSceneBackgroundDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeAddLayerToSceneBackgroundDataStruct, this);
    
    //Input
    MakeAddLayerToSceneBackgroundDataStruct->FindPin(TEXT("SceneBackgroundId"))->DefaultValue = SceneBackgroundId.ToString();
    MakeAddLayerToSceneBackgroundDataStruct->FindPin(TEXT("LayerId"))->DefaultValue = LayerId.ToString();
    MakeAddLayerToSceneBackgroundDataStruct->FindPin(TEXT("ImageId"))->DefaultValue = ImageId.ToString();
    MakeAddLayerToSceneBackgroundDataStruct->FindPin(TEXT("AddLayerToSceneBackgroundData"))->MakeLinkTo(CallFunction->FindPin(TEXT("AddLayerToSceneBackgroundData")));


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

bool USceneBackgroundAddLayerNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("SceneBackgroundId")
    || PropertyName == TEXT("LayerId")
    || PropertyName == TEXT("ImageId");
}

#undef LOCTEXT_NAMESPACE
