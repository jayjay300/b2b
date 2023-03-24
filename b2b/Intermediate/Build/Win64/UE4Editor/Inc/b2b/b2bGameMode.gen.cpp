// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "b2b/b2bGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeb2bGameMode() {}
// Cross Module References
	B2B_API UClass* Z_Construct_UClass_Ab2bGameMode_NoRegister();
	B2B_API UClass* Z_Construct_UClass_Ab2bGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_b2b();
// End Cross Module References
	void Ab2bGameMode::StaticRegisterNativesAb2bGameMode()
	{
	}
	UClass* Z_Construct_UClass_Ab2bGameMode_NoRegister()
	{
		return Ab2bGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ab2bGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ab2bGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_b2b,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ab2bGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "b2bGameMode.h" },
		{ "ModuleRelativePath", "b2bGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ab2bGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ab2bGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ab2bGameMode_Statics::ClassParams = {
		&Ab2bGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Ab2bGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ab2bGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ab2bGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ab2bGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ab2bGameMode, 3578783627);
	template<> B2B_API UClass* StaticClass<Ab2bGameMode>()
	{
		return Ab2bGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ab2bGameMode(Z_Construct_UClass_Ab2bGameMode, &Ab2bGameMode::StaticClass, TEXT("/Script/b2b"), TEXT("Ab2bGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ab2bGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
