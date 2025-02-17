// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestingProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTINGPROJECT_TestingProjectCharacter_generated_h
#error "TestingProjectCharacter.generated.h already included, missing '#pragma once' in TestingProjectCharacter.h"
#endif
#define TESTINGPROJECT_TestingProjectCharacter_generated_h

#define FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestingProjectCharacter(); \
	friend struct Z_Construct_UClass_ATestingProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestingProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingProject"), NO_API) \
	DECLARE_SERIALIZER(ATestingProjectCharacter)


#define FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestingProjectCharacter(ATestingProjectCharacter&&); \
	ATestingProjectCharacter(const ATestingProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestingProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestingProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestingProjectCharacter) \
	NO_API virtual ~ATestingProjectCharacter();


#define FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h_18_PROLOG
#define FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTINGPROJECT_API UClass* StaticClass<class ATestingProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingProject_Source_TestingProject_TestingProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
