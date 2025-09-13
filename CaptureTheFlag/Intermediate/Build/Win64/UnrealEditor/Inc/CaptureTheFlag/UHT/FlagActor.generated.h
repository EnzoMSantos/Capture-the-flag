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
class ACaptureCharacter;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AFlagActor ***************************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_ResetFlag_Implementation(); \
	virtual void Server_DropFlag_Implementation(FVector DropLocation); \
	virtual void Server_PickupFlag_Implementation(ACaptureCharacter* NewCarrier); \
	DECLARE_FUNCTION(execOnRep_Carrier); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execServer_ResetFlag); \
	DECLARE_FUNCTION(execServer_DropFlag); \
	DECLARE_FUNCTION(execServer_PickupFlag);


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_CALLBACK_WRAPPERS
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlagActor(); \
	friend struct Z_Construct_UClass_AFlagActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AFlagActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_AFlagActor_NoRegister) \
	DECLARE_SERIALIZER(AFlagActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Carrier=NETFIELD_REP_START, \
		NETFIELD_REP_END=Carrier	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


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
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_CALLBACK_WRAPPERS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFlagActor;

// ********** End Class AFlagActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
