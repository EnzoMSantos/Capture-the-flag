// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GranadeProjectile.h"

#ifdef CAPTURETHEFLAG_GranadeProjectile_generated_h
#error "GranadeProjectile.generated.h already included, missing '#pragma once' in GranadeProjectile.h"
#endif
#define CAPTURETHEFLAG_GranadeProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGranadeProjectile *******************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGranadeProjectile(); \
	friend struct Z_Construct_UClass_AGranadeProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(AGranadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_AGranadeProjectile_NoRegister) \
	DECLARE_SERIALIZER(AGranadeProjectile)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGranadeProjectile(AGranadeProjectile&&) = delete; \
	AGranadeProjectile(const AGranadeProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGranadeProjectile) \
	NO_API virtual ~AGranadeProjectile();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h_9_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGranadeProjectile;

// ********** End Class AGranadeProjectile *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
