// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DamageGranadeAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDamageGranadeAbility() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UDamageGranadeAbility();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UDamageGranadeAbility_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDamageGranadeAbility ****************************************************
void UDamageGranadeAbility::StaticRegisterNativesUDamageGranadeAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDamageGranadeAbility;
UClass* UDamageGranadeAbility::GetPrivateStaticClass()
{
	using TClass = UDamageGranadeAbility;
	if (!Z_Registration_Info_UClass_UDamageGranadeAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DamageGranadeAbility"),
			Z_Registration_Info_UClass_UDamageGranadeAbility.InnerSingleton,
			StaticRegisterNativesUDamageGranadeAbility,
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
	return Z_Registration_Info_UClass_UDamageGranadeAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UDamageGranadeAbility_NoRegister()
{
	return UDamageGranadeAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDamageGranadeAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageGranadeAbility.h" },
		{ "ModuleRelativePath", "Public/DamageGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DamageGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DamageGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DamageGranadeAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageGranadeAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageGranadeAbility_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGranadeAbility, ExplosionDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamage_MetaData), NewProp_ExplosionDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageGranadeAbility_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGranadeAbility, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDamageGranadeAbility_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGranadeAbility, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageGranadeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGranadeAbility_Statics::NewProp_ExplosionDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGranadeAbility_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGranadeAbility_Statics::NewProp_DamageEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGranadeAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageGranadeAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGranadeAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGranadeAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageGranadeAbility_Statics::ClassParams = {
	&UDamageGranadeAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageGranadeAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGranadeAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGranadeAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageGranadeAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageGranadeAbility()
{
	if (!Z_Registration_Info_UClass_UDamageGranadeAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageGranadeAbility.OuterSingleton, Z_Construct_UClass_UDamageGranadeAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageGranadeAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageGranadeAbility);
UDamageGranadeAbility::~UDamageGranadeAbility() {}
// ********** End Class UDamageGranadeAbility ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeAbility_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageGranadeAbility, UDamageGranadeAbility::StaticClass, TEXT("UDamageGranadeAbility"), &Z_Registration_Info_UClass_UDamageGranadeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageGranadeAbility), 2598533121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeAbility_h__Script_CaptureTheFlag_119325361(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
