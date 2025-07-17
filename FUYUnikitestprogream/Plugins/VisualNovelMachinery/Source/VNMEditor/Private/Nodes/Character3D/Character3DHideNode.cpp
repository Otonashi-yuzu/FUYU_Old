// Copyright (c) 2022 Al_Fe


#include "Character3DHideNode.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "Character3DHideGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"

#define LOCTEXT_NAMESPACE "VNM"

void UCharacter3DHideNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacter3DHideNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.Character3DHideNode.Title", "Character 3D Hide");
}

FText UCharacter3DHideNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.Character3DHideNode.Tooltip", "This node is used to hide the selected Character 3D if displayed."
        "If none is specified, it will hide the last one that was added to teh screen!");
}

FLinearColor UCharacter3DHideNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacter3DHideNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacter3DHideNode::CreateVisualWidget()
{
    return SNew(SCharacter3DHideGraphNodeWidget, this);
}

bool UCharacter3DHideNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacter3DHideNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, HideCharacter3D);
    UFunction* BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);
    
    UK2Node_MakeStruct* MakeHideCharacter3DDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeHideCharacter3DDataStruct->StructType = FHideCharacter3DData::StaticStruct();
    MakeHideCharacter3DDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeHideCharacter3DDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeHideCharacter3DDataStruct, this);
    
    //Input
    MakeHideCharacter3DDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeHideCharacter3DDataStruct->FindPin(TEXT("HideCharacter3DData"))->MakeLinkTo(CallFunction->FindPin(TEXT("HideCharacter3DData")));

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

bool UCharacter3DHideNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CharacterId");
}

#undef LOCTEXT_NAMESPACE
