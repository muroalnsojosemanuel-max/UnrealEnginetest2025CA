// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EU2025CA/MyActor2025.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor2025() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EU2025CA_API UClass* Z_Construct_UClass_AMyActor2025();
EU2025CA_API UClass* Z_Construct_UClass_AMyActor2025_NoRegister();
UPackage* Z_Construct_UPackage__Script_EU2025CA();
// End Cross Module References

// Begin Class AMyActor2025 Function DemostrateFundamentals
struct Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyActor2025" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ejemplo  de una funcion publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor2025.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo  de una funcion publica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor2025, nullptr, "DemostrateFundamentals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor2025::execDemostrateFundamentals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DemostrateFundamentals();
	P_NATIVE_END;
}
// End Class AMyActor2025 Function DemostrateFundamentals

// Begin Class AMyActor2025
void AMyActor2025::StaticRegisterNativesAMyActor2025()
{
	UClass* Class = AMyActor2025::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DemostrateFundamentals", &AMyActor2025::execDemostrateFundamentals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor2025);
UClass* Z_Construct_UClass_AMyActor2025_NoRegister()
{
	return AMyActor2025::StaticClass();
}
struct Z_Construct_UClass_AMyActor2025_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor2025.h" },
		{ "ModuleRelativePath", "MyActor2025.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActor2025" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ejemplo  de una variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor2025.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo  de una variable de instancia publica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[] = {
		{ "Category", "MyActor2025" },
		{ "ModuleRelativePath", "MyActor2025.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_esInstructor_MetaData[] = {
		{ "Category", "MyActor2025" },
		{ "ModuleRelativePath", "MyActor2025.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[] = {
		{ "Category", "MyActor2025" },
		{ "ModuleRelativePath", "MyActor2025.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_edad;
	static void NewProp_esInstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_esInstructor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor2025_DemostrateFundamentals, "DemostrateFundamentals" }, // 4129141876
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor2025>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor2025_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor2025, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor2025_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor2025, edad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_edad_MetaData), NewProp_edad_MetaData) };
void Z_Construct_UClass_AMyActor2025_Statics::NewProp_esInstructor_SetBit(void* Obj)
{
	((AMyActor2025*)Obj)->esInstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor2025_Statics::NewProp_esInstructor = { "esInstructor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActor2025), &Z_Construct_UClass_AMyActor2025_Statics::NewProp_esInstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_esInstructor_MetaData), NewProp_esInstructor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyActor2025_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor2025, nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nombre_MetaData), NewProp_nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor2025_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2025_Statics::NewProp_MyFloatVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2025_Statics::NewProp_edad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2025_Statics::NewProp_esInstructor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2025_Statics::NewProp_nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2025_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor2025_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EU2025CA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2025_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor2025_Statics::ClassParams = {
	&AMyActor2025::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor2025_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2025_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2025_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor2025_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor2025()
{
	if (!Z_Registration_Info_UClass_AMyActor2025.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor2025.OuterSingleton, Z_Construct_UClass_AMyActor2025_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor2025.OuterSingleton;
}
template<> EU2025CA_API UClass* StaticClass<AMyActor2025>()
{
	return AMyActor2025::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor2025);
AMyActor2025::~AMyActor2025() {}
// End Class AMyActor2025

// Begin Registration
struct Z_CompiledInDeferFile_FID_EU2025CA_Source_EU2025CA_MyActor2025_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor2025, AMyActor2025::StaticClass, TEXT("AMyActor2025"), &Z_Registration_Info_UClass_AMyActor2025, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor2025), 867339680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EU2025CA_Source_EU2025CA_MyActor2025_h_2743238518(TEXT("/Script/EU2025CA"),
	Z_CompiledInDeferFile_FID_EU2025CA_Source_EU2025CA_MyActor2025_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EU2025CA_Source_EU2025CA_MyActor2025_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
