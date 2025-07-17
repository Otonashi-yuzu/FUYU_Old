// Copyright (c) 2022 Al_Fe

#include "DialogObjectFactory.h"


#include "ClassViewerFilter.h"
#include "DialogBlueprint.h"
#include "DialogBlueprintGeneratedClass.h"
#include "DialogObject.h"
#include "DialogStartNode.h"
#include "Kismet2/KismetEditorUtilities.h"


#define LOCTEXT_NAMESPACE "UDialogBlueprintFactory"

class FDialogObjectClassFilter : public IClassViewerFilter
{
public:
    /** All children of these classes will be included unless filtered out by another setting. */
    TSet <const UClass*> AllowedChildrenOfClasses;

    /** Disallowed class flags. */
    EClassFlags DisallowedClassFlags;

    virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
    {
        return !InClass->HasAnyClassFlags(DisallowedClassFlags)
            && InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
    }
	
    virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
    {
        return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
            && InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
    }

};

UDialogObjectFactory::UDialogObjectFactory(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    SupportedClass = UDialogBlueprint::StaticClass();
    ParentClass = UDialogObject::StaticClass();

    bCreateNew = true;
    bEditAfterNew = true;
}

bool UDialogObjectFactory::ShouldShowInNewMenu() const
{
    return true;
}

UObject* UDialogObjectFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
    UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
    // Make sure we are trying to factory a Anim Blueprint, then create and init one
    check(Class->IsChildOf(UDialogBlueprint::StaticClass()));

    // If they selected an interface, force the parent class to be UInterface
    if (BlueprintType == BPTYPE_Interface)
    {
        ParentClass = UInterface::StaticClass();
    }

    if ( ( ParentClass == NULL ) || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass) || !ParentClass->IsChildOf(UDialogObject::StaticClass()) )
    {
        FFormatNamedArguments Args;
        Args.Add( TEXT("ClassName"), ParentClass ? FText::FromString( ParentClass->GetName() ) : LOCTEXT("Null", "(null)") );
        FMessageDialog::Open( EAppMsgType::Ok, FText::Format( LOCTEXT("CannotCreateDialogBlueprint", "Cannot create a Dialogue Blueprint based on the class '{ClassName}'."), Args ) );
        return nullptr;
    }
    else
    {

        UDialogBlueprint* NewBP = CastChecked<UDialogBlueprint>(FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BlueprintType, UDialogBlueprint::StaticClass(), UDialogBlueprintGeneratedClass::StaticClass(), CallingContext));

        if (NewBP)
        {
            auto* ParentGraph = NewBP->GetLastEditedUberGraph();
            auto* DialogStartNode = NewObject<UDialogStartNode>(ParentGraph);
            DialogStartNode->SetFlags(RF_Transactional);
            DialogStartNode->CreateNewGuid();
            DialogStartNode->PostPlacedNewNode();
            DialogStartNode->AllocateDefaultPins();
            DialogStartNode->NodePosX = 0;
            DialogStartNode->NodePosY = 0;
            DialogStartNode->bCommentBubblePinned = true;
            DialogStartNode->bCommentBubbleVisible = true;
            UEdGraphSchema_K2::SetNodeMetaData(DialogStartNode, FNodeMetadata::DefaultGraphNode);
            DialogStartNode->MakeAutomaticallyPlacedGhostNode();

            ParentGraph->AddNode(DialogStartNode);
        }
        
        return NewBP;
    }
}

UObject* UDialogObjectFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(InClass, InParent, InName, Flags, Context, Warn, NAME_None);
}

#undef LOCTEXT_NAMESPACE