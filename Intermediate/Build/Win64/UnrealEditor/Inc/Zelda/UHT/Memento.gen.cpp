// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Memento.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemento() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_UMemento();
ZELDA_API UClass* Z_Construct_UClass_UMemento_NoRegister();
// End Cross Module References

// Begin Class UMemento
void UMemento::StaticRegisterNativesUMemento()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemento);
UClass* Z_Construct_UClass_UMemento_NoRegister()
{
	return UMemento::StaticClass();
}
struct Z_Construct_UClass_UMemento_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @class UMemento\n/// @brief A class that represents a memento used to store the state of the game.\n" },
#endif
		{ "IncludePath", "Memento.h" },
		{ "ModuleRelativePath", "Memento.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UMemento\n@brief A class that represents a memento used to store the state of the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The position of the player.\n" },
#endif
		{ "ModuleRelativePath", "Memento.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The position of the player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKills_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The number of kills by the player.\n" },
#endif
		{ "ModuleRelativePath", "Memento.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of kills by the player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerKills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemento>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMemento_Statics::NewProp_PlayerPosition = { "PlayerPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemento, PlayerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPosition_MetaData), NewProp_PlayerPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMemento_Statics::NewProp_PlayerKills = { "PlayerKills", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemento, PlayerKills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerKills_MetaData), NewProp_PlayerKills_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMemento_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemento_Statics::NewProp_PlayerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemento_Statics::NewProp_PlayerKills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemento_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMemento_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemento_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemento_Statics::ClassParams = {
	&UMemento::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMemento_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMemento_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemento_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemento_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMemento()
{
	if (!Z_Registration_Info_UClass_UMemento.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemento.OuterSingleton, Z_Construct_UClass_UMemento_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMemento.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<UMemento>()
{
	return UMemento::StaticClass();
}
UMemento::UMemento(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMemento);
UMemento::~UMemento() {}
// End Class UMemento

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Memento_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMemento, UMemento::StaticClass, TEXT("UMemento"), &Z_Registration_Info_UClass_UMemento, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemento), 1755576577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Memento_h_120835106(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Memento_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Memento_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
