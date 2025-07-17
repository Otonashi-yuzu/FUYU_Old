// Copyright (c) 2022 Al_Fe


#include "DialogSceneShowNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogSceneShowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogSceneShowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogSceneShowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogSceneShowNode.Title", "Dialog Scene Show");
}

FText UDialogSceneShowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogSceneShowNode.Tooltip", "This node is used to show a dialog scene!");
}

FLinearColor UDialogSceneShowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogSceneNodeColor;
}

FSlateIcon UDialogSceneShowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogSceneShowNode::CreateVisualWidget()
{
    return SNew(SDialogSceneShowGraphNodeWidget, this);
}

bool UDialogSceneShowNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogSceneShowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowDialogScene);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeShowDialogSceneDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeShowDialogSceneDataStruct->StructType = FShowDialogSceneData::StaticStruct();
    MakeShowDialogSceneDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeShowDialogSceneDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeShowDialogSceneDataStruct, this);
    
    //Input
    MakeShowDialogSceneDataStruct->FindPin(TEXT("DialogSceneId"))->DefaultValue = DialogSceneId.ToString();
    MakeShowDialogSceneDataStruct->FindPin(TEXT("DialogCameraName"))->DefaultValue = CameraName.ToString();
    MakeShowDialogSceneDataStruct->FindPin(TEXT("ShowDialogSceneData"))->MakeLinkTo(CallFunction->FindPin(TEXT("ShowDialogSceneData")));
    
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

bool UDialogSceneShowNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("DialogSceneId")
    || PropertyName == TEXT("CameraName");
}

#undef LOCTEXT_NAMESPACE
