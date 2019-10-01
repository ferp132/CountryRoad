// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CountryRoad/CountryRoadHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountryRoadHUD() {}
// Cross Module References
	COUNTRYROAD_API UClass* Z_Construct_UClass_ACountryRoadHUD_NoRegister();
	COUNTRYROAD_API UClass* Z_Construct_UClass_ACountryRoadHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CountryRoad();
// End Cross Module References
	void ACountryRoadHUD::StaticRegisterNativesACountryRoadHUD()
	{
	}
	UClass* Z_Construct_UClass_ACountryRoadHUD_NoRegister()
	{
		return ACountryRoadHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACountryRoadHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACountryRoadHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CountryRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACountryRoadHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CountryRoadHUD.h" },
		{ "ModuleRelativePath", "CountryRoadHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACountryRoadHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACountryRoadHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACountryRoadHUD_Statics::ClassParams = {
		&ACountryRoadHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACountryRoadHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACountryRoadHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACountryRoadHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACountryRoadHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACountryRoadHUD, 1442864124);
	template<> COUNTRYROAD_API UClass* StaticClass<ACountryRoadHUD>()
	{
		return ACountryRoadHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountryRoadHUD(Z_Construct_UClass_ACountryRoadHUD, &ACountryRoadHUD::StaticClass, TEXT("/Script/CountryRoad"), TEXT("ACountryRoadHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountryRoadHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
