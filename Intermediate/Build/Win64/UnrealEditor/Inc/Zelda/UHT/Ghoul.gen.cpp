// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Ghoul.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhoul() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AEnemy();
ZELDA_API UClass* Z_Construct_UClass_AGhoul();
ZELDA_API UClass* Z_Construct_UClass_AGhoul_NoRegister();
// End Cross Module References

// Begin Class AGhoul
void AGhoul::StaticRegisterNativesAGhoul()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhoul);
UClass* Z_Construct_UClass_AGhoul_NoRegister()
{
	return AGhoul::StaticClass();
}
struct Z_Construct_UClass_AGhoul_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ghoul.h" },
		{ "ModuleRelativePath", "Ghoul.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhoul>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGhoul_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhoul_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhoul_Statics::ClassParams = {
	&AGhoul::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhoul_Statics::Class_MetaDataParams), Z_Construct_UClass_AGhoul_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGhoul()
{
	if (!Z_Registration_Info_UClass_AGhoul.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhoul.OuterSingleton, Z_Construct_UClass_AGhoul_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGhoul.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<AGhoul>()
{
	return AGhoul::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGhoul);
AGhoul::~AGhoul() {}
// End Class AGhoul

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Ghoul_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGhoul, AGhoul::StaticClass, TEXT("AGhoul"), &Z_Registration_Info_UClass_AGhoul, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhoul), 1366121537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Ghoul_h_2497227669(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Ghoul_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Ghoul_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
