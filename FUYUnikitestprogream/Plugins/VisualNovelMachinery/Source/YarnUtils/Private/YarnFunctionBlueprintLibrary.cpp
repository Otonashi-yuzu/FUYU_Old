// Fill out your copyright notice in the Description page of Project Settings.


#include "YarnFunctionBlueprintLibrary.h"

float UYarnFunctionBlueprintLibrary::random()
{
	return FMath::RandRange(0.f, 1.f);
}

float UYarnFunctionBlueprintLibrary::random_range(const float a, const float b)
{
	return FMath::RandRange(a, b);
}

float UYarnFunctionBlueprintLibrary::dice(const float sides)
{
	return FMath::RandRange(1.f, sides);
}

float UYarnFunctionBlueprintLibrary::round(const float n)
{
	return FMath::RoundToInt(n);
}

float UYarnFunctionBlueprintLibrary::round_places(const float n, const float places)
{
	return FMath::RoundToInt(n);
}

float UYarnFunctionBlueprintLibrary::floor(const float n)
{
	return FMath::Floor(n);
}

float UYarnFunctionBlueprintLibrary::ceil(const float n)
{
	return FMath::CeilToInt(n);
}

float UYarnFunctionBlueprintLibrary::inc(const float n)
{
	if (FMath::Frac(n) > 0)
	{
		return ceil(n);
	}

	return n+1.f;
}

float UYarnFunctionBlueprintLibrary::dec(const float n)
{
	if (FMath::Frac(n) > 0)
	{
		return floor(n);
	}

	return n-1.f;
}

float UYarnFunctionBlueprintLibrary::decimal(const float n)
{
	return FMath::Fractional(n);
}

float UYarnFunctionBlueprintLibrary::integer(const float n)
{
	return FMath::RoundToZero(n);
}
