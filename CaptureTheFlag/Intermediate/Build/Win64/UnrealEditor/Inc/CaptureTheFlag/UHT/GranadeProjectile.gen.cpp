// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGranadeProjectile() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGranadeProjectile *******************************************************
void AGranadeProjectile::StaticRegisterNativesAGranadeProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGranadeProjectile;
UClass* AGranadeProjectile::GetPrivateStaticClass()
{
	using TClass = AGranadeProjectile;
	if (!Z_Registration_Info_UClass_AGranadeProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GranadeProjectile"),
			Z_Registration_Info_UClass_AGranadeProjectile.InnerSingleton,
			StaticRegisterNativesAGranadeProjectile,
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
	return Z_Registration_Info_UClass_AGranadeProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AGranadeProjectile_NoRegister()
{
	return AGranadeProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGranadeProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GranadeProjectile.h" },
		{ "ModuleRelativePath", "Public/GranadeProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGranadeProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGranadeProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGranadeProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGranadeProjectile_Statics::ClassParams = {
	&AGranadeProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGranadeProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AGranadeProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGranadeProjectile()
{
	if (!Z_Registration_Info_UClass_AGranadeProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGranadeProjectile.OuterSingleton, Z_Construct_UClass_AGranadeProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGranadeProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGranadeProjectile);
AGranadeProjectile::~AGranadeProjectile() {}
// ********** End Class AGranadeProjectile *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGranadeProjectile, AGranadeProjectile::StaticClass, TEXT("AGranadeProjectile"), &Z_Registration_Info_UClass_AGranadeProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGranadeProjectile), 1023793984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h__Script_CaptureTheFlag_1097587472(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeProjectile_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
