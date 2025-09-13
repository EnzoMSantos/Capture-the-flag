// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BP_BaseZone.h"

#ifdef CAPTURETHEFLAG_BP_BaseZone_generated_h
#error "BP_BaseZone.generated.h already included, missing '#pragma once' in BP_BaseZone.h"
#endif
#define CAPTURETHEFLAG_BP_BaseZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABP_BaseZone *************************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ABP_BaseZone_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_BaseZone(); \
	friend struct Z_Construct_UClass_ABP_BaseZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ABP_BaseZone_NoRegister(); \
public: \
	DECLARE_CLASS2(ABP_BaseZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ABP_BaseZone_NoRegister) \
	DECLARE_SERIALIZER(ABP_BaseZone)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABP_BaseZone(ABP_BaseZone&&) = delete; \
	ABP_BaseZone(const ABP_BaseZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_BaseZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_BaseZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_BaseZone) \
	NO_API virtual ~ABP_BaseZone();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_10_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABP_BaseZone;

// ********** End Class ABP_BaseZone ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
