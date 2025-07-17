// Copyright (c) 2022 Al_Fe


#include "CgAddLayerNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CgAddLayerGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCgAddLayerNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCgAddLayerNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CgAddLayerNode.Title", "Cg Add Layer");
}

FText UCgAddLayerNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CgAddLayerNode.Tooltip", "This node is used to add an image layer to the specified Cg!");
}

FLinearColor UCgAddLayerNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CgNodeColor;
}

FSlateIcon UCgAddLayerNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Cg", "NodeIcon.Cg");
    return Icon;
}

TSharedPtr<SGraphNode> UCgAddLayerNode::CreateVisualWidget()
{
    return SNew(SCgAddLayerGraphNodeWidget, this);
}

void UCgAddLayerNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, AddLayerToCg);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeAddLayerToCgDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeAddLayerToCgDataStruct->StructType = FAddLayerToCgData::StaticStruct();
    MakeAddLayerToCgDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeAddLayerToCgDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeAddLayerToCgDataStruct, this);
    
    //Input
    MakeAddLayerToCgDataStruct->FindPin(TEXT("CgId"))->DefaultValue = CgId.ToString();
    MakeAddLayerToCgDataStruct->FindPin(TEXT("LayerId"))->DefaultValue = LayerId.ToString();
    MakeAddLayerToCgDataStruct->FindPin(TEXT("ImageId"))->DefaultValue = ImageId.ToString();
    MakeAddLayerToCgDataStruct->FindPin(TEXT("AddLayerToCgData"))->MakeLinkTo(CallFunction->FindPin(TEXT("AddLayerToCgData")));

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

bool UCgAddLayerNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CgId")
    || PropertyName == TEXT("LayerId")
    || PropertyName == TEXT("ImageId");
}

#undef LOCTEXT_NAMESPACE
