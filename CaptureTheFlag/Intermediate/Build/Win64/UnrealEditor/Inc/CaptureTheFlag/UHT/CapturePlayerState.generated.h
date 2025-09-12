// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CapturePlayerState.h"

#ifdef CAPTURETHEFLAG_CapturePlayerState_generated_h
#error "CapturePlayerState.generated.h already included, missing '#pragma once' in CapturePlayerState.h"
#endif
#define CAPTURETHEFLAG_CapturePlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACapturePlayerState ******************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapturePlayerState(); \
	friend struct Z_Construct_UClass_ACapturePlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACapturePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACapturePlayerState_NoRegister) \
	DECLARE_SERIALIZER(ACapturePlayerState)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapturePlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACapturePlayerState(ACapturePlayerState&&) = delete; \
	ACapturePlayerState(const ACapturePlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapturePlayerState) \
	NO_API virtual ~ACapturePlayerState();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_12_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACapturePlayerState;

// ********** End Class ACapturePlayerState ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
