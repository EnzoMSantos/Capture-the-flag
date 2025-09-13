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
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureCharacter Function HasFlag ***************************************
struct Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics
{
	struct CaptureCharacter_eventHasFlag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CaptureCharacter_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureCharacter_eventHasFlag_Parms), &Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "HasFlag", Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::CaptureCharacter_eventHasFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::CaptureCharacter_eventHasFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_HasFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_HasFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execHasFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFlag();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function HasFlag *****************************************

// ********** Begin Class ACaptureCharacter Function OnRep_HasFlag *********************************
struct Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "OnRep_HasFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execOnRep_HasFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HasFlag();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function OnRep_HasFlag ***********************************

// ********** Begin Class ACaptureCharacter Function Server_DropFlag *******************************
static FName NAME_ACaptureCharacter_Server_DropFlag = FName(TEXT("Server_DropFlag"));
void ACaptureCharacter::Server_DropFlag()
{
	UFunction* Func = FindFunctionChecked(NAME_ACaptureCharacter_Server_DropFlag);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "Server_DropFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execServer_DropFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropFlag_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function Server_DropFlag *********************************

// ********** Begin Class ACaptureCharacter Function TryScore **************************************
struct Z_Construct_UFunction_ACaptureCharacter_TryScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_TryScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "TryScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_TryScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_TryScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureCharacter_TryScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_TryScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execTryScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryScore();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function TryScore ****************************************

// ********** Begin Class ACaptureCharacter ********************************************************
void ACaptureCharacter::StaticRegisterNativesACaptureCharacter()
{
	UClass* Class = ACaptureCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasFlag", &ACaptureCharacter::execHasFlag },
		{ "OnRep_HasFlag", &ACaptureCharacter::execOnRep_HasFlag },
		{ "Server_DropFlag", &ACaptureCharacter::execServer_DropFlag },
		{ "TryScore", &ACaptureCharacter::execTryScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "Category", "Code|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Code|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Input System\n" },
#endif
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input System" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Code|Input" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Code|Input" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Code|Input" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFlag_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static void NewProp_bHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureCharacter_HasFlag, "HasFlag" }, // 407710074
		{ &Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag, "OnRep_HasFlag" }, // 2032714823
		{ &Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag, "Server_DropFlag" }, // 987774577
		{ &Z_Construct_UFunction_ACaptureCharacter_TryScore, "TryScore" }, // 1261385107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
void Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag_SetBit(void* Obj)
{
	((ACaptureCharacter*)Obj)->bHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag = { "bHasFlag", "OnRep_HasFlag", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACaptureCharacter), &Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFlag_MetaData), NewProp_bHasFlag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_CarriedFlag = { "CarriedFlag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, CarriedFlag), Z_Construct_UClass_AFlagActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedFlag_MetaData), NewProp_CarriedFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_CarriedFlag,
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
	FuncInfo,
	Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ACaptureCharacter, ACaptureCharacter::StaticClass, TEXT("ACaptureCharacter"), &Z_Registration_Info_UClass_ACaptureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureCharacter), 29314953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_2732070624(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
