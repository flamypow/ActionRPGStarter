// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BASE_AttributeSet.h"

#ifdef MYPROJECT_BASE_AttributeSet_generated_h
#error "BASE_AttributeSet.generated.h already included, missing '#pragma once' in BASE_AttributeSet.h"
#endif
#define MYPROJECT_BASE_AttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBASE_AttributeSet *******************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UBASE_AttributeSet_NoRegister();

#define FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBASE_AttributeSet(); \
	friend struct Z_Construct_UClass_UBASE_AttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UBASE_AttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UBASE_AttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UBASE_AttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UBASE_AttributeSet)


#define FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBASE_AttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBASE_AttributeSet(UBASE_AttributeSet&&) = delete; \
	UBASE_AttributeSet(const UBASE_AttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASE_AttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASE_AttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASE_AttributeSet) \
	NO_API virtual ~UBASE_AttributeSet();


#define FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h_21_PROLOG
#define FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBASE_AttributeSet;

// ********** End Class UBASE_AttributeSet *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wytch_Documents_ActionRPGStarter_Source_MyProject_BASE_AttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
