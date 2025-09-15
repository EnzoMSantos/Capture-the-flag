// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlagActor.h"

#ifdef CAPTURETHEFLAG_FlagActor_generated_h
#error "FlagActor.generated.h already included, missing '#pragma once' in FlagActor.h"
#endif
#define CAPTURETHEFLAG_FlagActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AFlagActor ***************************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlagActor(); \
	friend struct Z_Construct_UClass_AFlagActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AFlagActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_AFlagActor_NoRegister) \
	DECLARE_SERIALIZER(AFlagActor)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFlagActor(AFlagActor&&) = delete; \
	AFlagActor(const AFlagActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlagActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlagActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlagActor) \
	NO_API virtual ~AFlagActor();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_11_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFlagActor;

// ********** End Class AFlagActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
