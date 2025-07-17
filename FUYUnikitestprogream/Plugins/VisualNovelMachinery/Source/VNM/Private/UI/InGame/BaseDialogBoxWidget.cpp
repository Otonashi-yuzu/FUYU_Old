// Copyright (c) 2022 Al_Fe


#include "BaseDialogBoxWidget.h"

#include "CharacterControllerComponent.h"
#include "GameSaveSubsystem.h"
#include "VNMSettings.h"
#include "TimerManager.h"
#include "VNMGeneralUtils.h"
#include "Components/EditableTextBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Internationalization/Regex.h"
#include "Engine/GameInstance.h"

void UBaseDialogBoxWidget::SetTextAlignment(const TEnumAsByte<ETextJustify::Type> TextJustification)
{
    DialogText->SetJustification(TextJustification);
}

void UBaseDialogBoxWidget::SetCharacterNameAlignment(const TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
    Cast<UHorizontalBoxSlot>(CharacterNameText->Slot)->SetHorizontalAlignment(InHorizontalAlignment);
}

void UBaseDialogBoxWidget::SetDialogId(const FName& DialogId)
{
    ActiveDialogDefinition = UVNMSettings::GetVNMSettings()->GetDialogDefinitionById(DialogId);
    
    if (ActiveDialogDefinition.IsValid() && !ActiveDialogDefinition.DialogBackgroundOverride.IsDefault())
    {            
        OverrideDialogBoxBackground(ActiveDialogDefinition.DialogBackgroundOverride);
    }
    else
    {
        ResetDialogBoxBackground();
    }
}

void UBaseDialogBoxWidget::SetDialogText(const FText& InDialogText, const bool bDontTypewrite, const float InTypeWritingSpeedMultiplier)
{
    FText DialogTextToUse = ReplaceCharacterIdsWithCharacterNames(InDialogText);
    
    if (!bTypewriterEffectActive || bDontTypewrite)
    {
        DialogText->SetText(DialogTextToUse);
    }
    else
    {
        NativeOnBeginTypewritingEffect();
        DialogText->SetText(FText::FromString(TEXT("")));
        DialogTextValueToSet = DialogTextToUse;
        TypeWriteIndex = 0;
        TypeWritingSpeedMultiplier = InTypeWritingSpeedMultiplier;
        GetWorld()->GetTimerManager().SetTimer(TypeWritingTimerHandle,this, &UBaseDialogBoxWidget::OnTypeWriterEffectTick, TypeWritingSpeed*TypeWritingSpeedMultiplier, true, 0.f);
    }
}

void UBaseDialogBoxWidget::SetCharacterNameById(const FName& InCharacterId)
{
    const FCharacterDefinition CharacterDefinition = UVNMSettings::GetVNMSettings()->GetCharacterDefinitionById(InCharacterId);

    if (CharacterDefinition.IsValid())
    {
        ActiveTalkingCharacterId = InCharacterId;
        auto* CharacterComponent = UVNMGeneralUtils::GetCharacterControllerComponent(this);
        
        if (CharacterComponent)
        {
            CharacterNameText->SetText(CharacterComponent->GetCharacterNameByDefinition(CharacterDefinition));
        }
        else
        {
            CharacterNameText->SetText(CharacterDefinition.CharacterDisplayName);
        }
        CharacterNameText->SetDefaultColorAndOpacity(CharacterDefinition.CharacterDisplayColor);
        if (!CharacterDefinition.DialogBackgroundOverride.IsDefault())
        {
            OverrideDialogBoxBackground(CharacterDefinition.DialogBackgroundOverride);
        }
        else if (ActiveDialogDefinition.IsValid() && !ActiveDialogDefinition.DialogBackgroundOverride.IsDefault())
        {            
            OverrideDialogBoxBackground(ActiveDialogDefinition.DialogBackgroundOverride);
        }
        else
        {
            ResetDialogBoxBackground();
        }
    }
    else
    {
        ActiveTalkingCharacterId = "";
        CharacterNameText->SetText(FText::FromString(""));
        CharacterNameText->SetDefaultColorAndOpacity(FLinearColor::White);
        if (ActiveDialogDefinition.IsValid() && !ActiveDialogDefinition.DialogBackgroundOverride.IsDefault())
        {            
            OverrideDialogBoxBackground(ActiveDialogDefinition.DialogBackgroundOverride);
        }
        else
        {
            ResetDialogBoxBackground();
        }
    }
}

void UBaseDialogBoxWidget::SetCharacterNameByText(const FText& InCharacterName)
{
    CharacterNameText->SetText(InCharacterName);
    CharacterNameText->SetDefaultColorAndOpacity(FLinearColor::White);
    ResetDialogBoxBackground();
}

