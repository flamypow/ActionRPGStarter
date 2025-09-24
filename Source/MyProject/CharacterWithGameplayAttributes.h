// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "CharacterWithGameplayAttributes.generated.h"


UCLASS()
class MYPROJECT_API ACharacterWithGameplayAttributes : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterWithGameplayAttributes();

	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	/*virtual class UBASE_AttributeSet* GetBASEAttributeSet() const;

	virtual class UPlayerStats_AttributeSet* GetPlayerStatsAttributeSet() const;

	virtual class UPlayerActionValue_AttributeSet* GetPlayerActionValueAttributeSet() const;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "GASAbilitys", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GASAttributes", meta = (AllowPrivateAccess = "true"))
	const class UBASE_AttributeSet* BASEAttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GASAttributes", meta = (AllowPrivateAccess = "true"))
	const class UPlayerStats_AttributeSet* PlayerStatsAttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GASAttributes", meta = (AllowPrivateAccess = "true"))
	const class UPlayerActionValues_AttributeSet* PlayerActionValuesAttributeSet;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
