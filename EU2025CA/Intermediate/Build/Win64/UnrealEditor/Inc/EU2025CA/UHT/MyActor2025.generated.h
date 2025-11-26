// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor2025.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EU2025CA_MyActor2025_generated_h
#error "MyActor2025.generated.h already included, missing '#pragma once' in MyActor2025.h"
#endif
#define EU2025CA_MyActor2025_generated_h

#define FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDemostrateFundamentals);


#define FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor2025(); \
	friend struct Z_Construct_UClass_AMyActor2025_Statics; \
public: \
	DECLARE_CLASS(AMyActor2025, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EU2025CA"), NO_API) \
	DECLARE_SERIALIZER(AMyActor2025)


#define FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyActor2025(AMyActor2025&&); \
	AMyActor2025(const AMyActor2025&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor2025); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor2025); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor2025) \
	NO_API virtual ~AMyActor2025();


#define FID_EU2025CA_Source_EU2025CA_MyActor2025_h_9_PROLOG
#define FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_INCLASS_NO_PURE_DECLS \
	FID_EU2025CA_Source_EU2025CA_MyActor2025_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EU2025CA_API UClass* StaticClass<class AMyActor2025>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EU2025CA_Source_EU2025CA_MyActor2025_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
