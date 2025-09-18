// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "PlayerStats_AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 *
 */
UCLASS()
class MYPROJECT_API UPlayerStats_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Attributes")
		FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UBASE_AttributeSet, Mana)

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Basic Attributes")
		FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UBASE_AttributeSet, MaxMana)

};
