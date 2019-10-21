// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationPreviewer/Public/AnimNode_SimpleRetarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SimpleRetarget() {}
// Cross Module References
	ANIMATIONPREVIEWER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget();
	UPackage* Z_Construct_UPackage__Script_AnimationPreviewer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_SimpleRetarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONPREVIEWER_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget, Z_Construct_UPackage__Script_AnimationPreviewer(), TEXT("AnimNode_SimpleRetarget"), sizeof(FAnimNode_SimpleRetarget), Get_Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Hash());
	}
	return Singleton;
}
template<> ANIMATIONPREVIEWER_API UScriptStruct* StaticStruct<FAnimNode_SimpleRetarget>()
{
	return FAnimNode_SimpleRetarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SimpleRetarget(FAnimNode_SimpleRetarget::StaticStruct, TEXT("/Script/AnimationPreviewer"), TEXT("AnimNode_SimpleRetarget"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationPreviewer_StaticRegisterNativesFAnimNode_SimpleRetarget
{
	FScriptStruct_AnimationPreviewer_StaticRegisterNativesFAnimNode_SimpleRetarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SimpleRetarget")),new UScriptStruct::TCppStructOps<FAnimNode_SimpleRetarget>);
	}
} ScriptStruct_AnimationPreviewer_StaticRegisterNativesFAnimNode_SimpleRetarget;
	struct Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_SimpleRetarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SimpleRetarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_SimpleRetarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SimpleRetarget, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::NewProp_SourcePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationPreviewer,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SimpleRetarget",
		sizeof(FAnimNode_SimpleRetarget),
		alignof(FAnimNode_SimpleRetarget),
		Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationPreviewer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SimpleRetarget"), sizeof(FAnimNode_SimpleRetarget), Get_Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SimpleRetarget_Hash() { return 4023737344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
