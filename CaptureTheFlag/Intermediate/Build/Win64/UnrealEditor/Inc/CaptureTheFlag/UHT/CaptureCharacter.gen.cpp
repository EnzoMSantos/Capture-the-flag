// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureCharacter() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureCharacter ********************************************************
void ACaptureCharacter::StaticRegisterNativesACaptureCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureCharacter;
UClass* ACaptureCharacter::GetPrivateStaticClass()
{
	using TClass = ACaptureCharacter;
	if (!Z_Registration_Info_UClass_ACaptureCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureCharacter"),
			Z_Registration_Info_UClass_ACaptureCharacter.InnerSingleton,
			StaticRegisterNativesACaptureCharacter,
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
	return Z_Registration_Info_UClass_ACaptureCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureCharacter_NoRegister()
{
	return ACaptureCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CaptureCharacter.h" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACaptureCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureCharacter_Statics::ClassParams = {
	&ACaptureCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureCharacter()
{
	if (!Z_Registration_Info_UClass_ACaptureCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureCharacter.OuterSingleton, Z_Construct_UClass_ACaptureCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureCharacter);
ACaptureCharacter::~ACaptureCharacter() {}
// ********** End Class ACaptureCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureCharacter, ACaptureCharacter::StaticClass, TEXT("ACaptureCharacter"), &Z_Registration_Info_UClass_ACaptureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureCharacter), 2344788560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_3205280760(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
