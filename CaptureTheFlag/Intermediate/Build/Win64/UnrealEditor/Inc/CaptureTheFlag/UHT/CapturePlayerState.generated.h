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

struct FLinearColor;

// ********** Begin Class ACapturePlayerState ******************************************************
#define FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execApplyTeamMaterial); \
	DECLARE_FUNCTION(execGetTeamColor);


CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister();

#define FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapturePlayerState(); \
	friend struct Z_Construct_UClass_ACapturePlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACapturePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACapturePlayerState_NoRegister) \
	DECLARE_SERIALIZER(ACapturePlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		NETFIELD_REP_END=Team	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACapturePlayerState(ACapturePlayerState&&) = delete; \
	ACapturePlayerState(const ACapturePlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapturePlayerState) \
	NO_API virtual ~ACapturePlayerState();


#define FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_11_PROLOG
#define FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_INCLASS_NO_PURE_DECLS \
	FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACapturePlayerState;

// ********** End Class ACapturePlayerState ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
