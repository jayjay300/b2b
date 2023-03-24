// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef B2B_b2bCharacter_generated_h
#error "b2bCharacter.generated.h already included, missing '#pragma once' in b2bCharacter.h"
#endif
#define B2B_b2bCharacter_generated_h

#define b2b_Source_b2b_b2bCharacter_h_12_SPARSE_DATA
#define b2b_Source_b2b_b2bCharacter_h_12_RPC_WRAPPERS
#define b2b_Source_b2b_b2bCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define b2b_Source_b2b_b2bCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAb2bCharacter(); \
	friend struct Z_Construct_UClass_Ab2bCharacter_Statics; \
public: \
	DECLARE_CLASS(Ab2bCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/b2b"), NO_API) \
	DECLARE_SERIALIZER(Ab2bCharacter)


#define b2b_Source_b2b_b2bCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAb2bCharacter(); \
	friend struct Z_Construct_UClass_Ab2bCharacter_Statics; \
public: \
	DECLARE_CLASS(Ab2bCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/b2b"), NO_API) \
	DECLARE_SERIALIZER(Ab2bCharacter)


#define b2b_Source_b2b_b2bCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ab2bCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ab2bCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ab2bCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ab2bCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ab2bCharacter(Ab2bCharacter&&); \
	NO_API Ab2bCharacter(const Ab2bCharacter&); \
public:


#define b2b_Source_b2b_b2bCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ab2bCharacter(Ab2bCharacter&&); \
	NO_API Ab2bCharacter(const Ab2bCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ab2bCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ab2bCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ab2bCharacter)


#define b2b_Source_b2b_b2bCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(Ab2bCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(Ab2bCharacter, FollowCamera); }


#define b2b_Source_b2b_b2bCharacter_h_9_PROLOG
#define b2b_Source_b2b_b2bCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	b2b_Source_b2b_b2bCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	b2b_Source_b2b_b2bCharacter_h_12_SPARSE_DATA \
	b2b_Source_b2b_b2bCharacter_h_12_RPC_WRAPPERS \
	b2b_Source_b2b_b2bCharacter_h_12_INCLASS \
	b2b_Source_b2b_b2bCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define b2b_Source_b2b_b2bCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	b2b_Source_b2b_b2bCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	b2b_Source_b2b_b2bCharacter_h_12_SPARSE_DATA \
	b2b_Source_b2b_b2bCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	b2b_Source_b2b_b2bCharacter_h_12_INCLASS_NO_PURE_DECLS \
	b2b_Source_b2b_b2bCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> B2B_API UClass* StaticClass<class Ab2bCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID b2b_Source_b2b_b2bCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
