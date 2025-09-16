// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGranadeAbility.h"

#ifdef CAPTURETHEFLAG_BaseGranadeAbility_generated_h
#error "BaseGranadeAbility.generated.h already included, missing '#pragma once' in BaseGranadeAbility.h"
#endif
#define CAPTURETHEFLAG_BaseGranadeAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseGranadeAbility ******************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyCooldown); \
	DECLARE_FUNCTION(execThrowGranade);


CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGranadeAbility(); \
	friend struct Z_Construct_UClass_UBaseGranadeAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseGranadeAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_UBaseGranadeAbility_NoRegister) \
	DECLARE_SERIALIZER(UBaseGranadeAbility)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseGranadeAbility(UBaseGranadeAbility&&) = delete; \
	UBaseGranadeAbility(const UBaseGranadeAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGranadeAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGranadeAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseGranadeAbility) \
	NO_API virtual ~UBaseGranadeAbility();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_12_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseGranadeAbility;

// ********** End Class UBaseGranadeAbility ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
