// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGranadeAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseGranadeAbility() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseGranadeAbility ******************************************************
void UBaseGranadeAbility::StaticRegisterNativesUBaseGranadeAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseGranadeAbility;
UClass* UBaseGranadeAbility::GetPrivateStaticClass()
{
	using TClass = UBaseGranadeAbility;
	if (!Z_Registration_Info_UClass_UBaseGranadeAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseGranadeAbility"),
			Z_Registration_Info_UClass_UBaseGranadeAbility.InnerSingleton,
			StaticRegisterNativesUBaseGranadeAbility,
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
	return Z_Registration_Info_UClass_UBaseGranadeAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseGranadeAbility_NoRegister()
{
	return UBaseGranadeAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseGranadeAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseGranadeAbility.h" },
		{ "ModuleRelativePath", "Public/BaseGranadeAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGranadeAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseGranadeAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGranadeAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGranadeAbility_Statics::ClassParams = {
	&UBaseGranadeAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGranadeAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseGranadeAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseGranadeAbility()
{
	if (!Z_Registration_Info_UClass_UBaseGranadeAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGranadeAbility.OuterSingleton, Z_Construct_UClass_UBaseGranadeAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseGranadeAbility.OuterSingleton;
}
UBaseGranadeAbility::UBaseGranadeAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGranadeAbility);
UBaseGranadeAbility::~UBaseGranadeAbility() {}
// ********** End Class UBaseGranadeAbility ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGranadeAbility, UBaseGranadeAbility::StaticClass, TEXT("UBaseGranadeAbility"), &Z_Registration_Info_UClass_UBaseGranadeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGranadeAbility), 1520615431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_1341381159(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
