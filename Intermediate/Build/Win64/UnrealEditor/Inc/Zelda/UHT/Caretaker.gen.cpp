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
ZELDA_API UClass* Z_Construct_UClass_UMemento_NoRegister();
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
		{ "Comment", "/**\n * @class UCaretaker\n * @brief A class that acts as a caretaker for mementos, allowing them to be saved and loaded.\n */" },
#endif
		{ "IncludePath", "Caretaker.h" },
		{ "ModuleRelativePath", "Caretaker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UCaretaker\n@brief A class that acts as a caretaker for mementos, allowing them to be saved and loaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedMemento_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The saved memento.\n" },
#endif
		{ "ModuleRelativePath", "Caretaker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The saved memento." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedMemento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaretaker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaretaker_Statics::NewProp_SavedMemento = { "SavedMemento", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCaretaker, SavedMemento), Z_Construct_UClass_UMemento_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedMemento_MetaData), NewProp_SavedMemento_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCaretaker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaretaker_Statics::NewProp_SavedMemento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCaretaker_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UCaretaker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCaretaker_Statics::PropPointers),
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
		{ Z_Construct_UClass_UCaretaker, UCaretaker::StaticClass, TEXT("UCaretaker"), &Z_Registration_Info_UClass_UCaretaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaretaker), 3394486671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_156001019(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Caretaker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
