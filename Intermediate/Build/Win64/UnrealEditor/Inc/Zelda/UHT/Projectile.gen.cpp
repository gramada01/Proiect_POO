// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zelda/Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Zelda();
ZELDA_API UClass* Z_Construct_UClass_AProjectile();
ZELDA_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References

// Begin Class AProjectile
void AProjectile::StaticRegisterNativesAProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectile);
UClass* Z_Construct_UClass_AProjectile_NoRegister()
{
	return AProjectile::StaticClass();
}
struct Z_Construct_UClass_AProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n\x09USceneComponent* ProjectileParent;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n       USceneComponent* ProjectileParent;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSprite_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLaunched_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_IsLaunched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLaunched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileSprite = { "ProjectileSprite", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, ProjectileSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSprite_MetaData), NewProp_ProjectileSprite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, MovementDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementDirection_MetaData), NewProp_MovementDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UClass_AProjectile_Statics::NewProp_IsLaunched_SetBit(void* Obj)
{
	((AProjectile*)Obj)->IsLaunched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_IsLaunched = { "IsLaunched", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectile), &Z_Construct_UClass_AProjectile_Statics::NewProp_IsLaunched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLaunched_MetaData), NewProp_IsLaunched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_IsLaunched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Zelda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Statics::ClassParams = {
	&AProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectile()
{
	if (!Z_Registration_Info_UClass_AProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile.OuterSingleton, Z_Construct_UClass_AProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectile.OuterSingleton;
}
template<> ZELDA_API UClass* StaticClass<AProjectile>()
{
	return AProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
AProjectile::~AProjectile() {}
// End Class AProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 2408709722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Projectile_h_4094346376(TEXT("/Script/Zelda"),
	Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
