// Copyright (c) 2022 Al_Fe


#include "DialogSceneSwitchCameraNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DialogSceneSwitchCameraGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UDialogSceneSwitchCameraNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UDialogSceneSwitchCameraNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.DialogSceneSwitchCameraNode.Title", "Dialog Scene Switch Camera");
}

FText UDialogSceneSwitchCameraNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.DialogSceneSwitchCameraNode.Tooltip", "This node is used to switch to a specific camera in the currently visible dialog scene!");
}

FLinearColor UDialogSceneSwitchCameraNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->DialogSceneNodeColor;
}

FSlateIcon UDialogSceneSwitchCameraNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.SceneBackground", "NodeIcon.SceneBackground");
    return Icon;
}

TSharedPtr<SGraphNode> UDialogSceneSwitchCameraNode::CreateVisualWidget()
{
    return SNew(SDialogSceneSwitchCameraGraphNodeWidget, this);
}

bool UDialogSceneSwitchCameraNode::ShouldShowNodeProperties() const
{
    return true;
}

void UDialogSceneSwitchCameraNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, SwitchToCamera);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* BlendParamsStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    BlendParamsStruct->StructType = FViewTargetTransitionParams::StaticStruct();
    BlendParamsStruct->bMadeAfterOverridePinRemoval = true;
    BlendParamsStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(BlendParamsStruct, this);
    BlendParamsStruct->FindPin(TEXT("BlendTime"))->DefaultValue = FString::SanitizeFloat(TransitionParams.BlendTime);
    BlendParamsStruct->FindPin(TEXT("BlendFunction"))->DefaultValue = UEnumUtility::EnumToString(TEXT("EViewTargetBlendFunction"), static_cast<uint8>(TransitionParams.BlendFunction));
    BlendParamsStruct->FindPin(TEXT("BlendExp"))->DefaultValue = FString::SanitizeFloat(TransitionParams.BlendExp);

    UK2Node_MakeStruct* MakeSwitchCameraDialogSceneDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeSwitchCameraDialogSceneDataStruct->StructType = FSwitchToCameraData::StaticStruct();
    MakeSwitchCameraDialogSceneDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeSwitchCameraDialogSceneDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeSwitchCameraDialogSceneDataStruct, this);
    
    //Input
    BlendParamsStruct->FindPin(TEXT("ViewTargetTransitionParams"))->MakeLinkTo(MakeSwitchCameraDialogSceneDataStruct->FindPin(TEXT("TransitionParams")));
    MakeSwitchCameraDialogSceneDataStruct->FindPin(TEXT("DialogSceneId"))->DefaultValue = DialogSceneId.ToString();
    MakeSwitchCameraDialogSceneDataStruct->FindPin(TEXT("DialogCameraName"))->DefaultValue = CameraName.ToString();
    MakeSwitchCameraDialogSceneDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    MakeSwitchCameraDialogSceneDataStruct->FindPin(TEXT("SwitchToCameraData"))->MakeLinkTo(CallFunction->FindPin(TEXT("SwitchToCameraData")));
    
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

bool UDialogSceneSwitchCameraNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("DialogSceneId")
    || PropertyName == TEXT("CameraName");
}

#undef LOCTEXT_NAMESPACE
