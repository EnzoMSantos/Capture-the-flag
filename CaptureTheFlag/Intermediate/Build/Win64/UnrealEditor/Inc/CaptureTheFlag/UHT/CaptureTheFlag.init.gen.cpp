// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureTheFlag_init() {}
	CAPTURETHEFLAG_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlag_BulletCountUpdatedDelegate__DelegateSignature();
	CAPTURETHEFLAG_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlag_DamagedDelegate__DelegateSignature();
	CAPTURETHEFLAG_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlag_PawnDeathDelegate__DelegateSignature();
	CAPTURETHEFLAG_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlag_SprintStateChangedDelegate__DelegateSignature();
	CAPTURETHEFLAG_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlag_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CaptureTheFlag;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CaptureTheFlag()
	{
		if (!Z_Registration_Info_UPackage__Script_CaptureTheFlag.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CaptureTheFlag_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CaptureTheFlag_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CaptureTheFlag_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CaptureTheFlag_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CaptureTheFlag_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CaptureTheFlag",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8F9DB8FA,
				0x90C4FBD5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CaptureTheFlag.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CaptureTheFlag.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CaptureTheFlag(Z_Construct_UPackage__Script_CaptureTheFlag, TEXT("/Script/CaptureTheFlag"), Z_Registration_Info_UPackage__Script_CaptureTheFlag, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8F9DB8FA, 0x90C4FBD5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
