// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/GranadeType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGranadeType() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UEnum* Z_Construct_UEnum_CaptureTheFlag_EGranadeType();
CAPTURETHEFLAG_API UScriptStruct* Z_Construct_UScriptStruct_FGranadeData();
CAPTURETHEFLAG_API UScriptStruct* Z_Construct_UScriptStruct_FGranadeSlot();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGranadeType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGranadeType;
static UEnum* EGranadeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGranadeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGranadeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CaptureTheFlag_EGranadeType, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlag(), TEXT("EGranadeType"));
	}
	return Z_Registration_Info_UEnum_EGranadeType.OuterSingleton;
}
template<> CAPTURETHEFLAG_API UEnum* StaticEnum<EGranadeType>()
{
	return EGranadeType_StaticEnum();
}
struct Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "Damage Granade" },
		{ "Damage.Name", "EGranadeType::Damage" },
		{ "Heal.DisplayName", "Heal Granade" },
		{ "Heal.Name", "EGranadeType::Heal" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGranadeType::None" },
		{ "Slow.DisplayName", "Slow Granade" },
		{ "Slow.Name", "EGranadeType::Slow" },
		{ "Smoke.DisplayName", "Smoke Granade" },
		{ "Smoke.Name", "EGranadeType::Smoke" },
		{ "Toxic.DisplayName", "Toxic Granade" },
		{ "Toxic.Name", "EGranadeType::Toxic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGranadeType::None", (int64)EGranadeType::None },
		{ "EGranadeType::Damage", (int64)EGranadeType::Damage },
		{ "EGranadeType::Slow", (int64)EGranadeType::Slow },
		{ "EGranadeType::Smoke", (int64)EGranadeType::Smoke },
		{ "EGranadeType::Toxic", (int64)EGranadeType::Toxic },
		{ "EGranadeType::Heal", (int64)EGranadeType::Heal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlag,
	nullptr,
	"EGranadeType",
	"EGranadeType",
	Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CaptureTheFlag_EGranadeType()
{
	if (!Z_Registration_Info_UEnum_EGranadeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGranadeType.InnerSingleton, Z_Construct_UEnum_CaptureTheFlag_EGranadeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGranadeType.InnerSingleton;
}
// ********** End Enum EGranadeType ****************************************************************

// ********** Begin ScriptStruct FGranadeSlot ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGranadeSlot;
class UScriptStruct* FGranadeSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGranadeSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGranadeSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGranadeSlot, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlag(), TEXT("GranadeSlot"));
	}
	return Z_Registration_Info_UScriptStruct_FGranadeSlot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGranadeSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GranadeType_MetaData[] = {
		{ "Category", "GranadeSlot" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "GranadeSlot" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownRemaining_MetaData[] = {
		{ "Category", "GranadeSlot" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GranadeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GranadeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGranadeSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_GranadeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_GranadeType = { "GranadeType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeSlot, GranadeType), Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GranadeType_MetaData), NewProp_GranadeType_MetaData) }; // 1437698260
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeSlot, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_CooldownRemaining = { "CooldownRemaining", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeSlot, CooldownRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownRemaining_MetaData), NewProp_CooldownRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGranadeSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_GranadeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_GranadeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewProp_CooldownRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGranadeSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGranadeSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
	nullptr,
	&NewStructOps,
	"GranadeSlot",
	Z_Construct_UScriptStruct_FGranadeSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGranadeSlot_Statics::PropPointers),
	sizeof(FGranadeSlot),
	alignof(FGranadeSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGranadeSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGranadeSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGranadeSlot()
{
	if (!Z_Registration_Info_UScriptStruct_FGranadeSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGranadeSlot.InnerSingleton, Z_Construct_UScriptStruct_FGranadeSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGranadeSlot.InnerSingleton;
}
// ********** End ScriptStruct FGranadeSlot ********************************************************

// ********** Begin ScriptStruct FGranadeData ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGranadeData;
class UScriptStruct* FGranadeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGranadeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGranadeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGranadeData, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlag(), TEXT("GranadeData"));
	}
	return Z_Registration_Info_UScriptStruct_FGranadeData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGranadeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GranadeData" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "GranadeData" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GranadeAbility_MetaData[] = {
		{ "Category", "GranadeData" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "GranadeData" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[] = {
		{ "Category", "GranadeData" },
		{ "ModuleRelativePath", "Types/GranadeType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GranadeAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGranadeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeData, Type), Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1437698260
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_GranadeAbility = { "GranadeAbility", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeData, GranadeAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GranadeAbility_MetaData), NewProp_GranadeAbility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeData, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGranadeData, MaxStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStack_MetaData), NewProp_MaxStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGranadeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_GranadeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGranadeData_Statics::NewProp_MaxStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGranadeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGranadeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
	nullptr,
	&NewStructOps,
	"GranadeData",
	Z_Construct_UScriptStruct_FGranadeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGranadeData_Statics::PropPointers),
	sizeof(FGranadeData),
	alignof(FGranadeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGranadeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGranadeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGranadeData()
{
	if (!Z_Registration_Info_UScriptStruct_FGranadeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGranadeData.InnerSingleton, Z_Construct_UScriptStruct_FGranadeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGranadeData.InnerSingleton;
}
// ********** End ScriptStruct FGranadeData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h__Script_CaptureTheFlag_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGranadeType_StaticEnum, TEXT("EGranadeType"), &Z_Registration_Info_UEnum_EGranadeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1437698260U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGranadeSlot::StaticStruct, Z_Construct_UScriptStruct_FGranadeSlot_Statics::NewStructOps, TEXT("GranadeSlot"), &Z_Registration_Info_UScriptStruct_FGranadeSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGranadeSlot), 1021656899U) },
		{ FGranadeData::StaticStruct, Z_Construct_UScriptStruct_FGranadeData_Statics::NewStructOps, TEXT("GranadeData"), &Z_Registration_Info_UScriptStruct_FGranadeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGranadeData), 1368813443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h__Script_CaptureTheFlag_2889999595(TEXT("/Script/CaptureTheFlag"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h__Script_CaptureTheFlag_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h__Script_CaptureTheFlag_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h__Script_CaptureTheFlag_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Types_GranadeType_h__Script_CaptureTheFlag_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
