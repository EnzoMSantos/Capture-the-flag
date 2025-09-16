// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/GranadeType.h"

#ifdef CAPTURETHEFLAG_GranadeType_generated_h
#error "GranadeType.generated.h already included, missing '#pragma once' in GranadeType.h"
#endif
#define CAPTURETHEFLAG_GranadeType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGranadeSlot ******************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGranadeSlot_Statics; \
	CAPTURETHEFLAG_API static class UScriptStruct* StaticStruct();


struct FGranadeSlot;
// ********** End ScriptStruct FGranadeSlot ********************************************************

// ********** Begin ScriptStruct FGranadeData ******************************************************
#define FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGranadeData_Statics; \
	CAPTURETHEFLAG_API static class UScriptStruct* StaticStruct();


struct FGranadeData;
// ********** End ScriptStruct FGranadeData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h

// ********** Begin Enum EGranadeType **************************************************************
#define FOREACH_ENUM_EGRANADETYPE(op) \
	op(EGranadeType::None) \
	op(EGranadeType::Damage) \
	op(EGranadeType::Slow) \
	op(EGranadeType::Smoke) \
	op(EGranadeType::Toxic) \
	op(EGranadeType::Heal) 

enum class EGranadeType : uint8;
template<> struct TIsUEnumClass<EGranadeType> { enum { Value = true }; };
template<> CAPTURETHEFLAG_API UEnum* StaticEnum<EGranadeType>();
// ********** End Enum EGranadeType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