void UBaseDialogBoxWidget::OverrideDialogBoxBackground(const FImageDefinition& ImageDefinition)
{
    DialogBoxBackground->Brush.SetImageSize(ImageDefinition.ImageSize);
    DialogBoxBackground->SetColorAndOpacity(ImageDefinition.ColorAndOpacity);
    DialogBoxBackground->Brush.SetResourceObject(ImageDefinition.Image.LoadSynchronous());
}

void UBaseDialogBoxWidget::ResetDialogBoxBackground()
{
    DialogBoxBackground->Brush.SetImageSize(DefaultDialogBoxImageDefinition.ImageSize);
    DialogBoxBackground->Brush.SetResourceObject(DefaultDialogBoxImageDefinition.Image.LoadSynchronous());
    DialogBoxBackground->SetColorAndOpacity(DefaultDialogBoxImageDefinition.ColorAndOpacity);
}

void UBaseDialogBoxWidget::StartGatheringInputFromUser(const FText& InputGatheringText)
{
    SetDialogText(FText::GetEmpty(), false, 1.f);
    SetCharacterNameByText(InputGatheringText);
    DialogTextBox->OnTextCommitted.AddUniqueDynamic(this, &UBaseDialogBoxWidget::OnDialogTextBoxTextCommitted);
    DialogTextBox->SetVisibility(ESlateVisibility::Visible);
    DialogTextBox->SetKeyboardFocus();
}

void UBaseDialogBoxWidget::CancelTypeWriting()
{
    GetWorld()->GetTimerManager().ClearTimer(TypeWritingTimerHandle);

    const FString DialogTextOriginal = DialogTextValueToSet.ToString();
    FString FilteredText;
    const FRegexPattern PauseTagPattern(TEXT("\\<(pause) \\d+.?\\d*\\>"));
    FRegexMatcher Matcher(PauseTagPattern, DialogTextOriginal);

    int32 LastFoundEndIndex = 0;
    while (Matcher.FindNext())
    {
        const int32 b = Matcher.GetMatchBeginning();
        const int32 e = Matcher.GetMatchEnding();
        FilteredText.Append(DialogTextOriginal.Mid(LastFoundEndIndex, b-LastFoundEndIndex));
        LastFoundEndIndex = e;
    }

    FilteredText.Append(DialogTextOriginal.Right(DialogTextOriginal.Len()-LastFoundEndIndex));
    
    DialogText->SetText(FText::FromString(FilteredText));
    bCurrentlyInBetweenTags = false;
    NativeOnEndTypewritingEffect();
    OnDialogTextBoxTypeWritingEnd.Broadcast();
}

FText UBaseDialogBoxWidget::GetDialogText() const
{
    return DialogText->GetText();
}

FName UBaseDialogBoxWidget::GetActiveTalkingCharacterId() const
{
    return ActiveTalkingCharacterId;
}

void UBaseDialogBoxWidget::NativePreConstruct()
{
    Super::NativePreConstruct();

    DefaultDialogBoxImageDefinition.Image = DialogBoxBackground->Brush.GetResourceObject();
    DefaultDialogBoxImageDefinition.ColorAndOpacity = DialogBoxBackground->ColorAndOpacity;
    DefaultDialogBoxImageDefinition.ImageSize = DialogBoxBackground->Brush.GetImageSize();
}

void UBaseDialogBoxWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    
    auto* Settings = UVNMSettings::GetVNMSettings();

    bTypewriterEffectActive = Settings->Settings.bTypewriterEffectActive;
    TypeWritingSpeed = Settings->Settings.TypeWritingSpeed;
}

void UBaseDialogBoxWidget::OnTransitionExitFinished()
{
    DialogText->SetText(FText::FromString(""));
    CharacterNameText->SetText(FText::FromString(""));
    Super::OnTransitionExitFinished();
}

void UBaseDialogBoxWidget::OnTransitionAnimationFinished()
{
    DialogText->SetText(FText::FromString(""));
    CharacterNameText->SetText(FText::FromString(""));
    
    Super::OnTransitionAnimationFinished();

}

void UBaseDialogBoxWidget::OnDialogTextBoxTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    if (CommitMethod == ETextCommit::OnUserMovedFocus)
    {
        return;
    }
    
    DialogTextBox->OnTextCommitted.RemoveDynamic(this, &UBaseDialogBoxWidget::OnDialogTextBoxTextCommitted);

    DialogTextBox->SetVisibility(ESlateVisibility::Collapsed);

    OnDialogTextBoxTextCommittedEvent.Broadcast(Text);

    DialogTextBox->SetText(FText::GetEmpty());
}

void UBaseDialogBoxWidget::NativeOnBeginTypewritingEffect()
{
    BP_OnBeginTypewritingEffect();
}

void UBaseDialogBoxWidget::NativeOnEndTypewritingEffect()
{
    BP_OnEndTypewritingEffect();
}

