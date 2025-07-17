// Copyright (c) 2022 Al_Fe


#include "VNMBaseNode.h"


#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "DiffResults.h"
#include "VNMEditorModule.h"

FText UVNMBaseNode::GetMenuCategory() const
{
    return VNMMenuCategory();
}

void UVNMBaseNode::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
    Super::GetMenuActions(ActionRegistrar);

    UClass* Action = GetClass();

    if (ActionRegistrar.IsOpenForRegistration(Action)) {
        UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create(GetClass());
        check(Spawner != nullptr);

        ActionRegistrar.AddBlueprintAction(Action, Spawner);
    }
}

void UVNMBaseNode::DiffProperties(UStruct* StructA, UStruct* StructB, uint8* DataA, uint8* DataB, FDiffResults& Results, FDiffSingleResult& Diff) const
{
    // Run through all the properties in the first struct
    for (TFieldIterator<FProperty> PropertyIt(StructA, EFieldIteratorFlags::IncludeSuper); PropertyIt; ++PropertyIt)
    {
        FProperty* Prop = *PropertyIt;
        FProperty* PropB = StructB->FindPropertyByName(Prop->GetFName());

        if (!PropB || Prop->GetClass() != PropB->GetClass())
        {
            // Skip if properties don't match
            continue;
        }

        // skip properties we cant see
        if ((!Prop->HasAnyPropertyFlags(CPF_Edit | CPF_BlueprintVisible) && !IsDiffableProperty(Prop->GetFName())) ||
            Prop->HasAnyPropertyFlags(CPF_Transient) ||
            Prop->HasAnyPropertyFlags(CPF_DisableEditOnInstance) ||
            Prop->IsA(FDelegateProperty::StaticClass()) ||
            Prop->IsA(FMulticastDelegateProperty::StaticClass()))
        {
            continue;
        }

        const FString ValueStringA = GetPropertyNameAndValueForDiff(Prop, Prop->ContainerPtrToValuePtr<uint8>(DataA));
        const FString ValueStringB = GetPropertyNameAndValueForDiff(PropB, PropB->ContainerPtrToValuePtr<uint8>(DataB));

        if (ValueStringA != ValueStringB)
        {
            // Only bother setting up the display data if we're storing the result
            if (Results.CanStoreResults())
            {
                Diff.DisplayString = FText::Format(NSLOCTEXT("EdGraph", "DIF_NodePropertyFmt", "Property Changed: {0} "), FText::FromString(Prop->GetName()));
            }
            Results.Add(Diff);
        }
    }
}

bool UVNMBaseNode::IsDiffableProperty(const FName& PropertyName) const
{
    return false;
}
