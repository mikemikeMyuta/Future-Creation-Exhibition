// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerSystemComponent() {}
// Cross Module References
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerSystemComponent_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Exists();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerHandle();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Play();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Stop();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork();
	EFFEKSEER_API UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
// End Cross Module References
	void UEffekseerSystemComponent::StaticRegisterNativesUEffekseerSystemComponent()
	{
		UClass* Class = UEffekseerSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Exists", &UEffekseerSystemComponent::execExists },
			{ "Play", &UEffekseerSystemComponent::execPlay },
			{ "SetEffectAllColor", &UEffekseerSystemComponent::execSetEffectAllColor },
			{ "SetEffectPosition", &UEffekseerSystemComponent::execSetEffectPosition },
			{ "SetEffectRotation", &UEffekseerSystemComponent::execSetEffectRotation },
			{ "SetEffectScaling", &UEffekseerSystemComponent::execSetEffectScaling },
			{ "SetEffectSpeed", &UEffekseerSystemComponent::execSetEffectSpeed },
			{ "StartNetwork", &UEffekseerSystemComponent::execStartNetwork },
			{ "Stop", &UEffekseerSystemComponent::execStop },
			{ "StopNetwork", &UEffekseerSystemComponent::execStopNetwork },
			{ "StopRoot", &UEffekseerSystemComponent::execStopRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics
	{
		struct EffekseerSystemComponent_eventExists_Parms
		{
			FEffekseerHandle handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EffekseerSystemComponent_eventExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EffekseerSystemComponent_eventExists_Parms), &Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventExists_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "Exists", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventExists_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Exists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics
	{
		struct EffekseerSystemComponent_eventPlay_Parms
		{
			UEffekseerEffect* effect;
			FVector position;
			FEffekseerHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventPlay_Parms, ReturnValue), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventPlay_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventPlay_Parms, effect), Z_Construct_UClass_UEffekseerEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "Play", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventPlay_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectAllColor_Parms
		{
			FEffekseerHandle handle;
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectAllColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectAllColor_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectAllColor", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectAllColor_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectPosition_Parms
		{
			FEffekseerHandle handle;
			FVector position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectPosition_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectPosition", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectPosition_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectRotation_Parms
		{
			FEffekseerHandle handle;
			FRotator rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectRotation_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectRotation", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectRotation_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectScaling_Parms
		{
			FEffekseerHandle handle;
			FVector scaling;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scaling;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_scaling = { "scaling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectScaling_Parms, scaling), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectScaling_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_scaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectScaling", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectScaling_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectSpeed_Parms
		{
			FEffekseerHandle handle;
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectSpeed_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectSpeed", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectSpeed_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "StartNetwork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics
	{
		struct EffekseerSystemComponent_eventStop_Parms
		{
			FEffekseerHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventStop_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "Stop", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventStop_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "StopNetwork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics
	{
		struct EffekseerSystemComponent_eventStopRoot_Parms
		{
			FEffekseerHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventStopRoot_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "StopRoot", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventStopRoot_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffekseerSystemComponent_NoRegister()
	{
		return UEffekseerSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoStartNetworkAutomatically_MetaData[];
#endif
		static void NewProp_DoStartNetworkAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoStartNetworkAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NetworkPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionAdditiveDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DistortionAdditiveDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditiveDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditiveDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTranslucentDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DistortionTranslucentDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucentDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucentDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LightingDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulateDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModulateDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModulateDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModulateDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtractiveDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubtractiveDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtractiveDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtractiveDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AdditiveDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TranslucentDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OpaqueDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueDynamicMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueDynamicMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionAdditive_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditive_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTranslucent_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucent_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulate_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulate_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtractive_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtractive_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Additive_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translucent_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Translucent_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opaque_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Opaque_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionAdditiveMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditiveMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModulateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtractiveMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtractiveMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEffekseerSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_Exists, "Exists" }, // 4245202955
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_Play, "Play" }, // 38537225
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor, "SetEffectAllColor" }, // 740938892
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition, "SetEffectPosition" }, // 2367569441
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation, "SetEffectRotation" }, // 156013898
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling, "SetEffectScaling" }, // 3800497010
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed, "SetEffectSpeed" }, // 3461245042
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork, "StartNetwork" }, // 947321829
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_Stop, "Stop" }, // 1087931738
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork, "StopNetwork" }, // 2570585143
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot, "StopRoot" }, // 4079579690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Effekseer" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "EffekseerSystemComponent.h" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_SetBit(void* Obj)
	{
		((UEffekseerSystemComponent*)Obj)->DoStartNetworkAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically = { "DoStartNetworkAutomatically", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerSystemComponent), &Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort = { "NetworkPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, NetworkPort), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials = { "DistortionAdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionAdditiveDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_Key_KeyProp = { "DistortionAdditiveDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_ValueProp = { "DistortionAdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials = { "DistortionTranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionTranslucentDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_Key_KeyProp = { "DistortionTranslucentDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_ValueProp = { "DistortionTranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials = { "LightingDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, LightingDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_Key_KeyProp = { "LightingDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_ValueProp = { "LightingDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials = { "ModulateDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, ModulateDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_Key_KeyProp = { "ModulateDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_ValueProp = { "ModulateDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials = { "SubtractiveDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, SubtractiveDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_Key_KeyProp = { "SubtractiveDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_ValueProp = { "SubtractiveDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials = { "AdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, AdditiveDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_Key_KeyProp = { "AdditiveDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_ValueProp = { "AdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials = { "TranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, TranslucentDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_Key_KeyProp = { "TranslucentDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_ValueProp = { "TranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials = { "OpaqueDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, OpaqueDynamicMaterials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_Key_KeyProp = { "OpaqueDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_ValueProp = { "OpaqueDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Materials), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material = { "DistortionAdditive_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionAdditive_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material = { "DistortionTranslucent_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionTranslucent_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material = { "Modulate_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Modulate_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material = { "Subtractive_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Subtractive_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material = { "Additive_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Additive_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material = { "Translucent_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Translucent_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material = { "Opaque_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Opaque_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial = { "DistortionAdditiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionAdditiveMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial = { "DistortionTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionTranslucentMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial = { "LightingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, LightingMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial = { "ModulateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, ModulateMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial = { "SubtractiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, SubtractiveMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial = { "AdditiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, AdditiveMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial = { "TranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, TranslucentMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial = { "OpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, OpaqueMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite = { "MaxSprite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, MaxSprite), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::ClassParams = {
		&UEffekseerSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEffekseerSystemComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerSystemComponent, 724234235);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerSystemComponent>()
	{
		return UEffekseerSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerSystemComponent(Z_Construct_UClass_UEffekseerSystemComponent, &UEffekseerSystemComponent::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
