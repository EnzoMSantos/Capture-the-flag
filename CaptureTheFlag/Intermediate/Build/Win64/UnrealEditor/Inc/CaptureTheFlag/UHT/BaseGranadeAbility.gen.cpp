// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGranadeAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseGranadeAbility() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AGranadeProjectile_NoRegister();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseGranadeAbility_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseGranadeAbility Function ApplyCooldown *******************************
struct Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGranadeAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseGranadeAbility, nullptr, "ApplyCooldown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGranadeAbility::execApplyCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyCooldown();
	P_NATIVE_END;
}
// ********** End Class UBaseGranadeAbility Function ApplyCooldown *********************************

// ********** Begin Class UBaseGranadeAbility Function ThrowGranade ********************************
struct Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGranadeAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseGranadeAbility, nullptr, "ThrowGranade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGranadeAbility::execThrowGranade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowGranade();
	P_NATIVE_END;
}
// ********** End Class UBaseGranadeAbility Function ThrowGranade **********************************

// ********** Begin Class UBaseGranadeAbility ******************************************************
void UBaseGranadeAbility::StaticRegisterNativesUBaseGranadeAbility()
{
	UClass* Class = UBaseGranadeAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyCooldown", &UBaseGranadeAbility::execApplyCooldown },
		{ "ThrowGranade", &UBaseGranadeAbility::execThrowGranade },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GranadeProjectileClass_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/BaseGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowForce_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/BaseGranadeAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/BaseGranadeAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GranadeProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGranadeAbility_ApplyCooldown, "ApplyCooldown" }, // 3648933321
		{ &Z_Construct_UFunction_UBaseGranadeAbility_ThrowGranade, "ThrowGranade" }, // 4142454351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGranadeAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseGranadeAbility_Statics::NewProp_GranadeProjectileClass = { "GranadeProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGranadeAbility, GranadeProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGranadeProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GranadeProjectileClass_MetaData), NewProp_GranadeProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseGranadeAbility_Statics::NewProp_ThrowForce = { "ThrowForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGranadeAbility, ThrowForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowForce_MetaData), NewProp_ThrowForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseGranadeAbility_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGranadeAbility, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTag_MetaData), NewProp_CooldownTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGranadeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGranadeAbility_Statics::NewProp_GranadeProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGranadeAbility_Statics::NewProp_ThrowForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGranadeAbility_Statics::NewProp_CooldownTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGranadeAbility_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UBaseGranadeAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGranadeAbility_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGranadeAbility);
UBaseGranadeAbility::~UBaseGranadeAbility() {}
// ********** End Class UBaseGranadeAbility ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGranadeAbility, UBaseGranadeAbility::StaticClass, TEXT("UBaseGranadeAbility"), &Z_Registration_Info_UClass_UBaseGranadeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGranadeAbility), 2679577733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_2764815422(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_BaseGranadeAbility_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
