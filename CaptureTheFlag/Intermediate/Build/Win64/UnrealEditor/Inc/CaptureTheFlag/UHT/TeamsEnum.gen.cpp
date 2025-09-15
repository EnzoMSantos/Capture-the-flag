// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/TeamsEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTeamsEnum() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UEnum* Z_Construct_UEnum_CaptureTheFlag_ETeams();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETeams ********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeams;
static UEnum* ETeams_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeams.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeams.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CaptureTheFlag_ETeams, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlag(), TEXT("ETeams"));
	}
	return Z_Registration_Info_UEnum_ETeams.OuterSingleton;
}
template<> CAPTURETHEFLAG_API UEnum* StaticEnum<ETeams>()
{
	return ETeams_StaticEnum();
}
struct Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blue.DisplayName", "Blue" },
		{ "Blue.Name", "ETeams::Blue" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types/TeamsEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ETeams::None" },
		{ "Red.DisplayName", "Red" },
		{ "Red.Name", "ETeams::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeams::None", (int64)ETeams::None },
		{ "ETeams::Red", (int64)ETeams::Red },
		{ "ETeams::Blue", (int64)ETeams::Blue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlag,
	nullptr,
	"ETeams",
	"ETeams",
	Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CaptureTheFlag_ETeams()
{
	if (!Z_Registration_Info_UEnum_ETeams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeams.InnerSingleton, Z_Construct_UEnum_CaptureTheFlag_ETeams_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeams.InnerSingleton;
}
// ********** End Enum ETeams **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Types_TeamsEnum_h__Script_CaptureTheFlag_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeams_StaticEnum, TEXT("ETeams"), &Z_Registration_Info_UEnum_ETeams, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2928491561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Types_TeamsEnum_h__Script_CaptureTheFlag_4021238128(TEXT("/Script/CaptureTheFlag"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Types_TeamsEnum_h__Script_CaptureTheFlag_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Types_TeamsEnum_h__Script_CaptureTheFlag_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
