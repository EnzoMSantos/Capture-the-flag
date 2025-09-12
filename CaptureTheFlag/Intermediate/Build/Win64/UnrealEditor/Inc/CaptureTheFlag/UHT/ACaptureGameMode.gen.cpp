// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACaptureGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeACaptureGameMode() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AACaptureGameMode();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AACaptureGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AACaptureGameMode ********************************************************
void AACaptureGameMode::StaticRegisterNativesAACaptureGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AACaptureGameMode;
UClass* AACaptureGameMode::GetPrivateStaticClass()
{
	using TClass = AACaptureGameMode;
	if (!Z_Registration_Info_UClass_AACaptureGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ACaptureGameMode"),
			Z_Registration_Info_UClass_AACaptureGameMode.InnerSingleton,
			StaticRegisterNativesAACaptureGameMode,
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
	return Z_Registration_Info_UClass_AACaptureGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AACaptureGameMode_NoRegister()
{
	return AACaptureGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AACaptureGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ACaptureGameMode.h" },
		{ "ModuleRelativePath", "Public/ACaptureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACaptureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AACaptureGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACaptureGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AACaptureGameMode_Statics::ClassParams = {
	&AACaptureGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACaptureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AACaptureGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AACaptureGameMode()
{
	if (!Z_Registration_Info_UClass_AACaptureGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACaptureGameMode.OuterSingleton, Z_Construct_UClass_AACaptureGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AACaptureGameMode.OuterSingleton;
}
AACaptureGameMode::AACaptureGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AACaptureGameMode);
AACaptureGameMode::~AACaptureGameMode() {}
// ********** End Class AACaptureGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AACaptureGameMode, AACaptureGameMode::StaticClass, TEXT("AACaptureGameMode"), &Z_Registration_Info_UClass_AACaptureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACaptureGameMode), 3349962341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h__Script_CaptureTheFlag_394815950(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_ACaptureGameMode_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
