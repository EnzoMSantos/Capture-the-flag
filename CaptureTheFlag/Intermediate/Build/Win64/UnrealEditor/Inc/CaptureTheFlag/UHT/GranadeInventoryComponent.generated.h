// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GranadeInventoryComponent.h"

#ifdef CAPTURETHEFLAG_GranadeInventoryComponent_generated_h
#error "GranadeInventoryComponent.generated.h already included, missing '#pragma once' in GranadeInventoryComponent.h"
#endif
#define CAPTURETHEFLAG_GranadeInventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EGranadeType : uint8;

// ********** Begin Class UGranadeInventoryComponent ***********************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_UseGranade_Implementation(int32 SlotIndex); \
	virtual void Server_AddGranade_Implementation(EGranadeType GranadeType, int32 Quantity); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execGetMaxStackForType); \
	DECLARE_FUNCTION(execGetGranadeCount); \
	DECLARE_FUNCTION(execUseGranade); \
	DECLARE_FUNCTION(execServer_UseGranade); \
	DECLARE_FUNCTION(execServer_AddGranade); \
	DECLARE_FUNCTION(execCanAddGranade);


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_CALLBACK_WRAPPERS
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UGranadeInventoryComponent_NoRegister();

#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGranadeInventoryComponent(); \
	friend struct Z_Construct_UClass_UGranadeInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UGranadeInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGranadeInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlag"), Z_Construct_UClass_UGranadeInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UGranadeInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventorySlots=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventorySlots	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGranadeInventoryComponent(UGranadeInventoryComponent&&) = delete; \
	UGranadeInventoryComponent(const UGranadeInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGranadeInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGranadeInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGranadeInventoryComponent) \
	NO_API virtual ~UGranadeInventoryComponent();


#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_11_PROLOG
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_CALLBACK_WRAPPERS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGranadeInventoryComponent;

// ********** End Class UGranadeInventoryComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
