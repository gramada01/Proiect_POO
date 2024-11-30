// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Maui.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaui() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AEnemy();
ZELDA_API UClass* Z_Construct_UClass_AMaui();
ZELDA_API UClass* Z_Construct_UClass_AMaui_NoRegister();
// End Cross Module References

// Begin Class AMaui Function OverlapBegin
struct Z_Construct_UFunction_AMaui_OverlapBegin_Statics
{
	struct Maui_eventOverlapBegin_Parms
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
		{ "ModuleRelativePath", "Maui.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Maui_eventOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Maui_eventOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Maui_eventOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Maui_eventOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_FromSweep_SetBit(void* Obj)
{
	((Maui_eventOverlapBegin_Parms*)Obj)->FromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Maui_eventOverlapBegin_Parms), &Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_SweepRsult = { "SweepRsult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Maui_eventOverlapBegin_Parms, SweepRsult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepRsult_MetaData), NewProp_SweepRsult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaui_OverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_FromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaui_OverlapBegin_Statics::NewProp_SweepRsult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMaui_OverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaui_OverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaui, nullptr, "OverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AMaui_OverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaui_OverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMaui_OverlapBegin_Statics::Maui_eventOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMaui_OverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMaui_OverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMaui_OverlapBegin_Statics::Maui_eventOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMaui_OverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaui_OverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMaui::execOverlapBegin)
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
// End Class AMaui Function OverlapBegin

// Begin Class AMaui
void AMaui::StaticRegisterNativesAMaui()
{
	UClass* Class = AMaui::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverlapBegin", &AMaui::execOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaui);
UClass* Z_Construct_UClass_AMaui_NoRegister()
{
	return AMaui::StaticClass();
}
struct Z_Construct_UClass_AMaui_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Maui.h" },
		{ "ModuleRelativePath", "Maui.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Maui" },
		{ "ModuleRelativePath", "Maui.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaui_OverlapBegin, "OverlapBegin" }, // 3994415817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaui>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaui_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaui, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaui_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaui_Statics::NewProp_speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaui_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMaui_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaui_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaui_Statics::ClassParams = {
	&AMaui::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMaui_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMaui_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaui_Statics::Class_MetaDataParams), Z_Construct_UClass_AMaui_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMaui()
{
	if (!Z_Registration_Info_UClass_AMaui.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaui.OuterSingleton, Z_Construct_UClass_AMaui_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMaui.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<AMaui>()
{
	return AMaui::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMaui);
AMaui::~AMaui() {}
// End Class AMaui

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMaui, AMaui::StaticClass, TEXT("AMaui"), &Z_Registration_Info_UClass_AMaui, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaui), 2665474917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_2876404212(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
