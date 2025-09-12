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

// ********** Begin Class ACaptureGameState ********************************************************
void ACaptureGameState::StaticRegisterNativesACaptureGameState()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
ACaptureGameState::ACaptureGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureGameState);
ACaptureGameState::~ACaptureGameState() {}
// ********** End Class ACaptureGameState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureGameState, ACaptureGameState::StaticClass, TEXT("ACaptureGameState"), &Z_Registration_Info_UClass_ACaptureGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureGameState), 2408457029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_2951715734(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameState_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
