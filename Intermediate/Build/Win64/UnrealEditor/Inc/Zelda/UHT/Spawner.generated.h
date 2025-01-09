// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ZELDA_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define ZELDA_Spawner_generated_h

#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOverlapBegin);


#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zelda"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawner(ASpawner&&); \
	ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner) \
	NO_API virtual ~ASpawner();


#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_20_PROLOG
#define FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZELDA_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_matei_OneDrive_Bureau_POO_Proiect_POO_Source_Zelda_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
