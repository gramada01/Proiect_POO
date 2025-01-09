// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Originator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOriginator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_UOriginator();
ZELDA_API UClass* Z_Construct_UClass_UOriginator_NoRegister();
// End Cross Module References

// Begin Class UOriginator
void UOriginator::StaticRegisterNativesUOriginator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOriginator);
UClass* Z_Construct_UClass_UOriginator_NoRegister()
{
	return UOriginator::StaticClass();
}
struct Z_Construct_UClass_UOriginator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @class UOriginator\n/// @brief A class that is responsible for creating and restoring mementos.\n" },
#endif
		{ "IncludePath", "Originator.h" },
		{ "ModuleRelativePath", "Originator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UOriginator\n@brief A class that is responsible for creating and restoring mementos." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOriginator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOriginator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOriginator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOriginator_Statics::ClassParams = {
	&UOriginator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOriginator_Statics::Class_MetaDataParams), Z_Construct_UClass_UOriginator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOriginator()
{
	if (!Z_Registration_Info_UClass_UOriginator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOriginator.OuterSingleton, Z_Construct_UClass_UOriginator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOriginator.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<UOriginator>()
{
	return UOriginator::StaticClass();
}
UOriginator::UOriginator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOriginator);
UOriginator::~UOriginator() {}
// End Class UOriginator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Originator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOriginator, UOriginator::StaticClass, TEXT("UOriginator"), &Z_Registration_Info_UClass_UOriginator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOriginator), 3674984379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Originator_h_985182591(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Originator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Originator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
