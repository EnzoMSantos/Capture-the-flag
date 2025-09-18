// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureCharacter.h"
#include "UObject/CoreNet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureCharacter() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter_NoRegister();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureCharacter Function GetAbilitySystemComponent *********************
struct Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics
{
	struct CaptureCharacter_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureCharacter_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "GetAbilitySystemComponent", Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::CaptureCharacter_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::CaptureCharacter_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function GetAbilitySystemComponent ***********************

// ********** Begin Class ACaptureCharacter Function GetReplicatedControlRotation ******************
struct Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics
{
	struct CaptureCharacter_eventGetReplicatedControlRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureCharacter_eventGetReplicatedControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "GetReplicatedControlRotation", Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::CaptureCharacter_eventGetReplicatedControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::CaptureCharacter_eventGetReplicatedControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execGetReplicatedControlRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetReplicatedControlRotation();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function GetReplicatedControlRotation ********************

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

// ********** Begin Class ACaptureCharacter Function Server_ThrowGranade ***************************
static FName NAME_ACaptureCharacter_Server_ThrowGranade = FName(TEXT("Server_ThrowGranade"));
void ACaptureCharacter::Server_ThrowGranade()
{
	UFunction* Func = FindFunctionChecked(NAME_ACaptureCharacter_Server_ThrowGranade);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "Server_ThrowGranade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execServer_ThrowGranade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ThrowGranade_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function Server_ThrowGranade *****************************

// ********** Begin Class ACaptureCharacter Function ServerSetControlRotation **********************
struct CaptureCharacter_eventServerSetControlRotation_Parms
{
	FRotator NewRotation;
};
static FName NAME_ACaptureCharacter_ServerSetControlRotation = FName(TEXT("ServerSetControlRotation"));
void ACaptureCharacter::ServerSetControlRotation(FRotator NewRotation)
{
	CaptureCharacter_eventServerSetControlRotation_Parms Parms;
	Parms.NewRotation=NewRotation;
	UFunction* Func = FindFunctionChecked(NAME_ACaptureCharacter_ServerSetControlRotation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureCharacter_eventServerSetControlRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::NewProp_NewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "ServerSetControlRotation", Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::PropPointers), sizeof(CaptureCharacter_eventServerSetControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CaptureCharacter_eventServerSetControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execServerSetControlRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetControlRotation_Validate(Z_Param_NewRotation))
	{
		RPC_ValidateFailed(TEXT("ServerSetControlRotation_Validate"));
		return;
	}
	P_THIS->ServerSetControlRotation_Implementation(Z_Param_NewRotation);
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function ServerSetControlRotation ************************

// ********** Begin Class ACaptureCharacter Function SetHasFlag ************************************
struct Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics
{
	struct CaptureCharacter_eventSetHasFlag_Parms
	{
		bool bNewHasFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::NewProp_bNewHasFlag_SetBit(void* Obj)
{
	((CaptureCharacter_eventSetHasFlag_Parms*)Obj)->bNewHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::NewProp_bNewHasFlag = { "bNewHasFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureCharacter_eventSetHasFlag_Parms), &Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::NewProp_bNewHasFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::NewProp_bNewHasFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "SetHasFlag", Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::CaptureCharacter_eventSetHasFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::CaptureCharacter_eventSetHasFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_SetHasFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_SetHasFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execSetHasFlag)
{
	P_GET_UBOOL(Z_Param_bNewHasFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasFlag(Z_Param_bNewHasFlag);
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function SetHasFlag **************************************

// ********** Begin Class ACaptureCharacter Function SetOutlineEnabled *****************************
struct Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics
{
	struct CaptureCharacter_eventSetOutlineEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Outline\n" },
#endif
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outline" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((CaptureCharacter_eventSetOutlineEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureCharacter_eventSetOutlineEnabled_Parms), &Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "SetOutlineEnabled", Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::CaptureCharacter_eventSetOutlineEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::CaptureCharacter_eventSetOutlineEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execSetOutlineEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutlineEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function SetOutlineEnabled *******************************

// ********** Begin Class ACaptureCharacter Function ThrowGranade **********************************
struct Z_Construct_UFunction_ACaptureCharacter_ThrowGranade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_ThrowGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "ThrowGranade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_ThrowGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_ThrowGranade_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureCharacter_ThrowGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_ThrowGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execThrowGranade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowGranade();
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function ThrowGranade ************************************

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

// ********** Begin Class ACaptureCharacter Function UpdateOutlineColor ****************************
struct Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics
{
	struct CaptureCharacter_eventUpdateOutlineColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureCharacter_eventUpdateOutlineColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureCharacter, nullptr, "UpdateOutlineColor", Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::CaptureCharacter_eventUpdateOutlineColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::CaptureCharacter_eventUpdateOutlineColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureCharacter::execUpdateOutlineColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateOutlineColor(Z_Param_Out_NewColor);
	P_NATIVE_END;
}
// ********** End Class ACaptureCharacter Function UpdateOutlineColor ******************************

// ********** Begin Class ACaptureCharacter ********************************************************
void ACaptureCharacter::StaticRegisterNativesACaptureCharacter()
{
	UClass* Class = ACaptureCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilitySystemComponent", &ACaptureCharacter::execGetAbilitySystemComponent },
		{ "GetReplicatedControlRotation", &ACaptureCharacter::execGetReplicatedControlRotation },
		{ "HasFlag", &ACaptureCharacter::execHasFlag },
		{ "OnRep_HasFlag", &ACaptureCharacter::execOnRep_HasFlag },
		{ "Server_DropFlag", &ACaptureCharacter::execServer_DropFlag },
		{ "Server_ThrowGranade", &ACaptureCharacter::execServer_ThrowGranade },
		{ "ServerSetControlRotation", &ACaptureCharacter::execServerSetControlRotation },
		{ "SetHasFlag", &ACaptureCharacter::execSetHasFlag },
		{ "SetOutlineEnabled", &ACaptureCharacter::execSetOutlineEnabled },
		{ "ThrowGranade", &ACaptureCharacter::execThrowGranade },
		{ "TryScore", &ACaptureCharacter::execTryScore },
		{ "UpdateOutlineColor", &ACaptureCharacter::execUpdateOutlineColor },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "Category", "Code|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedControlRotation_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowGrenadeAction_MetaData[] = {
		{ "Category", "Code|Input" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFlag_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/CaptureCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedControlRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowGrenadeAction;
	static void NewProp_bHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureCharacter_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 2427631840
		{ &Z_Construct_UFunction_ACaptureCharacter_GetReplicatedControlRotation, "GetReplicatedControlRotation" }, // 978726557
		{ &Z_Construct_UFunction_ACaptureCharacter_HasFlag, "HasFlag" }, // 407710074
		{ &Z_Construct_UFunction_ACaptureCharacter_OnRep_HasFlag, "OnRep_HasFlag" }, // 2032714823
		{ &Z_Construct_UFunction_ACaptureCharacter_Server_DropFlag, "Server_DropFlag" }, // 987774577
		{ &Z_Construct_UFunction_ACaptureCharacter_Server_ThrowGranade, "Server_ThrowGranade" }, // 1572412633
		{ &Z_Construct_UFunction_ACaptureCharacter_ServerSetControlRotation, "ServerSetControlRotation" }, // 3480397966
		{ &Z_Construct_UFunction_ACaptureCharacter_SetHasFlag, "SetHasFlag" }, // 3395301871
		{ &Z_Construct_UFunction_ACaptureCharacter_SetOutlineEnabled, "SetOutlineEnabled" }, // 1114742620
		{ &Z_Construct_UFunction_ACaptureCharacter_ThrowGranade, "ThrowGranade" }, // 517457470
		{ &Z_Construct_UFunction_ACaptureCharacter_TryScore, "TryScore" }, // 1261385107
		{ &Z_Construct_UFunction_ACaptureCharacter_UpdateOutlineColor, "UpdateOutlineColor" }, // 1360318049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, AttributeSet), Z_Construct_UClass_UBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_ReplicatedControlRotation = { "ReplicatedControlRotation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, ReplicatedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedControlRotation_MetaData), NewProp_ReplicatedControlRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_ThrowGrenadeAction = { "ThrowGrenadeAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureCharacter, ThrowGrenadeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowGrenadeAction_MetaData), NewProp_ThrowGrenadeAction_MetaData) };
void Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag_SetBit(void* Obj)
{
	((ACaptureCharacter*)Obj)->bHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag = { "bHasFlag", "OnRep_HasFlag", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACaptureCharacter), &Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_bHasFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFlag_MetaData), NewProp_bHasFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_ReplicatedControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureCharacter_Statics::NewProp_ThrowGrenadeAction,
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
	static FName Name_ReplicatedControlRotation(TEXT("ReplicatedControlRotation"));
	static FName Name_bHasFlag(TEXT("bHasFlag"));
	const bool bIsValid = true
		&& Name_ReplicatedControlRotation == ClassReps[(int32)ENetFields_Private::ReplicatedControlRotation].Property->GetFName()
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
		{ Z_Construct_UClass_ACaptureCharacter, ACaptureCharacter::StaticClass, TEXT("ACaptureCharacter"), &Z_Registration_Info_UClass_ACaptureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureCharacter), 3423480214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_140897124(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_CaptureCharacter_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
