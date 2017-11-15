// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPEED_SpeedGameModeBase_generated_h
#error "SpeedGameModeBase.generated.h already included, missing '#pragma once' in SpeedGameModeBase.h"
#endif
#define SPEED_SpeedGameModeBase_generated_h

#define Speed_Source_Speed_SpeedGameModeBase_h_15_RPC_WRAPPERS
#define Speed_Source_Speed_SpeedGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Speed_Source_Speed_SpeedGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeedGameModeBase(); \
	friend SPEED_API class UClass* Z_Construct_UClass_ASpeedGameModeBase(); \
public: \
	DECLARE_CLASS(ASpeedGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Speed"), NO_API) \
	DECLARE_SERIALIZER(ASpeedGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Speed_Source_Speed_SpeedGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpeedGameModeBase(); \
	friend SPEED_API class UClass* Z_Construct_UClass_ASpeedGameModeBase(); \
public: \
	DECLARE_CLASS(ASpeedGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Speed"), NO_API) \
	DECLARE_SERIALIZER(ASpeedGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Speed_Source_Speed_SpeedGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeedGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedGameModeBase(ASpeedGameModeBase&&); \
	NO_API ASpeedGameModeBase(const ASpeedGameModeBase&); \
public:


#define Speed_Source_Speed_SpeedGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedGameModeBase(ASpeedGameModeBase&&); \
	NO_API ASpeedGameModeBase(const ASpeedGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeedGameModeBase)


#define Speed_Source_Speed_SpeedGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Speed_Source_Speed_SpeedGameModeBase_h_12_PROLOG
#define Speed_Source_Speed_SpeedGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Speed_Source_Speed_SpeedGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Speed_Source_Speed_SpeedGameModeBase_h_15_RPC_WRAPPERS \
	Speed_Source_Speed_SpeedGameModeBase_h_15_INCLASS \
	Speed_Source_Speed_SpeedGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Speed_Source_Speed_SpeedGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Speed_Source_Speed_SpeedGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Speed_Source_Speed_SpeedGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Speed_Source_Speed_SpeedGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Speed_Source_Speed_SpeedGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Speed_Source_Speed_SpeedGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
