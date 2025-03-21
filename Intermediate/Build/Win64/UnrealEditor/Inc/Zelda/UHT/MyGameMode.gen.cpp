// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/MyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AMyGameMode();
ZELDA_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
// End Cross Module References

// Begin Class AMyGameMode
void AMyGameMode::StaticRegisterNativesAMyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode);
UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
{
	return AMyGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @class AMyGameMode\n/// @brief A class that manages the game mode logic.\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class AMyGameMode\n@brief A class that manages the game mode logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseResetTime_MetaData[] = {
		{ "Category", "MyGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The time to reset the game after losing.\n" },
#endif
		{ "ModuleRelativePath", "MyGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time to reset the game after losing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinResetTime_MetaData[] = {
		{ "Category", "MyGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The time to reset the game after winning.\n" },
#endif
		{ "ModuleRelativePath", "MyGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time to reset the game after winning." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseResetTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WinResetTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_LoseResetTime = { "LoseResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameMode, LoseResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseResetTime_MetaData), NewProp_LoseResetTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_WinResetTime = { "WinResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameMode, WinResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinResetTime_MetaData), NewProp_WinResetTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_LoseResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_WinResetTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
	&AMyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameMode()
{
	if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<AMyGameMode>()
{
	return AMyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
AMyGameMode::~AMyGameMode() {}
// End Class AMyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_MyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 3800468295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_MyGameMode_h_1597792141(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_MyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_MyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
