// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlagActor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFlagActor() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_ACaptureCharacter_NoRegister();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor();
CAPTURETHEFLAG_API UClass* Z_Construct_UClass_AFlagActor_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlag();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFlagActor Function OnOverlapBegin ***************************************
struct Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics
{
	struct FlagActor_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FlagActor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlagActor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFlagActor, nullptr, "OnOverlapBegin", Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::FlagActor_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::FlagActor_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlagActor_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlagActor_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlagActor::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AFlagActor Function OnOverlapBegin *****************************************

// ********** Begin Class AFlagActor Function OnRep_Carrier ****************************************
struct Z_Construct_UFunction_AFlagActor_OnRep_Carrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlagActor_OnRep_Carrier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFlagActor, nullptr, "OnRep_Carrier", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_OnRep_Carrier_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlagActor_OnRep_Carrier_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFlagActor_OnRep_Carrier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlagActor_OnRep_Carrier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlagActor::execOnRep_Carrier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Carrier();
	P_NATIVE_END;
}
// ********** End Class AFlagActor Function OnRep_Carrier ******************************************

// ********** Begin Class AFlagActor Function Server_DropFlag **************************************
struct FlagActor_eventServer_DropFlag_Parms
{
	FVector DropLocation;
};
static FName NAME_AFlagActor_Server_DropFlag = FName(TEXT("Server_DropFlag"));
void AFlagActor::Server_DropFlag(FVector DropLocation)
{
	FlagActor_eventServer_DropFlag_Parms Parms;
	Parms.DropLocation=DropLocation;
	UFunction* Func = FindFunctionChecked(NAME_AFlagActor_Server_DropFlag);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventServer_DropFlag_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFlagActor, nullptr, "Server_DropFlag", Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::PropPointers), sizeof(FlagActor_eventServer_DropFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FlagActor_eventServer_DropFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlagActor_Server_DropFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlagActor_Server_DropFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlagActor::execServer_DropFlag)
{
	P_GET_STRUCT(FVector,Z_Param_DropLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropFlag_Implementation(Z_Param_DropLocation);
	P_NATIVE_END;
}
// ********** End Class AFlagActor Function Server_DropFlag ****************************************

// ********** Begin Class AFlagActor Function Server_PickupFlag ************************************
struct FlagActor_eventServer_PickupFlag_Parms
{
	ACaptureCharacter* NewCarrier;
};
static FName NAME_AFlagActor_Server_PickupFlag = FName(TEXT("Server_PickupFlag"));
void AFlagActor::Server_PickupFlag(ACaptureCharacter* NewCarrier)
{
	FlagActor_eventServer_PickupFlag_Parms Parms;
	Parms.NewCarrier=NewCarrier;
	UFunction* Func = FindFunctionChecked(NAME_AFlagActor_Server_PickupFlag);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCarrier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::NewProp_NewCarrier = { "NewCarrier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagActor_eventServer_PickupFlag_Parms, NewCarrier), Z_Construct_UClass_ACaptureCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::NewProp_NewCarrier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFlagActor, nullptr, "Server_PickupFlag", Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::PropPointers), sizeof(FlagActor_eventServer_PickupFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FlagActor_eventServer_PickupFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlagActor_Server_PickupFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlagActor_Server_PickupFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlagActor::execServer_PickupFlag)
{
	P_GET_OBJECT(ACaptureCharacter,Z_Param_NewCarrier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PickupFlag_Implementation(Z_Param_NewCarrier);
	P_NATIVE_END;
}
// ********** End Class AFlagActor Function Server_PickupFlag **************************************

// ********** Begin Class AFlagActor Function Server_ResetFlag *************************************
static FName NAME_AFlagActor_Server_ResetFlag = FName(TEXT("Server_ResetFlag"));
void AFlagActor::Server_ResetFlag()
{
	UFunction* Func = FindFunctionChecked(NAME_AFlagActor_Server_ResetFlag);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFlagActor_Server_ResetFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlagActor_Server_ResetFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFlagActor, nullptr, "Server_ResetFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagActor_Server_ResetFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlagActor_Server_ResetFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFlagActor_Server_ResetFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlagActor_Server_ResetFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlagActor::execServer_ResetFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ResetFlag_Implementation();
	P_NATIVE_END;
}
// ********** End Class AFlagActor Function Server_ResetFlag ***************************************

// ********** Begin Class AFlagActor ***************************************************************
void AFlagActor::StaticRegisterNativesAFlagActor()
{
	UClass* Class = AFlagActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &AFlagActor::execOnOverlapBegin },
		{ "OnRep_Carrier", &AFlagActor::execOnRep_Carrier },
		{ "Server_DropFlag", &AFlagActor::execServer_DropFlag },
		{ "Server_PickupFlag", &AFlagActor::execServer_PickupFlag },
		{ "Server_ResetFlag", &AFlagActor::execServer_ResetFlag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFlagActor;
UClass* AFlagActor::GetPrivateStaticClass()
{
	using TClass = AFlagActor;
	if (!Z_Registration_Info_UClass_AFlagActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FlagActor"),
			Z_Registration_Info_UClass_AFlagActor.InnerSingleton,
			StaticRegisterNativesAFlagActor,
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
	return Z_Registration_Info_UClass_AFlagActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AFlagActor_NoRegister()
{
	return AFlagActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFlagActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FlagActor.h" },
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Code|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Carrier_MetaData[] = {
		{ "Category", "FlagActor" },
		{ "ModuleRelativePath", "Public/FlagActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Carrier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlagActor_OnOverlapBegin, "OnOverlapBegin" }, // 881440577
		{ &Z_Construct_UFunction_AFlagActor_OnRep_Carrier, "OnRep_Carrier" }, // 198230527
		{ &Z_Construct_UFunction_AFlagActor_Server_DropFlag, "Server_DropFlag" }, // 4066674655
		{ &Z_Construct_UFunction_AFlagActor_Server_PickupFlag, "Server_PickupFlag" }, // 1228848345
		{ &Z_Construct_UFunction_AFlagActor_Server_ResetFlag, "Server_ResetFlag" }, // 2347320267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlagActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlagActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlagActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlagActor_Statics::NewProp_Carrier = { "Carrier", "OnRep_Carrier", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlagActor, Carrier), Z_Construct_UClass_ACaptureCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Carrier_MetaData), NewProp_Carrier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlagActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagActor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagActor_Statics::NewProp_Carrier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlagActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlagActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlagActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlagActor_Statics::ClassParams = {
	&AFlagActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlagActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlagActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlagActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlagActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlagActor()
{
	if (!Z_Registration_Info_UClass_AFlagActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlagActor.OuterSingleton, Z_Construct_UClass_AFlagActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlagActor.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AFlagActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Carrier(TEXT("Carrier"));
	const bool bIsValid = true
		&& Name_Carrier == ClassReps[(int32)ENetFields_Private::Carrier].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFlagActor"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlagActor);
AFlagActor::~AFlagActor() {}
// ********** End Class AFlagActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h__Script_CaptureTheFlag_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlagActor, AFlagActor::StaticClass, TEXT("AFlagActor"), &Z_Registration_Info_UClass_AFlagActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlagActor), 1856715833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h__Script_CaptureTheFlag_1932502477(TEXT("/Script/CaptureTheFlag"),
	Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h__Script_CaptureTheFlag_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Capture_the_flag_CaptureTheFlag_Source_CaptureTheFlag_Public_FlagActor_h__Script_CaptureTheFlag_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
