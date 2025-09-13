// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureGameState.h"

#ifdef CAPTURETHEFLAG_CaptureGameState_generated_h
#error "CaptureGameState.generated.h already included, missing '#pragma once' in CaptureGameState.h"
#endif
#define CAPTURETHEFLAG_CaptureGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACaptureGameState ********************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ApplyAllTeamMaterials_Implementation(); \
	DECLARE_FUNCTION(execMulticast_ApplyAllTeamMaterials); \
	DECLARE_FUNCTION(execGetBlueScore); \
	DECLARE_FUNCTION(execGetRedScore);


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_CALLBACK_WRAPPERS
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameState_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureGameState(); \
	friend struct Z_Construct_UClass_ACaptureGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACaptureGameState_NoRegister) \
	DECLARE_SERIALIZER(ACaptureGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RedScore=NETFIELD_REP_START, \
		BlueScore, \
		NETFIELD_REP_END=BlueScore	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureGameState(ACaptureGameState&&) = delete; \
	ACaptureGameState(const ACaptureGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureGameState) \
	NO_API virtual ~ACaptureGameState();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_14_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_CALLBACK_WRAPPERS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureGameState;

// ********** End Class ACaptureGameState **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
