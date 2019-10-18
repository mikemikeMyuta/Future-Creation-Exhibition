// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEffekseerHandle;
struct FColor;
struct FVector;
struct FRotator;
class UEffekseerEffect;
#ifdef EFFEKSEER_EffekseerSystemComponent_generated_h
#error "EffekseerSystemComponent.generated.h already included, missing '#pragma once' in EffekseerSystemComponent.h"
#endif
#define EFFEKSEER_EffekseerSystemComponent_generated_h

#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectAllColor) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectAllColor(Z_Param_handle,Z_Param_color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectSpeed) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectSpeed(Z_Param_handle,Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRoot) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRoot(Z_Param_handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(Z_Param_handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExists) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Exists(Z_Param_handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectScaling) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FVector,Z_Param_scaling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectScaling(Z_Param_handle,Z_Param_scaling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectRotation) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectRotation(Z_Param_handle,Z_Param_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectPosition) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FVector,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectPosition(Z_Param_handle,Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_OBJECT(UEffekseerEffect,Z_Param_effect); \
		P_GET_STRUCT(FVector,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEffekseerHandle*)Z_Param__Result=P_THIS->Play(Z_Param_effect,Z_Param_position); \
		P_NATIVE_END; \
	}


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectAllColor) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectAllColor(Z_Param_handle,Z_Param_color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectSpeed) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectSpeed(Z_Param_handle,Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRoot) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRoot(Z_Param_handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(Z_Param_handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExists) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Exists(Z_Param_handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectScaling) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FVector,Z_Param_scaling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectScaling(Z_Param_handle,Z_Param_scaling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectRotation) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectRotation(Z_Param_handle,Z_Param_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectPosition) \
	{ \
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle); \
		P_GET_STRUCT(FVector,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectPosition(Z_Param_handle,Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_OBJECT(UEffekseerEffect,Z_Param_effect); \
		P_GET_STRUCT(FVector,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEffekseerHandle*)Z_Param__Result=P_THIS->Play(Z_Param_effect,Z_Param_position); \
		P_NATIVE_END; \
	}


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEffekseerSystemComponent(); \
	friend struct Z_Construct_UClass_UEffekseerSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UEffekseerSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Effekseer"), NO_API) \
	DECLARE_SERIALIZER(UEffekseerSystemComponent)


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUEffekseerSystemComponent(); \
	friend struct Z_Construct_UClass_UEffekseerSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UEffekseerSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Effekseer"), NO_API) \
	DECLARE_SERIALIZER(UEffekseerSystemComponent)


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEffekseerSystemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffekseerSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffekseerSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffekseerSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffekseerSystemComponent(UEffekseerSystemComponent&&); \
	NO_API UEffekseerSystemComponent(const UEffekseerSystemComponent&); \
public:


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffekseerSystemComponent(UEffekseerSystemComponent&&); \
	NO_API UEffekseerSystemComponent(const UEffekseerSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffekseerSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffekseerSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEffekseerSystemComponent)


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_PRIVATE_PROPERTY_OFFSET
#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_69_PROLOG
#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_RPC_WRAPPERS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_INCLASS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_INCLASS_NO_PURE_DECLS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EFFEKSEER_API UClass* StaticClass<class UEffekseerSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
