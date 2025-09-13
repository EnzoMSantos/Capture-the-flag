// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureCharacter.h"

#ifdef CAPTURETHEFLAG_CaptureCharacter_generated_h
#error "CaptureCharacter.generated.h already included, missing '#pragma once' in CaptureCharacter.h"
#endif
#define CAPTURETHEFLAG_CaptureCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACaptureCharacter ********************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_DropFlag_Implementation(); \
	DECLARE_FUNCTION(execOnRep_HasFlag); \
	DECLARE_FUNCTION(execTryScore); \
	DECLARE_FUNCTION(execServer_DropFlag); \
	DECLARE_FUNCTION(execHasFlag);


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_CALLBACK_WRAPPERS
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureCharacter(); \
	friend struct Z_Construct_UClass_ACaptureCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_ACaptureCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACaptureCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasFlag=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasFlag	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureCharacter(ACaptureCharacter&&) = delete; \
	ACaptureCharacter(const ACaptureCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureCharacter) \
	NO_API virtual ~ACaptureCharacter();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_15_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_CALLBACK_WRAPPERS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureCharacter;

// ********** End Class ACaptureCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
