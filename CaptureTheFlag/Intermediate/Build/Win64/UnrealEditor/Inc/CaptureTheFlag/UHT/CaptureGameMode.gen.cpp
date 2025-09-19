// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureGameMode() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ABP_BaseZone_NoRegister();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameMode();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureGameMode Function RequestRespawn *********************************
struct Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics
{
	struct CaptureGameMode_eventRequestRespawn_Parms
	{
		AController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureGameMode_eventRequestRespawn_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureGameMode, nullptr, "RequestRespawn", Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::CaptureGameMode_eventRequestRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::CaptureGameMode_eventRequestRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureGameMode_RequestRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureGameMode_RequestRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureGameMode::execRequestRespawn)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRespawn(Z_Param_Controller);
	P_NATIVE_END;
}
// ********** End Class ACaptureGameMode Function RequestRespawn ***********************************

// ********** Begin Class ACaptureGameMode *********************************************************
void ACaptureGameMode::StaticRegisterNativesACaptureGameMode()
{
	UClass* Class = ACaptureGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestRespawn", &ACaptureGameMode::execRequestRespawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureGameMode;
UClass* ACaptureGameMode::GetPrivateStaticClass()
{
	using TClass = ACaptureGameMode;
	if (!Z_Registration_Info_UClass_ACaptureGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureGameMode"),
			Z_Registration_Info_UClass_ACaptureGameMode.InnerSingleton,
			StaticRegisterNativesACaptureGameMode,
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
	return Z_Registration_Info_UClass_ACaptureGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureGameMode_NoRegister()
{
	return ACaptureGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CaptureGameMode.h" },
		{ "ModuleRelativePath", "Public/CaptureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureGameMode_RequestRespawn, "RequestRespawn" }, // 2857091193
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureGameMode_Statics::NewProp_RedBase = { "RedBase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureGameMode, RedBase), Z_Construct_UClass_ABP_BaseZone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedBase_MetaData), NewProp_RedBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureGameMode_Statics::NewProp_BlueBase = { "BlueBase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureGameMode, BlueBase), Z_Construct_UClass_ABP_BaseZone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueBase_MetaData), NewProp_BlueBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureGameMode_Statics::NewProp_RedBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureGameMode_Statics::NewProp_BlueBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACaptureGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureGameMode_Statics::ClassParams = {
	&ACaptureGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACaptureGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureGameMode()
{
	if (!Z_Registration_Info_UClass_ACaptureGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureGameMode.OuterSingleton, Z_Construct_UClass_ACaptureGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureGameMode);
ACaptureGameMode::~ACaptureGameMode() {}
// ********** End Class ACaptureGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureGameMode, ACaptureGameMode::StaticClass, TEXT("ACaptureGameMode"), &Z_Registration_Info_UClass_ACaptureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureGameMode), 2065442557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_3420512524(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
