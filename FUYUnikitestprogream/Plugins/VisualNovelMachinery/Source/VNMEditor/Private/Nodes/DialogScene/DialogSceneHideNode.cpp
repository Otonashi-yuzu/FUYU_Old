// Copyright (c) 2022 Al_Fe


#include "DialogSceneHideNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogSceneHideGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogSceneHideNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogSceneHideNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogSceneHideNode.Title", "Dialog Scene Hide");
}

FText UDialogSceneHideNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogSceneHideNode.Tooltip", "This node is used to hide a dialog scene!");
}

FLinearColor UDialogSceneHideNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogSceneNodeColor;
}

FSlateIcon UDialogSceneHideNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogSceneHideNode::CreateVisualWidget()
{
    return SNew(SDialogSceneHideGraphNodeWidget, this);
}

bool UDialogSceneHideNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogSceneHideNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, HideDialogScene);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeHideDialogSceneDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeHideDialogSceneDataStruct->StructType = FHideDialogSceneData::StaticStruct();
    MakeHideDialogSceneDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeHideDialogSceneDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeHideDialogSceneDataStruct, this);
    
    //Input
    MakeHideDialogSceneDataStruct->FindPin(TEXT("DialogSceneId"))->DefaultValue = DialogSceneId.ToString();
    MakeHideDialogSceneDataStruct->FindPin(TEXT("HideDialogSceneData"))->MakeLinkTo(CallFunction->FindPin(TEXT("HideDialogSceneData")));
    
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

bool UDialogSceneHideNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("DialogSceneId");
}

#undef LOCTEXT_NAMESPACE
