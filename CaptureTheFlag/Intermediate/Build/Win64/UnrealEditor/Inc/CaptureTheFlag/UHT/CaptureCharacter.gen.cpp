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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFlag_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag_SetBit(void* Obj)
{
	((ACaptureCharacter*)Obj)->bHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag = { "bHasFlag", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACaptureCharacter), &Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFlag_MetaData), NewProp_bHasFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers),
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
#if VALIDATE_CLASS_REPS
void ACaptureCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bHasFlag(TEXT("bHasFlag"));
	const bool bIsValid = true
		&& Name_bHasFlag == ClassReps[(int32)ENetFields_Private::bHasFlag].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACaptureCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureCharacter);
ACaptureCharacter::~ACaptureCharacter() {}
// ********** End Class ACaptureCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureCharacter, ACaptureCharacter::StaticClass, TEXT("ACaptureCharacter"), &Z_Registration_Info_UClass_ACaptureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureCharacter), 698813804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_648176797(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
