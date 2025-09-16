// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BASE_AttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBASE_AttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
MYPROJECT_API UClass* Z_Construct_UClass_UBASE_AttributeSet();
MYPROJECT_API UClass* Z_Construct_UClass_UBASE_AttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBASE_AttributeSet *******************************************************
void UBASE_AttributeSet::StaticRegisterNativesUBASE_AttributeSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBASE_AttributeSet;
UClass* UBASE_AttributeSet::GetPrivateStaticClass()
{
	using TClass = UBASE_AttributeSet;
	if (!Z_Registration_Info_UClass_UBASE_AttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BASE_AttributeSet"),
			Z_Registration_Info_UClass_UBASE_AttributeSet.InnerSingleton,
			StaticRegisterNativesUBASE_AttributeSet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBASE_AttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UBASE_AttributeSet_NoRegister()
{
	return UBASE_AttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBASE_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideInDetailsView", "" },
		{ "IncludePath", "BASE_AttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BASE_AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "BASE_AttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASE_AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASE_AttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASE_AttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASE_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASE_AttributeSet_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASE_AttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBASE_AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASE_AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASE_AttributeSet_Statics::ClassParams = {
	&UBASE_AttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBASE_AttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBASE_AttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBASE_AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBASE_AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBASE_AttributeSet()
{
	if (!Z_Registration_Info_UClass_UBASE_AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASE_AttributeSet.OuterSingleton, Z_Construct_UClass_UBASE_AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBASE_AttributeSet.OuterSingleton;
}
UBASE_AttributeSet::UBASE_AttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBASE_AttributeSet);
UBASE_AttributeSet::~UBASE_AttributeSet() {}
// ********** End Class UBASE_AttributeSet *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBASE_AttributeSet, UBASE_AttributeSet::StaticClass, TEXT("UBASE_AttributeSet"), &Z_Registration_Info_UClass_UBASE_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASE_AttributeSet), 2743842068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h__Script_MyProject_3780958830(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
