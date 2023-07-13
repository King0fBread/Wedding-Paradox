// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeddingParadox/CP_MovingStarfish.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCP_MovingStarfish() {}
// Cross Module References
	WEDDINGPARADOX_API UClass* Z_Construct_UClass_ACP_MovingStarfish_NoRegister();
	WEDDINGPARADOX_API UClass* Z_Construct_UClass_ACP_MovingStarfish();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeddingParadox();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACP_MovingStarfish::StaticRegisterNativesACP_MovingStarfish()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACP_MovingStarfish);
	UClass* Z_Construct_UClass_ACP_MovingStarfish_NoRegister()
	{
		return ACP_MovingStarfish::StaticClass();
	}
	struct Z_Construct_UClass_ACP_MovingStarfish_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarfishStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StarfishStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewZLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewZLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredYRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredYRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACP_MovingStarfish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeddingParadox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CP_MovingStarfish.h" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CP_MovingStarfish" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh = { "StarfishStaticMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, StarfishStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_NewZLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CP_MovingStarfish" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_NewZLocation = { "NewZLocation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, NewZLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_NewZLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_NewZLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CP_MovingStarfish" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation = { "DesiredYRotation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, DesiredYRotation), METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACP_MovingStarfish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_NewZLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACP_MovingStarfish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACP_MovingStarfish>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACP_MovingStarfish_Statics::ClassParams = {
		&ACP_MovingStarfish::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACP_MovingStarfish_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACP_MovingStarfish()
	{
		if (!Z_Registration_Info_UClass_ACP_MovingStarfish.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACP_MovingStarfish.OuterSingleton, Z_Construct_UClass_ACP_MovingStarfish_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACP_MovingStarfish.OuterSingleton;
	}
	template<> WEDDINGPARADOX_API UClass* StaticClass<ACP_MovingStarfish>()
	{
		return ACP_MovingStarfish::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACP_MovingStarfish);
	struct Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACP_MovingStarfish, ACP_MovingStarfish::StaticClass, TEXT("ACP_MovingStarfish"), &Z_Registration_Info_UClass_ACP_MovingStarfish, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACP_MovingStarfish), 4086888778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_3597537933(TEXT("/Script/WeddingParadox"),
		Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
