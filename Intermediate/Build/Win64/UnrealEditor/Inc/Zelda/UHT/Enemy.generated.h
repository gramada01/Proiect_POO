// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZELDA_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define ZELDA_Enemy_generated_h

#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zelda"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&); \
	AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_14_PROLOG
#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZELDA_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS