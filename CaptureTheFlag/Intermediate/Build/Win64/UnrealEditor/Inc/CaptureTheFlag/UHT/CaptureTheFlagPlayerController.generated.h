// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureTheFlagPlayerController.h"

#ifdef CAPTURETHEFLAG_CaptureTheFlagPlayerController_generated_h
#error "CaptureTheFlagPlayerController.generated.h already included, missing '#pragma once' in CaptureTheFlagPlayerController.h"
#endif
#define CAPTURETHEFLAG_CaptureTheFlagPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACaptureTheFlagPlayerController ******************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureTheFlagPlayerController_NoRegister();

#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureTheFlagPlayerController(); \
	friend struct Z_Construct_UClass_ACaptureTheFlagPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureTheFlagPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureTheFlagPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACaptureTheFlagPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACaptureTheFlagPlayerController)


#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureTheFlagPlayerController(ACaptureTheFlagPlayerController&&) = delete; \
	ACaptureTheFlagPlayerController(const ACaptureTheFlagPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureTheFlagPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureTheFlagPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACaptureTheFlagPlayerController) \
	NO_API virtual ~ACaptureTheFlagPlayerController();


#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h_17_PROLOG
#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureTheFlagPlayerController;

// ********** End Class ACaptureTheFlagPlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
