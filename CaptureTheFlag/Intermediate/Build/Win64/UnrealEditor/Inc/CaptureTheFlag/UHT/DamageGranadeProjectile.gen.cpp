// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DamageGranadeProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDamageGranadeProjectile() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ADamageGranadeProjectile();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ADamageGranadeProjectile_NoRegister();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADamageGranadeProjectile *************************************************
void ADamageGranadeProjectile::StaticRegisterNativesADamageGranadeProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADamageGranadeProjectile;
UClass* ADamageGranadeProjectile::GetPrivateStaticClass()
{
	using TClass = ADamageGranadeProjectile;
	if (!Z_Registration_Info_UClass_ADamageGranadeProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DamageGranadeProjectile"),
			Z_Registration_Info_UClass_ADamageGranadeProjectile.InnerSingleton,
			StaticRegisterNativesADamageGranadeProjectile,
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
	return Z_Registration_Info_UClass_ADamageGranadeProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_ADamageGranadeProjectile_NoRegister()
{
	return ADamageGranadeProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADamageGranadeProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageGranadeProjectile.h" },
		{ "ModuleRelativePath", "Public/DamageGranadeProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DamageGranadeProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DamageGranadeProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageGranadeProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageGranadeProjectile_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADamageGranadeProjectile, ExplosionDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamage_MetaData), NewProp_ExplosionDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageGranadeProjectile_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADamageGranadeProjectile, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageGranadeProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageGranadeProjectile_Statics::NewProp_ExplosionDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageGranadeProjectile_Statics::NewProp_ExplosionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageGranadeProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADamageGranadeProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGranadeProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageGranadeProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADamageGranadeProjectile_Statics::ClassParams = {
	&ADamageGranadeProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADamageGranadeProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADamageGranadeProjectile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageGranadeProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ADamageGranadeProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADamageGranadeProjectile()
{
	if (!Z_Registration_Info_UClass_ADamageGranadeProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADamageGranadeProjectile.OuterSingleton, Z_Construct_UClass_ADamageGranadeProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADamageGranadeProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageGranadeProjectile);
ADamageGranadeProjectile::~ADamageGranadeProjectile() {}
// ********** End Class ADamageGranadeProjectile ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADamageGranadeProjectile, ADamageGranadeProjectile::StaticClass, TEXT("ADamageGranadeProjectile"), &Z_Registration_Info_UClass_ADamageGranadeProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADamageGranadeProjectile), 825411546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h__Script_CaptureTheFlag_2739730778(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_DamageGranadeProjectile_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
