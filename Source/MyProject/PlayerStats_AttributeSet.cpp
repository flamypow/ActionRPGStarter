// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStats_AttributeSet.h"

UPlayerStats_AttributeSet::UPlayerStats_AttributeSet()
{
}

void UPlayerStats_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, GetMaxMana());
	}
}
