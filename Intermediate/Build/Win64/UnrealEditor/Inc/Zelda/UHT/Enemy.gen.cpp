// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AEnemy();
ZELDA_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References

// Begin Class AEnemy
void AEnemy::StaticRegisterNativesAEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySprite_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyFlipbook = { "EnemyFlipbook", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, EnemyFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyFlipbook_MetaData), NewProp_EnemyFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_EnemySprite = { "EnemySprite", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, EnemySprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySprite_MetaData), NewProp_EnemySprite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_EnemySprite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<AEnemy>()
{
	return AEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
AEnemy::~AEnemy() {}
// End Class AEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 82385332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_1274705799(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
