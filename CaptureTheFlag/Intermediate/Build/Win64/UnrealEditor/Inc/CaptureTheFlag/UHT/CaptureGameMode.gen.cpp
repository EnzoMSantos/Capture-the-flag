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
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameMode();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureGameMode *********************************************************
void ACaptureGameMode::StaticRegisterNativesACaptureGameMode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
ACaptureGameMode::ACaptureGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureGameMode);
ACaptureGameMode::~ACaptureGameMode() {}
// ********** End Class ACaptureGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureGameMode, ACaptureGameMode::StaticClass, TEXT("ACaptureGameMode"), &Z_Registration_Info_UClass_ACaptureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureGameMode), 1478629362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_2968498493(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureGameMode_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
