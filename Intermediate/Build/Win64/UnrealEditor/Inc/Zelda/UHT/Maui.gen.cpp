// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Maui.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaui() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AEnemy();
ZELDA_API UClass* Z_Construct_UClass_AMaui();
ZELDA_API UClass* Z_Construct_UClass_AMaui_NoRegister();
// End Cross Module References

// Begin Class AMaui
void AMaui::StaticRegisterNativesAMaui()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaui>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AMaui, AMaui::StaticClass, TEXT("AMaui"), &Z_Registration_Info_UClass_AMaui, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaui), 2043729506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_1749347663(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Maui_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
