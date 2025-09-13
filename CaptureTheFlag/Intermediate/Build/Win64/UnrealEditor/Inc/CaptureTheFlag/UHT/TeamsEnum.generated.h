// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/TeamsEnum.h"

#ifdef CAPTURETHEFLAG_TeamsEnum_generated_h
#error "TeamsEnum.generated.h already included, missing '#pragma once' in TeamsEnum.h"
#endif
#define CAPTURETHEFLAG_TeamsEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_TeamsEnum_h

// ********** Begin Enum ETeams ********************************************************************
#define FOREACH_ENUM_ETEAMS(op) \
	op(ETeams::None) \
	op(ETeams::Red) \
	op(ETeams::Blue) 

enum class ETeams : uint8;
template<> struct TIsUEnumClass<ETeams> { enum { Value = true }; };
template<> CAPTURETHEFLAG_API UEnum* StaticEnum<ETeams>();
// ********** End Enum ETeams **********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
