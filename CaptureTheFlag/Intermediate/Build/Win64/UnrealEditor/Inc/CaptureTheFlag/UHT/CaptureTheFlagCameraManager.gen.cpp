// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureTheFlagCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagCameraManager() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureTheFlagCameraManager();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureTheFlagCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureTheFlagCameraManager *********************************************
void ACaptureTheFlagCameraManager::StaticRegisterNativesACaptureTheFlagCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureTheFlagCameraManager;
UClass* ACaptureTheFlagCameraManager::GetPrivateStaticClass()
{
	using TClass = ACaptureTheFlagCameraManager;
	if (!Z_Registration_Info_UClass_ACaptureTheFlagCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureTheFlagCameraManager"),
			Z_Registration_Info_UClass_ACaptureTheFlagCameraManager.InnerSingleton,
			StaticRegisterNativesACaptureTheFlagCameraManager,
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
	return Z_Registration_Info_UClass_ACaptureTheFlagCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureTheFlagCameraManager_NoRegister()
{
	return ACaptureTheFlagCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "CaptureTheFlagCameraManager.h" },
		{ "ModuleRelativePath", "CaptureTheFlagCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics::ClassParams = {
	&ACaptureTheFlagCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureTheFlagCameraManager()
{
	if (!Z_Registration_Info_UClass_ACaptureTheFlagCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagCameraManager.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagCameraManager);
ACaptureTheFlagCameraManager::~ACaptureTheFlagCameraManager() {}
// ********** End Class ACaptureTheFlagCameraManager ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagCameraManager, ACaptureTheFlagCameraManager::StaticClass, TEXT("ACaptureTheFlagCameraManager"), &Z_Registration_Info_UClass_ACaptureTheFlagCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagCameraManager), 825454283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h__Script_CaptureTheFlag_3902916288(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CaptureTheFlag_Source_CaptureTheFlag_CaptureTheFlagCameraManager_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
