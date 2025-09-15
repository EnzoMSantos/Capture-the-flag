// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_BaseZone.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBP_BaseZone() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ABP_BaseZone();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ABP_BaseZone_NoRegister();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister();
CAPTURETHEFLAG_API UEnum* Z_Construct_UEnum_CaptureTheFlag_ETeams();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABP_BaseZone Function GetSpawnPointForPlayer *****************************
struct Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics
{
	struct BP_BaseZone_eventGetSpawnPointForPlayer_Parms
	{
		ACapturePlayerState* PlayerState;
		APlayerStart* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventGetSpawnPointForPlayer_Parms, PlayerState), Z_Construct_UClass_ACapturePlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventGetSpawnPointForPlayer_Parms, ReturnValue), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_BaseZone, nullptr, "GetSpawnPointForPlayer", Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::BP_BaseZone_eventGetSpawnPointForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::BP_BaseZone_eventGetSpawnPointForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_BaseZone::execGetSpawnPointForPlayer)
{
	P_GET_OBJECT(ACapturePlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerStart**)Z_Param__Result=P_THIS->GetSpawnPointForPlayer(Z_Param_PlayerState);
	P_NATIVE_END;
}
// ********** End Class ABP_BaseZone Function GetSpawnPointForPlayer *******************************

// ********** Begin Class ABP_BaseZone Function GetTeam ********************************************
struct Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics
{
	struct BP_BaseZone_eventGetTeam_Parms
	{
		ETeams ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlag_ETeams, METADATA_PARAMS(0, nullptr) }; // 2928491561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_BaseZone, nullptr, "GetTeam", Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::BP_BaseZone_eventGetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::BP_BaseZone_eventGetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_BaseZone_GetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_BaseZone_GetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_BaseZone::execGetTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeams*)Z_Param__Result=P_THIS->GetTeam();
	P_NATIVE_END;
}
// ********** End Class ABP_BaseZone Function GetTeam **********************************************

// ********** Begin Class ABP_BaseZone Function OnOverlapBegin *************************************
struct Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics
{
	struct BP_BaseZone_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BP_BaseZone_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_BaseZone_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_BaseZone_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_BaseZone, nullptr, "OnOverlapBegin", Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::BP_BaseZone_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::BP_BaseZone_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_BaseZone::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ABP_BaseZone Function OnOverlapBegin ***************************************

// ********** Begin Class ABP_BaseZone *************************************************************
void ABP_BaseZone::StaticRegisterNativesABP_BaseZone()
{
	UClass* Class = ABP_BaseZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpawnPointForPlayer", &ABP_BaseZone::execGetSpawnPointForPlayer },
		{ "GetTeam", &ABP_BaseZone::execGetTeam },
		{ "OnOverlapBegin", &ABP_BaseZone::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABP_BaseZone;
UClass* ABP_BaseZone::GetPrivateStaticClass()
{
	using TClass = ABP_BaseZone;
	if (!Z_Registration_Info_UClass_ABP_BaseZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BP_BaseZone"),
			Z_Registration_Info_UClass_ABP_BaseZone.InnerSingleton,
			StaticRegisterNativesABP_BaseZone,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABP_BaseZone.InnerSingleton;
}
UClass* Z_Construct_UClass_ABP_BaseZone_NoRegister()
{
	return ABP_BaseZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABP_BaseZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BP_BaseZone.h" },
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamSpawnPoints_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/BP_BaseZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamSpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamSpawnPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_BaseZone_GetSpawnPointForPlayer, "GetSpawnPointForPlayer" }, // 270515299
		{ &Z_Construct_UFunction_ABP_BaseZone_GetTeam, "GetTeam" }, // 2969299834
		{ &Z_Construct_UFunction_ABP_BaseZone_OnOverlapBegin, "OnOverlapBegin" }, // 2164819665
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_BaseZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_BaseZone, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_BaseZone, Team), Z_Construct_UEnum_CaptureTheFlag_ETeams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 2928491561
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_TeamSpawnPoints_Inner = { "TeamSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_TeamSpawnPoints = { "TeamSpawnPoints", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_BaseZone, TeamSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamSpawnPoints_MetaData), NewProp_TeamSpawnPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_BaseZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_TeamSpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BaseZone_Statics::NewProp_TeamSpawnPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABP_BaseZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_BaseZone_Statics::ClassParams = {
	&ABP_BaseZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABP_BaseZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseZone_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BaseZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_BaseZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_BaseZone()
{
	if (!Z_Registration_Info_UClass_ABP_BaseZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_BaseZone.OuterSingleton, Z_Construct_UClass_ABP_BaseZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_BaseZone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_BaseZone);
ABP_BaseZone::~ABP_BaseZone() {}
// ********** End Class ABP_BaseZone ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_BaseZone, ABP_BaseZone::StaticClass, TEXT("ABP_BaseZone"), &Z_Registration_Info_UClass_ABP_BaseZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_BaseZone), 270214030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h__Script_CaptureTheFlag_4156316346(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_Public_BP_BaseZone_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
