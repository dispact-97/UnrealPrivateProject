// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingProject/TestingProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TESTINGPROJECT_API UClass* Z_Construct_UClass_ATestingProjectGameMode();
TESTINGPROJECT_API UClass* Z_Construct_UClass_ATestingProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestingProject();
// End Cross Module References

// Begin Class ATestingProjectGameMode
void ATestingProjectGameMode::StaticRegisterNativesATestingProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestingProjectGameMode);
UClass* Z_Construct_UClass_ATestingProjectGameMode_NoRegister()
{
	return ATestingProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ATestingProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestingProjectGameMode.h" },
		{ "ModuleRelativePath", "TestingProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestingProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TestingProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestingProjectGameMode_Statics::ClassParams = {
	&ATestingProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestingProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestingProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ATestingProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestingProjectGameMode.OuterSingleton, Z_Construct_UClass_ATestingProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestingProjectGameMode.OuterSingleton;
}
template<> TESTINGPROJECT_API UClass* StaticClass<ATestingProjectGameMode>()
{
	return ATestingProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingProjectGameMode);
ATestingProjectGameMode::~ATestingProjectGameMode() {}
// End Class ATestingProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestingProject_Source_TestingProject_TestingProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestingProjectGameMode, ATestingProjectGameMode::StaticClass, TEXT("ATestingProjectGameMode"), &Z_Registration_Info_UClass_ATestingProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestingProjectGameMode), 365711654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Source_TestingProject_TestingProjectGameMode_h_1940570589(TEXT("/Script/TestingProject"),
	Z_CompiledInDeferFile_FID_TestingProject_Source_TestingProject_TestingProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Source_TestingProject_TestingProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
