// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACaptureGameMode.h"

#ifdef CAPTURETHEFLAG_ACaptureGameMode_generated_h
#error "ACaptureGameMode.generated.h already included, missing '#pragma once' in ACaptureGameMode.h"
#endif
#define CAPTURETHEFLAG_ACaptureGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AACaptureGameMode ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AACaptureGameMode_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACaptureGameMode(); \
	friend struct Z_Construct_UClass_AACaptureGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AACaptureGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AACaptureGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_AACaptureGameMode_NoRegister) \
	DECLARE_SERIALIZER(AACaptureGameMode)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACaptureGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AACaptureGameMode(AACaptureGameMode&&) = delete; \
	AACaptureGameMode(const AACaptureGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACaptureGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACaptureGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACaptureGameMode) \
	NO_API virtual ~AACaptureGameMode();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h_12_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AACaptureGameMode;

// ********** End Class AACaptureGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
