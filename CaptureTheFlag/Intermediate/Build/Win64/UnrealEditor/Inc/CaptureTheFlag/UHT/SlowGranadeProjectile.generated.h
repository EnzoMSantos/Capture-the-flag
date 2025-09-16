// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlowGranadeProjectile.h"

#ifdef CAPTURETHEFLAG_SlowGranadeProjectile_generated_h
#error "SlowGranadeProjectile.generated.h already included, missing '#pragma once' in SlowGranadeProjectile.h"
#endif
#define CAPTURETHEFLAG_SlowGranadeProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASlowGranadeProjectile ***************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ASlowGranadeProjectile_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlowGranadeProjectile(); \
	friend struct Z_Construct_UClass_ASlowGranadeProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ASlowGranadeProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ASlowGranadeProjectile, AGranadeProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ASlowGranadeProjectile_NoRegister) \
	DECLARE_SERIALIZER(ASlowGranadeProjectile)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASlowGranadeProjectile(ASlowGranadeProjectile&&) = delete; \
	ASlowGranadeProjectile(const ASlowGranadeProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlowGranadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlowGranadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlowGranadeProjectile) \
	NO_API virtual ~ASlowGranadeProjectile();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h_13_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASlowGranadeProjectile;

// ********** End Class ASlowGranadeProjectile *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
