// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPEED_TestGameMode_generated_h
#error "TestGameMode.generated.h already included, missing '#pragma once' in TestGameMode.h"
#endif
#define SPEED_TestGameMode_generated_h

#define Speed_Source_Speed_Modes_TestGameMode_h_15_RPC_WRAPPERS
#define Speed_Source_Speed_Modes_TestGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Speed_Source_Speed_Modes_TestGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGameMode(); \
	friend SPEED_API class UClass* Z_Construct_UClass_ATestGameMode(); \
public: \
	DECLARE_CLASS(ATestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Speed"), NO_API) \
	DECLARE_SERIALIZER(ATestGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Speed_Source_Speed_Modes_TestGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestGameMode(); \
	friend SPEED_API class UClass* Z_Construct_UClass_ATestGameMode(); \
public: \
	DECLARE_CLASS(ATestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Speed"), NO_API) \
	DECLARE_SERIALIZER(ATestGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Speed_Source_Speed_Modes_TestGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGameMode(ATestGameMode&&); \
	NO_API ATestGameMode(const ATestGameMode&); \
public:


#define Speed_Source_Speed_Modes_TestGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGameMode(ATestGameMode&&); \
	NO_API ATestGameMode(const ATestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGameMode)


#define Speed_Source_Speed_Modes_TestGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define Speed_Source_Speed_Modes_TestGameMode_h_12_PROLOG
#define Speed_Source_Speed_Modes_TestGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Speed_Source_Speed_Modes_TestGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Speed_Source_Speed_Modes_TestGameMode_h_15_RPC_WRAPPERS \
	Speed_Source_Speed_Modes_TestGameMode_h_15_INCLASS \
	Speed_Source_Speed_Modes_TestGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Speed_Source_Speed_Modes_TestGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Speed_Source_Speed_Modes_TestGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Speed_Source_Speed_Modes_TestGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Speed_Source_Speed_Modes_TestGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Speed_Source_Speed_Modes_TestGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Speed_Source_Speed_Modes_TestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
