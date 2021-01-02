// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSimpleScreenLoadingModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	// SIMPLESCREENLOADING_API 导出宏，在打包时候插件会被打包成DLL，所以要把接口暴露出来。
	SIMPLESCREENLOADING_API void SetupScreenLoading();
	
private:
	void BeginLoadingScreen(const FString& MapName);
	void EndLoadingScreen(UWorld* World);
};
