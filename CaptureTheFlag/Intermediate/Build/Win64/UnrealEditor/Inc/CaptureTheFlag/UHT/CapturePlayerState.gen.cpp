// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapturePlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCapturePlayerState() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister();
CAPTURETHEFLAG_API UEnum* Z_Construct_UEnum_CaptureTheFlag_ETeams();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACapturePlayerState Function OnRep_Team **********************************
struct Z_Construct_UFunction_ACapturePlayerState_OnRep_Team_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapturePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePlayerState_OnRep_Team_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACapturePlayerState, nullptr, "OnRep_Team", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePlayerState_OnRep_Team_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACapturePlayerState_OnRep_Team_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACapturePlayerState_OnRep_Team()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePlayerState_OnRep_Team_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACapturePlayerState::execOnRep_Team)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Team();
	P_NATIVE_END;
}
// ********** End Class ACapturePlayerState Function OnRep_Team ************************************

// ********** Begin Class ACapturePlayerState ******************************************************
void ACapturePlayerState::StaticRegisterNativesACapturePlayerState()
{
	UClass* Class = ACapturePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Team", &ACapturePlayerState::execOnRep_Team },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACapturePlayerState;
UClass* ACapturePlayerState::GetPrivateStaticClass()
{
	using TClass = ACapturePlayerState;
	if (!Z_Registration_Info_UClass_ACapturePlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CapturePlayerState"),
			Z_Registration_Info_UClass_ACapturePlayerState.InnerSingleton,
			StaticRegisterNativesACapturePlayerState,
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
	return Z_Registration_Info_UClass_ACapturePlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACapturePlayerState_NoRegister()
{
	return ACapturePlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACapturePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CapturePlayerState.h" },
		{ "ModuleRelativePath", "Public/CapturePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/CapturePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACapturePlayerState_OnRep_Team, "OnRep_Team" }, // 3730540282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapturePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACapturePlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACapturePlayerState_Statics::NewProp_Team = { "Team", "OnRep_Team", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACapturePlayerState, Team), Z_Construct_UEnum_CaptureTheFlag_ETeams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 2928491561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapturePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePlayerState_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePlayerState_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACapturePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACapturePlayerState_Statics::ClassParams = {
	&ACapturePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACapturePlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACapturePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACapturePlayerState()
{
	if (!Z_Registration_Info_UClass_ACapturePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACapturePlayerState.OuterSingleton, Z_Construct_UClass_ACapturePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACapturePlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACapturePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Team(TEXT("Team"));
	const bool bIsValid = true
		&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACapturePlayerState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACapturePlayerState);
ACapturePlayerState::~ACapturePlayerState() {}
// ********** End Class ACapturePlayerState ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACapturePlayerState, ACapturePlayerState::StaticClass, TEXT("ACapturePlayerState"), &Z_Registration_Info_UClass_ACapturePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACapturePlayerState), 4194467487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h__Script_CaptureTheFlag_2688501701(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CapturePlayerState_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
