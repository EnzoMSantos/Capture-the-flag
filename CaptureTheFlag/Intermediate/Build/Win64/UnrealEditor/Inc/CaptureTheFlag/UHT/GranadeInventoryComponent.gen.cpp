// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeInventoryComponent.h"
#include "Types/GranadeType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGranadeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UGranadeInventoryComponent();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_UGranadeInventoryComponent_NoRegister();
CAPTURETHEFLAG_API UEnum* Z_Construct_UEnum_CaptureTheFlag_EGranadeType();
CAPTURETHEFLAG_API UScriptStruct* Z_Construct_UScriptStruct_FGranadeData();
CAPTURETHEFLAG_API UScriptStruct* Z_Construct_UScriptStruct_FGranadeSlot();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGranadeInventoryComponent Function CanAddGranade ************************
struct Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics
{
	struct GranadeInventoryComponent_eventCanAddGranade_Parms
	{
		EGranadeType GranadeType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GranadeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GranadeType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_GranadeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_GranadeType = { "GranadeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventCanAddGranade_Parms, GranadeType), Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(0, nullptr) }; // 1437698260
void Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GranadeInventoryComponent_eventCanAddGranade_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GranadeInventoryComponent_eventCanAddGranade_Parms), &Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_GranadeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_GranadeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "CanAddGranade", Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::GranadeInventoryComponent_eventCanAddGranade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::GranadeInventoryComponent_eventCanAddGranade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execCanAddGranade)
{
	P_GET_ENUM(EGranadeType,Z_Param_GranadeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddGranade(EGranadeType(Z_Param_GranadeType));
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function CanAddGranade **************************

// ********** Begin Class UGranadeInventoryComponent Function GetGranadeCount **********************
struct Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics
{
	struct GranadeInventoryComponent_eventGetGranadeCount_Parms
	{
		EGranadeType GranadeType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GranadeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GranadeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::NewProp_GranadeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::NewProp_GranadeType = { "GranadeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventGetGranadeCount_Parms, GranadeType), Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(0, nullptr) }; // 1437698260
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventGetGranadeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::NewProp_GranadeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::NewProp_GranadeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "GetGranadeCount", Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::GranadeInventoryComponent_eventGetGranadeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::GranadeInventoryComponent_eventGetGranadeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execGetGranadeCount)
{
	P_GET_ENUM(EGranadeType,Z_Param_GranadeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGranadeCount(EGranadeType(Z_Param_GranadeType));
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function GetGranadeCount ************************

// ********** Begin Class UGranadeInventoryComponent Function GetMaxStackForType *******************
struct Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics
{
	struct GranadeInventoryComponent_eventGetMaxStackForType_Parms
	{
		EGranadeType GranadeType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GranadeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GranadeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::NewProp_GranadeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::NewProp_GranadeType = { "GranadeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventGetMaxStackForType_Parms, GranadeType), Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(0, nullptr) }; // 1437698260
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventGetMaxStackForType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::NewProp_GranadeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::NewProp_GranadeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "GetMaxStackForType", Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::GranadeInventoryComponent_eventGetMaxStackForType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::GranadeInventoryComponent_eventGetMaxStackForType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execGetMaxStackForType)
{
	P_GET_ENUM(EGranadeType,Z_Param_GranadeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxStackForType(EGranadeType(Z_Param_GranadeType));
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function GetMaxStackForType *********************

// ********** Begin Class UGranadeInventoryComponent Function OnRep_Inventory **********************
struct Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "OnRep_Inventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execOnRep_Inventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Inventory();
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function OnRep_Inventory ************************

// ********** Begin Class UGranadeInventoryComponent Function Server_AddGranade ********************
struct GranadeInventoryComponent_eventServer_AddGranade_Parms
{
	EGranadeType GranadeType;
	int32 Quantity;
};
static FName NAME_UGranadeInventoryComponent_Server_AddGranade = FName(TEXT("Server_AddGranade"));
void UGranadeInventoryComponent::Server_AddGranade(EGranadeType GranadeType, int32 Quantity)
{
	GranadeInventoryComponent_eventServer_AddGranade_Parms Parms;
	Parms.GranadeType=GranadeType;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UGranadeInventoryComponent_Server_AddGranade);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GranadeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GranadeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::NewProp_GranadeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::NewProp_GranadeType = { "GranadeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventServer_AddGranade_Parms, GranadeType), Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(0, nullptr) }; // 1437698260
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventServer_AddGranade_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::NewProp_GranadeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::NewProp_GranadeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "Server_AddGranade", Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::PropPointers), sizeof(GranadeInventoryComponent_eventServer_AddGranade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GranadeInventoryComponent_eventServer_AddGranade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execServer_AddGranade)
{
	P_GET_ENUM(EGranadeType,Z_Param_GranadeType);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddGranade_Implementation(EGranadeType(Z_Param_GranadeType),Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function Server_AddGranade **********************

// ********** Begin Class UGranadeInventoryComponent Function Server_UseGranade ********************
struct GranadeInventoryComponent_eventServer_UseGranade_Parms
{
	int32 SlotIndex;
};
static FName NAME_UGranadeInventoryComponent_Server_UseGranade = FName(TEXT("Server_UseGranade"));
void UGranadeInventoryComponent::Server_UseGranade(int32 SlotIndex)
{
	GranadeInventoryComponent_eventServer_UseGranade_Parms Parms;
	Parms.SlotIndex=SlotIndex;
	UFunction* Func = FindFunctionChecked(NAME_UGranadeInventoryComponent_Server_UseGranade);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventServer_UseGranade_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "Server_UseGranade", Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::PropPointers), sizeof(GranadeInventoryComponent_eventServer_UseGranade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GranadeInventoryComponent_eventServer_UseGranade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execServer_UseGranade)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_UseGranade_Implementation(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function Server_UseGranade **********************

// ********** Begin Class UGranadeInventoryComponent Function UseGranade ***************************
struct Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics
{
	struct GranadeInventoryComponent_eventUseGranade_Parms
	{
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GranadeInventoryComponent_eventUseGranade_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGranadeInventoryComponent, nullptr, "UseGranade", Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::GranadeInventoryComponent_eventUseGranade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::GranadeInventoryComponent_eventUseGranade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGranadeInventoryComponent::execUseGranade)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseGranade(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UGranadeInventoryComponent Function UseGranade *****************************

// ********** Begin Class UGranadeInventoryComponent ***********************************************
void UGranadeInventoryComponent::StaticRegisterNativesUGranadeInventoryComponent()
{
	UClass* Class = UGranadeInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAddGranade", &UGranadeInventoryComponent::execCanAddGranade },
		{ "GetGranadeCount", &UGranadeInventoryComponent::execGetGranadeCount },
		{ "GetMaxStackForType", &UGranadeInventoryComponent::execGetMaxStackForType },
		{ "OnRep_Inventory", &UGranadeInventoryComponent::execOnRep_Inventory },
		{ "Server_AddGranade", &UGranadeInventoryComponent::execServer_AddGranade },
		{ "Server_UseGranade", &UGranadeInventoryComponent::execServer_UseGranade },
		{ "UseGranade", &UGranadeInventoryComponent::execUseGranade },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGranadeInventoryComponent;
UClass* UGranadeInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UGranadeInventoryComponent;
	if (!Z_Registration_Info_UClass_UGranadeInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GranadeInventoryComponent"),
			Z_Registration_Info_UClass_UGranadeInventoryComponent.InnerSingleton,
			StaticRegisterNativesUGranadeInventoryComponent,
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
	return Z_Registration_Info_UClass_UGranadeInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGranadeInventoryComponent_NoRegister()
{
	return UGranadeInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGranadeInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GranadeInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GranadeDataMap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GranadeInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventorySlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventorySlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GranadeDataMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GranadeDataMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GranadeDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GranadeDataMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_CanAddGranade, "CanAddGranade" }, // 3815922991
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_GetGranadeCount, "GetGranadeCount" }, // 1931366425
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_GetMaxStackForType, "GetMaxStackForType" }, // 3987104429
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_OnRep_Inventory, "OnRep_Inventory" }, // 1410783503
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_Server_AddGranade, "Server_AddGranade" }, // 3134068814
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_Server_UseGranade, "Server_UseGranade" }, // 2034443594
		{ &Z_Construct_UFunction_UGranadeInventoryComponent_UseGranade, "UseGranade" }, // 1212728676
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGranadeInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_InventorySlots_Inner = { "InventorySlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGranadeSlot, METADATA_PARAMS(0, nullptr) }; // 1021656899
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_InventorySlots = { "InventorySlots", "OnRep_Inventory", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGranadeInventoryComponent, InventorySlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlots_MetaData), NewProp_InventorySlots_MetaData) }; // 1021656899
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap_ValueProp = { "GranadeDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGranadeData, METADATA_PARAMS(0, nullptr) }; // 1368813443
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap_Key_KeyProp = { "GranadeDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CaptureTheFlag_EGranadeType, METADATA_PARAMS(0, nullptr) }; // 1437698260
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap = { "GranadeDataMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGranadeInventoryComponent, GranadeDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GranadeDataMap_MetaData), NewProp_GranadeDataMap_MetaData) }; // 1437698260 1368813443
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGranadeInventoryComponent, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGranadeInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_InventorySlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_InventorySlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_GranadeDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGranadeInventoryComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGranadeInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGranadeInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGranadeInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGranadeInventoryComponent_Statics::ClassParams = {
	&UGranadeInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGranadeInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGranadeInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGranadeInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGranadeInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGranadeInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UGranadeInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGranadeInventoryComponent.OuterSingleton, Z_Construct_UClass_UGranadeInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGranadeInventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UGranadeInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_InventorySlots(TEXT("InventorySlots"));
	const bool bIsValid = true
		&& Name_InventorySlots == ClassReps[(int32)ENetFields_Private::InventorySlots].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGranadeInventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UGranadeInventoryComponent);
UGranadeInventoryComponent::~UGranadeInventoryComponent() {}
// ********** End Class UGranadeInventoryComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGranadeInventoryComponent, UGranadeInventoryComponent::StaticClass, TEXT("UGranadeInventoryComponent"), &Z_Registration_Info_UClass_UGranadeInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGranadeInventoryComponent), 904313944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h__Script_CaptureTheFlag_2652429741(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_GranadeInventoryComponent_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
