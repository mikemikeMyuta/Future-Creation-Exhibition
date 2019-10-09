// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerEffect.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerEffect() {}
// Cross Module References
	EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerModel_NoRegister();
// End Cross Module References
	static UEnum* EEffekseerAlphaBlendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, Z_Construct_UPackage__Script_Effekseer(), TEXT("EEffekseerAlphaBlendType"));
		}
		return Singleton;
	}
	template<> EFFEKSEER_API UEnum* StaticEnum<EEffekseerAlphaBlendType>()
	{
		return EEffekseerAlphaBlendType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffekseerAlphaBlendType(EEffekseerAlphaBlendType_StaticEnum, TEXT("/Script/Effekseer"), TEXT("EEffekseerAlphaBlendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType_Hash() { return 211515806U; }
	UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffekseerAlphaBlendType"), 0, Get_Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffekseerAlphaBlendType::Opacity", (int64)EEffekseerAlphaBlendType::Opacity },
				{ "EEffekseerAlphaBlendType::Blend", (int64)EEffekseerAlphaBlendType::Blend },
				{ "EEffekseerAlphaBlendType::Add", (int64)EEffekseerAlphaBlendType::Add },
				{ "EEffekseerAlphaBlendType::Sub", (int64)EEffekseerAlphaBlendType::Sub },
				{ "EEffekseerAlphaBlendType::Mul", (int64)EEffekseerAlphaBlendType::Mul },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Comment", "/// <summary>\n/// ???Z\n/// </summary>\n" },
				{ "Add.Name", "EEffekseerAlphaBlendType::Add" },
				{ "Add.ToolTip", "<summary>\n???Z\n</summary>" },
				{ "Blend.Comment", "/// <summary>\n/// ????\n/// </summary>\n" },
				{ "Blend.Name", "EEffekseerAlphaBlendType::Blend" },
				{ "Blend.ToolTip", "<summary>\n????\n</summary>" },
				{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
				{ "Mul.Comment", "/// <summary>\n/// ???Z\n/// </summary>\n" },
				{ "Mul.Name", "EEffekseerAlphaBlendType::Mul" },
				{ "Mul.ToolTip", "<summary>\n???Z\n</summary>" },
				{ "Opacity.Comment", "/// <summary>\n/// ?s????\n/// </summary>\n" },
				{ "Opacity.Name", "EEffekseerAlphaBlendType::Opacity" },
				{ "Opacity.ToolTip", "<summary>\n?s????\n</summary>" },
				{ "Sub.Comment", "/// <summary>\n/// ???Z\n/// </summary>\n" },
				{ "Sub.Name", "EEffekseerAlphaBlendType::Sub" },
				{ "Sub.ToolTip", "<summary>\n???Z\n</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Effekseer,
				nullptr,
				"EEffekseerAlphaBlendType",
				"EEffekseerAlphaBlendType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEffekseerMaterial::StaticRegisterNativesUEffekseerMaterial()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister()
	{
		return UEffekseerMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDistorted_MetaData[];
#endif
		static void NewProp_IsDistorted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDistorted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLighting_MetaData[];
#endif
		static void NewProp_IsLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDepthTestDisabled_MetaData[];
#endif
		static void NewProp_IsDepthTestDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDepthTestDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AlphaBlend;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaBlend_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerEffect.h" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted_SetBit(void* Obj)
	{
		((UEffekseerMaterial*)Obj)->IsDistorted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted = { "IsDistorted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerMaterial), &Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting_SetBit(void* Obj)
	{
		((UEffekseerMaterial*)Obj)->IsLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting = { "IsLighting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerMaterial), &Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled_SetBit(void* Obj)
	{
		((UEffekseerMaterial*)Obj)->IsDepthTestDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled = { "IsDepthTestDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerMaterial), &Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, AlphaBlend), Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDistorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsDepthTestDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AlphaBlend_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerMaterial_Statics::ClassParams = {
		&UEffekseerMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerMaterial, 220516206);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerMaterial>()
	{
		return UEffekseerMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerMaterial(Z_Construct_UClass_UEffekseerMaterial, &UEffekseerMaterial::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerMaterial);
	void UEffekseerEffect::StaticRegisterNativesUEffekseerEffect()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister()
	{
		return UEffekseerEffect::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Models;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Models_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DistortionTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerEffect.h" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Materials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Models), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_Inner = { "Models", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures = { "DistortionTextures", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, DistortionTextures), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_Inner = { "DistortionTextures", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures = { "ColorTextures", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, ColorTextures), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_Inner = { "ColorTextures", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Name), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Scale), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Version), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerEffect_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerEffect_Statics::ClassParams = {
		&UEffekseerEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEffekseerEffect_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerEffect, 750901344);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerEffect>()
	{
		return UEffekseerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerEffect(Z_Construct_UClass_UEffekseerEffect, &UEffekseerEffect::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEffect);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEffekseerEffect)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
