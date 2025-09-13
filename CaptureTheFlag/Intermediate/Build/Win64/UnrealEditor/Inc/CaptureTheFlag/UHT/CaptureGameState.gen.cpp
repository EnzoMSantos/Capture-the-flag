// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureGameState() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameState();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureGameState Function GetBlueScore **********************************
struct Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics
{
	struct CaptureGameState_eventGetBlueScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureGameState_eventGetBlueScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureGameState, nullptr, "GetBlueScore", Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::CaptureGameState_eventGetBlueScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::CaptureGameState_eventGetBlueScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureGameState_GetBlueScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureGameState_GetBlueScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureGameState::execGetBlueScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBlueScore();
	P_NATIVE_END;
}
// ********** End Class ACaptureGameState Function GetBlueScore ************************************

// ********** Begin Class ACaptureGameState Function GetRedScore ***********************************
struct Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics
{
	struct CaptureGameState_eventGetRedScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureGameState_eventGetRedScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureGameState, nullptr, "GetRedScore", Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::CaptureGameState_eventGetRedScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::CaptureGameState_eventGetRedScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureGameState_GetRedScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureGameState_GetRedScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureGameState::execGetRedScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRedScore();
	P_NATIVE_END;
}
// ********** End Class ACaptureGameState Function GetRedScore *************************************

// ********** Begin Class ACaptureGameState ********************************************************
void ACaptureGameState::StaticRegisterNativesACaptureGameState()
{
	UClass* Class = ACaptureGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBlueScore", &ACaptureGameState::execGetBlueScore },
		{ "GetRedScore", &ACaptureGameState::execGetRedScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureGameState;
UClass* ACaptureGameState::GetPrivateStaticClass()
{
	using TClass = ACaptureGameState;
	if (!Z_Registration_Info_UClass_ACaptureGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureGameState"),
			Z_Registration_Info_UClass_ACaptureGameState.InnerSingleton,
			StaticRegisterNativesACaptureGameState,
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
	return Z_Registration_Info_UClass_ACaptureGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureGameState_NoRegister()
{
	return ACaptureGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CaptureGameState.h" },
		{ "ModuleRelativePath", "Public/CaptureGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedScore_MetaData[] = {
		{ "Category", "CaptureGameState" },
		{ "ModuleRelativePath", "Public/CaptureGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueScore_MetaData[] = {
		{ "Category", "CaptureGameState" },
		{ "ModuleRelativePath", "Public/CaptureGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RedScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureGameState_GetBlueScore, "GetBlueScore" }, // 2151375290
		{ &Z_Construct_UFunction_ACaptureGameState_GetRedScore, "GetRedScore" }, // 3550932732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaptureGameState_Statics::NewProp_RedScore = { "RedScore", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureGameState, RedScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedScore_MetaData), NewProp_RedScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaptureGameState_Statics::NewProp_BlueScore = { "BlueScore", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureGameState, BlueScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueScore_MetaData), NewProp_BlueScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureGameState_Statics::NewProp_RedScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureGameState_Statics::NewProp_BlueScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACaptureGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureGameState_Statics::ClassParams = {
	&ACaptureGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACaptureGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureGameState()
{
	if (!Z_Registration_Info_UClass_ACaptureGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureGameState.OuterSingleton, Z_Construct_UClass_ACaptureGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACaptureGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_RedScore(TEXT("RedScore"));
	static FName Name_BlueScore(TEXT("BlueScore"));
	const bool bIsValid = true
		&& Name_RedScore == ClassReps[(int32)ENetFields_Private::RedScore].Property->GetFName()
		&& Name_BlueScore == ClassReps[(int32)ENetFields_Private::BlueScore].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACaptureGameState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureGameState);
ACaptureGameState::~ACaptureGameState() {}
// ********** End Class ACaptureGameState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureGameState, ACaptureGameState::StaticClass, TEXT("ACaptureGameState"), &Z_Registration_Info_UClass_ACaptureGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureGameState), 3489333175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_1558796814(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
