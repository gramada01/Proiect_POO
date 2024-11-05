// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZelda_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Zelda;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Zelda()
	{
		if (!Z_Registration_Info_UPackage__Script_Zelda.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Zelda",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x59C71870,
				0x3AD1018D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Zelda.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Zelda.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Zelda(Z_Construct_UPackage__Script_Zelda, TEXT("/Script/Zelda"), Z_Registration_Info_UPackage__Script_Zelda, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x59C71870, 0x3AD1018D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
