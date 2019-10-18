// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEffekseerHandle;
#ifdef EFFEKSEER_EffekseerEmitterComponent_generated_h
#error "EffekseerEmitterComponent.generated.h already included, missing '#pragma once' in EffekseerEmitterComponent.h"
#endif
#define EFFEKSEER_EffekseerEmitterComponent_generated_h

#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEffekseerHandle*)Z_Param__Result=P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Exists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	}


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEffekseerHandle*)Z_Param__Result=P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Exists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	}


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEffekseerEmitterComponent(); \
	friend struct Z_Construct_UClass_UEffekseerEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(UEffekseerEmitterComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Effekseer"), NO_API) \
	DECLARE_SERIALIZER(UEffekseerEmitterComponent)


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEffekseerEmitterComponent(); \
	friend struct Z_Construct_UClass_UEffekseerEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(UEffekseerEmitterComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Effekseer"), NO_API) \
	DECLARE_SERIALIZER(UEffekseerEmitterComponent)


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEffekseerEmitterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffekseerEmitterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffekseerEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffekseerEmitterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffekseerEmitterComponent(UEffekseerEmitterComponent&&); \
	NO_API UEffekseerEmitterComponent(const UEffekseerEmitterComponent&); \
public:


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEffekseerEmitterComponent(UEffekseerEmitterComponent&&); \
	NO_API UEffekseerEmitterComponent(const UEffekseerEmitterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEffekseerEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffekseerEmitterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEffekseerEmitterComponent)


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_13_PROLOG
#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_RPC_WRAPPERS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_INCLASS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_INCLASS_NO_PURE_DECLS \
	FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EFFEKSEER_API UClass* StaticClass<class UEffekseerEmitterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FCreationExhibition_Plugins_Effekseer_Source_Effekseer_Public_EffekseerEmitterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
