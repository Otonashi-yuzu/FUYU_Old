// Copyright (c) 2022 Al_Fe


#include "CharacterShowNode.h"



#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CharacterShowGraphNodeWidget.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeArray.h"
#include "K2Node_MakeStruct.h"
#include "KismetCompiler.h"
#include "KismetCompilerMisc.h"
#include "VisualNovelNodeFunctionsLibrary.h"
#include "VNMEditorSettings.h"
#include "VNMSettings.h"


#define LOCTEXT_NAMESPACE "VNM"

void UCharacterShowNode::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();
    const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
    
    // Add exec pins
    check(Pins.Num() == 0);
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Execute);
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, {}, nullptr, UEdGraphSchema_K2::PN_Then);
}

FText UCharacterShowNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("Nodes.CharacterShowNode.Title", "Character Show");
}

FText UCharacterShowNode::GetTooltipText() const
{
    return LOCTEXT("Nodes.CharacterShowNode.Tooltip", "This node is used to show the specified character!");
}

FLinearColor UCharacterShowNode::GetNodeTitleColor() const
{
    return UVNMEditorSettings::GetVNMEditorSettings()->CharacterNodesColor;
}

FSlateIcon UCharacterShowNode::GetIconAndTint(FLinearColor& OutColor) const
{
    OutColor = FLinearColor::White;
    
    static const FSlateIcon Icon = FSlateIcon("VNM", "NodeIcon.Character", "NodeIcon.Character");
    return Icon;
}

TSharedPtr<SGraphNode> UCharacterShowNode::CreateVisualWidget()
{
    return SNew(SCharacterShowGraphNodeWidget, this);
}

bool UCharacterShowNode::ShouldShowNodeProperties() const
{
    return true;
}

void UCharacterShowNode::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);
    
    const FName FunctionName = GET_FUNCTION_NAME_CHECKED(UVisualNovelNodeFunctionsLibrary, ShowCharacter);
    UFunction*BlueprintFunction = UVisualNovelNodeFunctionsLibrary::StaticClass()->FindFunctionByName(FunctionName);

    if (!BlueprintFunction) {
        CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "The function has not been found.").ToString(), this);
        return;
    }

    UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
    CallFunction->SetFromFunction(BlueprintFunction);
    CallFunction->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CallFunction, this);

    UK2Node_MakeStruct* MakeShowCharacterDataStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
    MakeShowCharacterDataStruct->StructType = FShowCharacterData::StaticStruct();
    MakeShowCharacterDataStruct->bMadeAfterOverridePinRemoval = true;
    MakeShowCharacterDataStruct->AllocateDefaultPins();
    CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeShowCharacterDataStruct, this);

    if (Layers.Num() > 0)
    {
        // Construct a literal array so that we have an array to use for the node, as default value cant be directly set to an array
        auto* LayersArray = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
        LayersArray->NumInputs = Layers.Num();
        LayersArray->AllocateDefaultPins();
        CompilerContext.MessageLog.NotifyIntermediateObjectCreation(LayersArray, this);


        for (int32 i = 0; i < Layers.Num(); i++)
        {
            const FImageLayerInfo& Layer = Layers[i];
            UK2Node_MakeStruct* MakeImageLayerInfoStruct = CompilerContext.SpawnIntermediateNode<UK2Node_MakeStruct>(this, SourceGraph);
            MakeImageLayerInfoStruct->StructType = FImageLayerInfo::StaticStruct();
            MakeImageLayerInfoStruct->bMadeAfterOverridePinRemoval = true;
            MakeImageLayerInfoStruct->AllocateDefaultPins();
            CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeImageLayerInfoStruct, this);

            
            MakeImageLayerInfoStruct->FindPin(TEXT("LayerId"))->DefaultValue = Layer.LayerId.ToString();
            MakeImageLayerInfoStruct->FindPin(TEXT("ImageId"))->DefaultValue = Layer.ImageId.ToString();
            LayersArray->Pins[i+1]->PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
            LayersArray->Pins[i+1]->PinType.PinSubCategoryObject = FImageLayerInfo::StaticStruct();
            MakeImageLayerInfoStruct->FindPin(TEXT("ImageLayerInfo"))->MakeLinkTo(LayersArray->Pins[i+1]);
           
        }

        auto* LayersArrayOutputPin = LayersArray->GetOutputPin();
        LayersArrayOutputPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
        LayersArrayOutputPin->PinType.PinSubCategoryObject = FImageLayerInfo::StaticStruct();
        LayersArrayOutputPin->MakeLinkTo(MakeShowCharacterDataStruct->FindPinChecked(TEXT("Layers")));
        LayersArray->PinConnectionListChanged(LayersArrayOutputPin); // this is necessary to make UK2Node_MakeArray coerce the type of the values
    }

    
    //Input
    MakeShowCharacterDataStruct->FindPin(TEXT("CharacterId"))->DefaultValue = CharacterId.ToString();
    MakeShowCharacterDataStruct->FindPin(TEXT("EmotionId"))->DefaultValue = EmotionId.ToString();
    MakeShowCharacterDataStruct->FindPin(TEXT("CharacterPositioning"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ECharacterPositioning"), static_cast<uint8>(CharacterPositioning));
    MakeShowCharacterDataStruct->FindPin(TEXT("CustomCharacterPosition"))->DefaultValue = CustomCharacterPosition.ToString();
    MakeShowCharacterDataStruct->FindPin(TEXT("CharacterFlipState"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ECharacterFlipState"), static_cast<uint8>(CharacterFlipState));
    MakeShowCharacterDataStruct->FindPin(TEXT("TransitionEvent"))->DefaultValue = UEnumUtility::EnumToString(TEXT("ETransitionEvent"), static_cast<uint8>(TransitionEvent));
    MakeShowCharacterDataStruct->FindPin(TEXT("AnimationPlaybackMultiplier"))->DefaultValue = FString::FromInt(AnimationPlaybackMultiplier);
    MakeShowCharacterDataStruct->FindPin(TEXT("ZOrderIndex"))->DefaultValue = FString::FromInt(ZOrderIndex);

    if (TransitionEvent != ETransitionEvent::No_Transition)
    {
        MakeShowCharacterDataStruct->FindPin(TEXT("bDontWaitForTransitionToFinish"))->DefaultValue = bDontWaitForTransitionToFinish ? TEXT("true") : TEXT("false");
    }

    if (TransitionEvent == ETransitionEvent::Custom)
    {
        MakeShowCharacterDataStruct->FindPin(TEXT("CustomTransitionName"))->DefaultValue = CustomTransitionEventName;
    }
    
    MakeShowCharacterDataStruct->FindPin(TEXT("ShowCharacterData"))->MakeLinkTo(CallFunction->FindPin(TEXT("ShowCharacterData")));

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

bool UCharacterShowNode::IsDiffableProperty(const FName& PropertyName) const
{    
    return PropertyName == TEXT("CharacterId")
    || PropertyName == TEXT("EmotionId");
}

TArray<FString> UCharacterShowNode::GetCustomCharacterPositions() const
{
    auto CustomCharacterPositionOptions = UVNMSettings::GetVNMSettings()->GetCustomCharacterPositions();

    TArray<FString> StringPositions;

    for (const auto& CustomCharacterPositionOption : CustomCharacterPositionOptions)
    {
        StringPositions.Add(CustomCharacterPositionOption.ToString());
    }

    return StringPositions;
}

#undef LOCTEXT_NAMESPACE
