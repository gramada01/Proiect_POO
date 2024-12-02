// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Spawner.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
ZELDA_API UClass* Z_Construct_UClass_ASpawner();
ZELDA_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
// End Cross Module References

// Begin Class ASpawner Function OverlapBegin
struct Z_Construct_UFunction_ASpawner_OverlapBegin_Statics
{
	struct Spawner_eventOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool FromSweep;
		FHitResult SweepRsult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepRsult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_FromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepRsult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_FromSweep_SetBit(void* Obj)
{
	((Spawner_eventOverlapBegin_Parms*)Obj)->FromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spawner_eventOverlapBegin_Parms), &Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_SweepRsult = { "SweepRsult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventOverlapBegin_Parms, SweepRsult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepRsult_MetaData), NewProp_SweepRsult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_FromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::NewProp_SweepRsult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "OverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::Spawner_eventOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::Spawner_eventOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_OverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_OverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_FromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepRsult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepRsult);
	P_NATIVE_END;
}
// End Class ASpawner Function OverlapBegin

// Begin Class ASpawner
void ASpawner::StaticRegisterNativesASpawner()
{
	UClass* Class = ASpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverlapBegin", &ASpawner::execOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
UClass* Z_Construct_UClass_ASpawner_NoRegister()
{
	return ASpawner::StaticClass();
}
struct Z_Construct_UClass_ASpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerSprite_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfEnemiesToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnPosition_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSpawned_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCooldownDurationInSeconds_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnerSprite;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfEnemiesToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySpawnPosition;
	static void NewProp_CanSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanSpawn;
	static void NewProp_IsSpawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSpawned;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnCooldownDurationInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_OverlapBegin, "OverlapBegin" }, // 396434951
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerSprite = { "SpawnerSprite", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, SpawnerSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnerSprite_MetaData), NewProp_SpawnerSprite_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_NumberOfEnemiesToSpawn = { "NumberOfEnemiesToSpawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, NumberOfEnemiesToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfEnemiesToSpawn_MetaData), NewProp_NumberOfEnemiesToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, EnemyToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyToSpawn_MetaData), NewProp_EnemyToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_EnemySpawnPosition = { "EnemySpawnPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, EnemySpawnPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpawnPosition_MetaData), NewProp_EnemySpawnPosition_MetaData) };
void Z_Construct_UClass_ASpawner_Statics::NewProp_CanSpawn_SetBit(void* Obj)
{
	((ASpawner*)Obj)->CanSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_CanSpawn = { "CanSpawn", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawner), &Z_Construct_UClass_ASpawner_Statics::NewProp_CanSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanSpawn_MetaData), NewProp_CanSpawn_MetaData) };
void Z_Construct_UClass_ASpawner_Statics::NewProp_IsSpawned_SetBit(void* Obj)
{
	((ASpawner*)Obj)->IsSpawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_IsSpawned = { "IsSpawned", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawner), &Z_Construct_UClass_ASpawner_Statics::NewProp_IsSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSpawned_MetaData), NewProp_IsSpawned_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldownDurationInSeconds = { "SpawnCooldownDurationInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, SpawnCooldownDurationInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCooldownDurationInSeconds_MetaData), NewProp_SpawnCooldownDurationInSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_NumberOfEnemiesToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_EnemyToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_EnemySpawnPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_CanSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_IsSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldownDurationInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
	&ASpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawner()
{
	if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<ASpawner>()
{
	return ASpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
ASpawner::~ASpawner() {}
// End Class ASpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 2853906157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_1945615475(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
