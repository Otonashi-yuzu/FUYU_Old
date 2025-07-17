// Copyright (c) 2022 Al_Fe


#include "EnumUtility.h"
#include "UObject/Package.h"

FString UEnumUtility::EnumToString(const TCHAR* Enum, int32 EnumValue)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, Enum, true);
	if (!EnumPtr)
		return TEXT("INVALID_ENUM_NAME");

	return EnumPtr->GetNameStringByIndex(EnumValue);
}

FText UEnumUtility::EnumToDisplayString(const TCHAR* Enum, int32 EnumValue)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, Enum, true);
	if (!EnumPtr)
		return NSLOCTEXT("Invalid", "Invalid", "Invalid");

	return EnumPtr->GetDisplayNameTextByIndex(EnumValue);
}
