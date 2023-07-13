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
// End Cross Module References
	DEFINE_FUNCTION(ACP_MovingStarfish::execRotateStarfish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateStarfish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACP_MovingStarfish::execMoveStarfishUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveStarfishUp();
		P_NATIVE_END;
	}
	void ACP_MovingStarfish::StaticRegisterNativesACP_MovingStarfish()
	{
		UClass* Class = ACP_MovingStarfish::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveStarfishUp", &ACP_MovingStarfish::execMoveStarfishUp },
			{ "RotateStarfish", &ACP_MovingStarfish::execRotateStarfish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACP_MovingStarfish, nullptr, "MoveStarfishUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACP_MovingStarfish, nullptr, "RotateStarfish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACP_MovingStarfish);
	UClass* Z_Construct_UClass_ACP_MovingStarfish_NoRegister()
	{
		return ACP_MovingStarfish::StaticClass();
	}
	struct Z_Construct_UClass_ACP_MovingStarfish_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarfishStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StarfishStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredZPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredZPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZPositionChangeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZPositionChangeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredYRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredYRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YRotationChangeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YRotationChangeRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACP_MovingStarfish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeddingParadox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACP_MovingStarfish_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACP_MovingStarfish_MoveStarfishUp, "MoveStarfishUp" }, // 442692895
		{ &Z_Construct_UFunction_ACP_MovingStarfish_RotateStarfish, "RotateStarfish" }, // 1593155644
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CP_MovingStarfish.h" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh_MetaData[] = {
		{ "Category", "CP_MovingStarfish" },
		{ "Comment", "//Static mesh for rendering\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
		{ "ToolTip", "Static mesh for rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh = { "StarfishStaticMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, StarfishStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredZPosition_MetaData[] = {
		{ "Category", "CP_MovingStarfish" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredZPosition = { "DesiredZPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, DesiredZPosition), METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredZPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredZPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_ZPositionChangeRate_MetaData[] = {
		{ "Category", "CP_MovingStarfish" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_ZPositionChangeRate = { "ZPositionChangeRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, ZPositionChangeRate), METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_ZPositionChangeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_ZPositionChangeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation_MetaData[] = {
		{ "Category", "CP_MovingStarfish" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation = { "DesiredYRotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, DesiredYRotation), METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_YRotationChangeRate_MetaData[] = {
		{ "Category", "CP_MovingStarfish" },
		{ "ModuleRelativePath", "CP_MovingStarfish.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_YRotationChangeRate = { "YRotationChangeRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACP_MovingStarfish, YRotationChangeRate), METADATA_PARAMS(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_YRotationChangeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_YRotationChangeRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACP_MovingStarfish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_StarfishStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredZPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_ZPositionChangeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_DesiredYRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACP_MovingStarfish_Statics::NewProp_YRotationChangeRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACP_MovingStarfish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACP_MovingStarfish>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACP_MovingStarfish_Statics::ClassParams = {
		&ACP_MovingStarfish::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACP_MovingStarfish_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ACP_MovingStarfish, ACP_MovingStarfish::StaticClass, TEXT("ACP_MovingStarfish"), &Z_Registration_Info_UClass_ACP_MovingStarfish, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACP_MovingStarfish), 1373725287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_747697836(TEXT("/Script/WeddingParadox"),
		Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeddingParadox_Source_WeddingParadox_CP_MovingStarfish_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
