// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicroDoom/MicroDoomGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicroDoomGameModeBase() {}
// Cross Module References
	MICRODOOM_API UClass* Z_Construct_UClass_AMicroDoomGameModeBase_NoRegister();
	MICRODOOM_API UClass* Z_Construct_UClass_AMicroDoomGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MicroDoom();
// End Cross Module References
	void AMicroDoomGameModeBase::StaticRegisterNativesAMicroDoomGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMicroDoomGameModeBase_NoRegister()
	{
		return AMicroDoomGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMicroDoomGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMicroDoomGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MicroDoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMicroDoomGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MicroDoomGameModeBase.h" },
		{ "ModuleRelativePath", "MicroDoomGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMicroDoomGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMicroDoomGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMicroDoomGameModeBase_Statics::ClassParams = {
		&AMicroDoomGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMicroDoomGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMicroDoomGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMicroDoomGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMicroDoomGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMicroDoomGameModeBase, 622712707);
	template<> MICRODOOM_API UClass* StaticClass<AMicroDoomGameModeBase>()
	{
		return AMicroDoomGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMicroDoomGameModeBase(Z_Construct_UClass_AMicroDoomGameModeBase, &AMicroDoomGameModeBase::StaticClass, TEXT("/Script/MicroDoom"), TEXT("AMicroDoomGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMicroDoomGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
