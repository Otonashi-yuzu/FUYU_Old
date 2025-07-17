// Copyright (c) 2022 Al_Fe


#include "Character3DShowNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "Character3DShowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCharacter3DShowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacter3DShowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.Character3DShowNode.Title", "Character 3D Show");
}

FText UCharacter3DShowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.Character3DShowNode.Tooltip", "This node is used to show the specified Character3D!");
}

FLinearColor UCharacter3DShowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacter3DShowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacter3DShowNode::CreateVisualWidget()
{
    return SNew(SCharacter3DShowGraphNodeWidget, this);
}

bool UCharacter3DShowNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacter3DShowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowCharacter3D);
    UFunction*BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeShowCharacter3DDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeShowCharacter3DDataStruct->StructType = FShowCharacter3DData::StaticStruct();
    MakeShowCharacter3DDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeShowCharacter3DDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeShowCharacter3DDataStruct, this);

    
    //Input
    MakeShowCharacter3DDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeShowCharacter3DDataStruct->FindPin(TEXT("EmotionId"))->DefaultValue = EmotionId.ToString();
    MakeShowCharacter3DDataStruct->FindPin(TEXT("LocationName"))->DefaultValue = SpawnLocation.ToString();
    MakeShowCharacter3DDataStruct->FindPin(TEXT("ShowCharacter3DData"))->MakeLinkTo(CallFunction->FindPin(TEXT("ShowCharacter3DData")));

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

bool UCharacter3DShowNode::IsDiffableProperty(const FName& PropertyName) const
{
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("EmotionId")
    || PropertyName == TEXT("SpawnLocation")
    || PropertyName == TEXT("DialogSceneId");
}

#undef LOCTEXT_NAMESPACE
