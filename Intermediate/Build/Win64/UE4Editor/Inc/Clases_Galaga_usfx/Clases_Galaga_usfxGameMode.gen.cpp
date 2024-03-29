// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clases_Galaga_usfx/Clases_Galaga_usfxGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClases_Galaga_usfxGameMode() {}
// Cross Module References
	CLASES_GALAGA_USFX_API UClass* Z_Construct_UClass_AClases_Galaga_usfxGameMode_NoRegister();
	CLASES_GALAGA_USFX_API UClass* Z_Construct_UClass_AClases_Galaga_usfxGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Clases_Galaga_usfx();
// End Cross Module References
	void AClases_Galaga_usfxGameMode::StaticRegisterNativesAClases_Galaga_usfxGameMode()
	{
	}
	UClass* Z_Construct_UClass_AClases_Galaga_usfxGameMode_NoRegister()
	{
		return AClases_Galaga_usfxGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Clases_Galaga_usfx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Clases_Galaga_usfxGameMode.h" },
		{ "ModuleRelativePath", "Clases_Galaga_usfxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClases_Galaga_usfxGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::ClassParams = {
		&AClases_Galaga_usfxGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClases_Galaga_usfxGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClases_Galaga_usfxGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClases_Galaga_usfxGameMode, 3485560519);
	template<> CLASES_GALAGA_USFX_API UClass* StaticClass<AClases_Galaga_usfxGameMode>()
	{
		return AClases_Galaga_usfxGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClases_Galaga_usfxGameMode(Z_Construct_UClass_AClases_Galaga_usfxGameMode, &AClases_Galaga_usfxGameMode::StaticClass, TEXT("/Script/Clases_Galaga_usfx"), TEXT("AClases_Galaga_usfxGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClases_Galaga_usfxGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
