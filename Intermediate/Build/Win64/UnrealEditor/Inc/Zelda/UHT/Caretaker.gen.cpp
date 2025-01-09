// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Caretaker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaretaker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_UCaretaker();
ZELDA_API UClass* Z_Construct_UClass_UCaretaker_NoRegister();
// End Cross Module References

// Begin Class UCaretaker
void UCaretaker::StaticRegisterNativesUCaretaker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCaretaker);
UClass* Z_Construct_UClass_UCaretaker_NoRegister()
{
	return UCaretaker::StaticClass();
}
struct Z_Construct_UClass_UCaretaker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Caretaker.h" },
		{ "ModuleRelativePath", "Caretaker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaretaker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCaretaker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCaretaker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCaretaker_Statics::ClassParams = {
	&UCaretaker::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaretaker_Statics::Class_MetaDataParams), Z_Construct_UClass_UCaretaker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCaretaker()
{
	if (!Z_Registration_Info_UClass_UCaretaker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCaretaker.OuterSingleton, Z_Construct_UClass_UCaretaker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCaretaker.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<UCaretaker>()
{
	return UCaretaker::StaticClass();
}
UCaretaker::UCaretaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCaretaker);
UCaretaker::~UCaretaker() {}
// End Class UCaretaker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCaretaker, UCaretaker::StaticClass, TEXT("UCaretaker"), &Z_Registration_Info_UClass_UCaretaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaretaker), 1087737206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_3800847827(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
