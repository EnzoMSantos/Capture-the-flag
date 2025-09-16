// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlowGranadeProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlowGranadeProjectile() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ASlowGranadeProjectile();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ASlowGranadeProjectile_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASlowGranadeProjectile ***************************************************
void ASlowGranadeProjectile::StaticRegisterNativesASlowGranadeProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASlowGranadeProjectile;
UClass* ASlowGranadeProjectile::GetPrivateStaticClass()
{
	using TClass = ASlowGranadeProjectile;
	if (!Z_Registration_Info_UClass_ASlowGranadeProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlowGranadeProjectile"),
			Z_Registration_Info_UClass_ASlowGranadeProjectile.InnerSingleton,
			StaticRegisterNativesASlowGranadeProjectile,
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
	return Z_Registration_Info_UClass_ASlowGranadeProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_ASlowGranadeProjectile_NoRegister()
{
	return ASlowGranadeProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASlowGranadeProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SlowGranadeProjectile.h" },
		{ "ModuleRelativePath", "Public/SlowGranadeProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowDuration_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowPercentage_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectRadius_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowEffectClass_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlowEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowGranadeProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_SlowDuration = { "SlowDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowGranadeProjectile, SlowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowDuration_MetaData), NewProp_SlowDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_SlowPercentage = { "SlowPercentage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowGranadeProjectile, SlowPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowPercentage_MetaData), NewProp_SlowPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_EffectRadius = { "EffectRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowGranadeProjectile, EffectRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectRadius_MetaData), NewProp_EffectRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_SlowEffectClass = { "SlowEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowGranadeProjectile, SlowEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowEffectClass_MetaData), NewProp_SlowEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlowGranadeProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_SlowDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_SlowPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_EffectRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowGranadeProjectile_Statics::NewProp_SlowEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowGranadeProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlowGranadeProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGranadeProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowGranadeProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlowGranadeProjectile_Statics::ClassParams = {
	&ASlowGranadeProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASlowGranadeProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlowGranadeProjectile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowGranadeProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlowGranadeProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlowGranadeProjectile()
{
	if (!Z_Registration_Info_UClass_ASlowGranadeProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlowGranadeProjectile.OuterSingleton, Z_Construct_UClass_ASlowGranadeProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlowGranadeProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowGranadeProjectile);
ASlowGranadeProjectile::~ASlowGranadeProjectile() {}
// ********** End Class ASlowGranadeProjectile *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlowGranadeProjectile, ASlowGranadeProjectile::StaticClass, TEXT("ASlowGranadeProjectile"), &Z_Registration_Info_UClass_ASlowGranadeProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlowGranadeProjectile), 1100992973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h__Script_CaptureTheFlag_1664473752(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeProjectile_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