void UBaseDialogBoxWidget::OnTypeWriterEffectTick()
{    
    const FString DialogTextAsString = DialogTextValueToSet.ToString();

    if (TypeWriteIndex >= DialogTextAsString.Len())
    {
        bCurrentlyInBetweenTags = false;
        GetWorld()->GetTimerManager().ClearTimer(TypeWritingTimerHandle);
        DialogText->SetText(DialogTextValueToSet);
        NativeOnEndTypewritingEffect();
        OnDialogTextBoxTypeWritingEnd.Broadcast();
        return;
    }

    FString CutString = DialogTextAsString.Left(TypeWriteIndex);
    
    if (DialogTextAsString[TypeWriteIndex] == TCHAR('<'))
    {
        if (DialogTextAsString[TypeWriteIndex+1] == TCHAR('/'))
        {
            TypeWriteIndex += 3;
            CutString = DialogTextAsString.Left(TypeWriteIndex);
            bCurrentlyInBetweenTags = false;
        }
        else
        {
            int32 FoundIndex;
            FString RightSide = DialogTextAsString.Right(DialogTextAsString.Len()-TypeWriteIndex);
            RightSide.FindChar(TCHAR('>'), FoundIndex);

            if (FoundIndex != INDEX_NONE)
            {
                const FString TagWithBrackets = DialogTextAsString.Mid(TypeWriteIndex, FoundIndex+1);
                const FString Tag = TagWithBrackets.Mid(1, TagWithBrackets.Len()-2);
                if (Tag.Contains(TEXT("pause")))
                {
                    FString Left, Right;
                    Tag.Split(TEXT(" "), &Left, &Right);

                    const float Delay = FCString::Atof(*Right);
                    //TypeWriteIndex -= 1;
                    FString FilteredString = DialogTextAsString.Left(TypeWriteIndex);
                    const FString Remainder = DialogTextAsString.Right(DialogTextAsString.Len()-(TypeWriteIndex+FoundIndex+1));
                    FilteredString.Append(Remainder);
                    DialogTextValueToSet = FText::FromString(FilteredString);
                    GetWorld()->GetTimerManager().SetTimer(TypeWritingTimerHandle,this, &UBaseDialogBoxWidget::OnTypeWriterEffectTick, TypeWritingSpeed*TypeWritingSpeedMultiplier, true, FMath::Max(0.f, Delay-TypeWritingSpeed));
                }
                else if (DialogTextAsString[TypeWriteIndex + FoundIndex] != TCHAR('/'))
                {                   
                    bCurrentlyInBetweenTags = DialogTextAsString[TypeWriteIndex + FoundIndex - 1] != TCHAR('/');
                    TypeWriteIndex += FoundIndex + 1;
                    CutString = DialogTextAsString.Left(TypeWriteIndex);
                }  
            }

            
        }      
    }

    if (bCurrentlyInBetweenTags)
    {
        CutString.Append(TEXT("</>"));
    }
    
    DialogText->SetText(FText::FromString(CutString));
    TypeWriteIndex++;
}

FText UBaseDialogBoxWidget::ReplaceCharacterIdsWithCharacterNames(const FText& InDialogText)
{
    if (InDialogText.IsEmpty())
    {
        return InDialogText;
    }

    // gather character ids

    TArray<FString> CharacterIds;
    FString DialogString = InDialogText.ToString();

    TArray<FString> DialogWords;
    DialogString.ParseIntoArrayWS(DialogWords);

    for (const auto& Word : DialogWords)
    {
        if (Word.StartsWith(TEXT("$c$")))
        {
            FString CharacterId = Word.Mid(3, Word.Len() - 4);

            while (!FChar::IsAlnum(CharacterId[CharacterId.Len()-1]))
            {
                CharacterId.MidInline(0, CharacterId.Len()-1);
            }
            CharacterIds.Add(CharacterId);
        }
    }

    if (CharacterIds.Num() == 0)
    {
        return InDialogText;
    }

    
    auto* Settings = UVNMSettings::GetVNMSettings();

    auto CharacterDefinitionMap = Settings->GetCharacterDefinitionMap();
    auto* CharacterComponent = UVNMGeneralUtils::GetCharacterControllerComponent(this);
    
    for (const auto& CharacterId : CharacterIds)
    {
        FString CharacterName;
        FCharacterDefinition CharacterDefinition = CharacterDefinitionMap[*CharacterId];
        
        if (CharacterComponent)
        {
            CharacterName = CharacterComponent->GetCharacterNameByDefinition(CharacterDefinition).ToString();
        }
        else
        {
            CharacterName = CharacterDefinition.CharacterDisplayName.ToString();
        }
        
        DialogString.ReplaceInline(*FString::Printf(TEXT("$c$%s$"), *CharacterId), *CharacterName);
    }

    return FText::FromString(DialogString);
}
