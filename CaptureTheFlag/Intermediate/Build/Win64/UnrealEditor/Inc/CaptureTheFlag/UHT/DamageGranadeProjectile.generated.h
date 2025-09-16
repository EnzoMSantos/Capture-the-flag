// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DamageGranadeProjectile.h"

#ifdef CAPTURETHEFLAG_DamageGranadeProjectile_generated_h
#error "DamageGranadeProjectile.generated.h already included, missing '#pragma once' in DamageGranadeProjectile.h"
#endif
#define CAPTURETHEFLAG_DamageGranadeProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADamageGranadeProjectile *************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ADamageGranadeProjectile_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageGranadeProjectile(); \
	friend struct Z_Construct_UClass_ADamageGranadeProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ADamageGranadeProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ADamageGranadeProjectile, AGranadeProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ADamageGranadeProjectile_NoRegister) \
	DECLARE_SERIALIZER(ADamageGranadeProjectile)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADamageGranadeProjectile(ADamageGranadeProjectile&&) = delete; \
	ADamageGranadeProjectile(const ADamageGranadeProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageGranadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageGranadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageGranadeProjectile) \
	NO_API virtual ~ADamageGranadeProjectile();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h_15_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADamageGranadeProjectile;

// ********** End Class ADamageGranadeProjectile ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
