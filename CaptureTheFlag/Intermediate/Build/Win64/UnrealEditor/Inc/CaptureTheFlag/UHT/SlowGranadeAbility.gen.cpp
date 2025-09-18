// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlowGranadeAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlowGranadeAbility() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_USlowGranadeAbility();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_USlowGranadeAbility_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USlowGranadeAbility ******************************************************
void USlowGranadeAbility::StaticRegisterNativesUSlowGranadeAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USlowGranadeAbility;
UClass* USlowGranadeAbility::GetPrivateStaticClass()
{
	using TClass = USlowGranadeAbility;
	if (!Z_Registration_Info_UClass_USlowGranadeAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlowGranadeAbility"),
			Z_Registration_Info_UClass_USlowGranadeAbility.InnerSingleton,
			StaticRegisterNativesUSlowGranadeAbility,
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
	return Z_Registration_Info_UClass_USlowGranadeAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_USlowGranadeAbility_NoRegister()
{
	return USlowGranadeAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USlowGranadeAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SlowGranadeAbility.h" },
		{ "ModuleRelativePath", "Public/SlowGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowDuration_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowPercentage_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowEffectClass_MetaData[] = {
		{ "Category", "Slow" },
		{ "ModuleRelativePath", "Public/SlowGranadeAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowPercentage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlowEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlowGranadeAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlowGranadeAbility_Statics::NewProp_SlowDuration = { "SlowDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlowGranadeAbility, SlowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowDuration_MetaData), NewProp_SlowDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlowGranadeAbility_Statics::NewProp_SlowPercentage = { "SlowPercentage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlowGranadeAbility, SlowPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowPercentage_MetaData), NewProp_SlowPercentage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USlowGranadeAbility_Statics::NewProp_SlowEffectClass = { "SlowEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlowGranadeAbility, SlowEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowEffectClass_MetaData), NewProp_SlowEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlowGranadeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlowGranadeAbility_Statics::NewProp_SlowDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlowGranadeAbility_Statics::NewProp_SlowPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlowGranadeAbility_Statics::NewProp_SlowEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlowGranadeAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlowGranadeAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGranadeAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlowGranadeAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlowGranadeAbility_Statics::ClassParams = {
	&USlowGranadeAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlowGranadeAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlowGranadeAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlowGranadeAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USlowGranadeAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlowGranadeAbility()
{
	if (!Z_Registration_Info_UClass_USlowGranadeAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlowGranadeAbility.OuterSingleton, Z_Construct_UClass_USlowGranadeAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlowGranadeAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlowGranadeAbility);
USlowGranadeAbility::~USlowGranadeAbility() {}
// ********** End Class USlowGranadeAbility ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeAbility_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlowGranadeAbility, USlowGranadeAbility::StaticClass, TEXT("USlowGranadeAbility"), &Z_Registration_Info_UClass_USlowGranadeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlowGranadeAbility), 3392515196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeAbility_h__Script_CaptureTheFlag_3591639270(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_SlowGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
