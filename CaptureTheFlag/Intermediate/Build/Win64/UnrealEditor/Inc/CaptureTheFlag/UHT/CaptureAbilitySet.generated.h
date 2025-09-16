// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureAbilitySet.h"

#ifdef CAPTURETHEFLAG_CaptureAbilitySet_generated_h
#error "CaptureAbilitySet.generated.h already included, missing '#pragma once' in CaptureAbilitySet.h"
#endif
#define CAPTURETHEFLAG_CaptureAbilitySet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAbilitySystemComponent;

// ********** Begin Class UCaptureAbilitySet *******************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveFromAbilitySystem); \
	DECLARE_FUNCTION(execGiveToAbilitySystem);


CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UCaptureAbilitySet_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureAbilitySet(); \
	friend struct Z_Construct_UClass_UCaptureAbilitySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UCaptureAbilitySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCaptureAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_UCaptureAbilitySet_NoRegister) \
	DECLARE_SERIALIZER(UCaptureAbilitySet)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCaptureAbilitySet(UCaptureAbilitySet&&) = delete; \
	UCaptureAbilitySet(const UCaptureAbilitySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureAbilitySet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCaptureAbilitySet) \
	NO_API virtual ~UCaptureAbilitySet();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_13_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCaptureAbilitySet;

// ********** End Class UCaptureAbilitySet *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureAbilitySet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
