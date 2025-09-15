// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureTheFlagCameraManager.h"

#ifdef CAPTURETHEFLAG_CaptureTheFlagCameraManager_generated_h
#error "CaptureTheFlagCameraManager.generated.h already included, missing '#pragma once' in CaptureTheFlagCameraManager.h"
#endif
#define CAPTURETHEFLAG_CaptureTheFlagCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACaptureTheFlagCameraManager *********************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureTheFlagCameraManager_NoRegister();

#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureTheFlagCameraManager(); \
	friend struct Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureTheFlagCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureTheFlagCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACaptureTheFlagCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ACaptureTheFlagCameraManager)


#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureTheFlagCameraManager(ACaptureTheFlagCameraManager&&) = delete; \
	ACaptureTheFlagCameraManager(const ACaptureTheFlagCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureTheFlagCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureTheFlagCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureTheFlagCameraManager) \
	NO_API virtual ~ACaptureTheFlagCameraManager();


#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h_13_PROLOG
#define FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureTheFlagCameraManager;

// ********** End Class ACaptureTheFlagCameraManager ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
