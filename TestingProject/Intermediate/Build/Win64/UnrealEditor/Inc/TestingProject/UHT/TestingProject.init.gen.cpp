// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestingProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestingProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TestingProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestingProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x37DB84F0,
				0x96966A0A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestingProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestingProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestingProject(Z_Construct_UPackage__Script_TestingProject, TEXT("/Script/TestingProject"), Z_Registration_Info_UPackage__Script_TestingProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x37DB84F0, 0x96966A0A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
