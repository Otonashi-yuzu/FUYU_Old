// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/RichTextBlockColorDecorator.h"

class FRichInlineTextColor : public FRichTextDecorator
{
public:
	FRichInlineTextColor(URichTextBlock* InOwner)
		: FRichTextDecorator(InOwner)
	{
	}
	
	virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override
	{
		if (RunParseResult.Name == TEXT("color") && (RunParseResult.MetaData.Contains(TEXT("name")) || RunParseResult.MetaData.Contains(TEXT("value"))))
		{
			return true;
		}

		return false;
	}
protected:
	virtual void CreateDecoratorText(const FTextRunInfo& RunInfo, FTextBlockStyle& InOutTextStyle, FString& InOutString) const override
	{
		if (RunInfo.MetaData.Contains(TEXT("name")))
		{
			const FString Name = RunInfo.MetaData[TEXT("name")];
			if (Name == TEXT("White"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::White;
			}
			else if (Name == TEXT("Gray"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Gray;
			}
			else if (Name == TEXT("Transparent"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Transparent;
			}
			else if (Name == TEXT("Red"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Red;
			}
			else if (Name == TEXT("Green"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Green;
			}
			else if (Name == TEXT("Blue"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Blue;
			}
			else if (Name == TEXT("Yellow"))
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Yellow;
			}
			else
			{
				InOutTextStyle.ColorAndOpacity = FLinearColor::Black;
			}
		}
		else if (RunInfo.MetaData.Contains(TEXT("value")))
		{
			const FString Value = RunInfo.MetaData[TEXT("value")];
			InOutTextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(Value));
		}

		InOutString += RunInfo.Content.ToString();
	}		
};

TSharedPtr<ITextDecorator> URichTextBlockColorDecorator::CreateDecorator(URichTextBlock* InOwner)
{
	return MakeShareable(new FRichInlineTextColor(InOwner));
}