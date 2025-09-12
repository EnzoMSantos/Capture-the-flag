// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureGameMode.h"

#ifdef CAPTURETHEFLAG_CaptureGameMode_generated_h
#error "CaptureGameMode.generated.h already included, missing '#pragma once' in CaptureGameMode.h"
#endif
#define CAPTURETHEFLAG_CaptureGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACaptureGameMode *********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameMode_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureGameMode(); \
	friend struct Z_Construct_UClass_ACaptureGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACaptureGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACaptureGameMode)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaptureGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureGameMode(ACaptureGameMode&&) = delete; \
	ACaptureGameMode(const ACaptureGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaptureGameMode) \
	NO_API virtual ~ACaptureGameMode();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h_12_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureGameMode;

// ********** End Class ACaptureGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
