// Fill out your copyright notice in the Description page of Project Settings.


#include "BASE_AttributeSet.h"
#include "GameplayEffectExtension.h"

void UBASE_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
	else if (Attribute == GetSuperMeterAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxSuperMeter());
	}

}

void UBASE_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(GetHealth());
	}
	else if (Data.EvaluatedData.Attribute == GetSuperMeterAttribute())
	{
		SetSuperMeter(GetSuperMeter());
	}
}
