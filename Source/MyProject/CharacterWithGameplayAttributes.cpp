// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterWithGameplayAttributes.h"
#include "BASE_AttributeSet.h"

// Sets default values
ACharacterWithGameplayAttributes::ACharacterWithGameplayAttributes()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	BASEAttributeSet = CreateDefaultSubobject<UBASE_AttributeSet>(TEXT("BaseAttributeSet"));
	
}

UAbilitySystemComponent* ACharacterWithGameplayAttributes::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ACharacterWithGameplayAttributes::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsValid(AbilitySystemComponent))
	{
		// Get the UMyAttributeSet from our Ability System Component. The Ability System Component will create and register one if needed.
		//BASEAttributeSet = AbilitySystemComponent->GetSet<UBASE_AttributeSet>();

		// We now have a pointer to the new UMyAttributeSet that we can use later. If it has an initialization function, this is a good place to call it.
	}
}

// Called every frame
void ACharacterWithGameplayAttributes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterWithGameplayAttributes::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

