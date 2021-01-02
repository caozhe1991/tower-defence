// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleScreenLoading.h"
#include "SScreenLoading.h"
#include "MoviePlayer.h"
//#include "MoviePlayer/Public/MoviePlayer.h"

#define LOCTEXT_NAMESPACE "FSimpleScreenLoadingModule"

void FSimpleScreenLoadingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

}

void FSimpleScreenLoadingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FSimpleScreenLoadingModule::SetupScreenLoading()
{
	FCoreUObjectDelegates::PreLoadMap.AddRaw(this, &FSimpleScreenLoadingModule::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddRaw(this, &FSimpleScreenLoadingModule::EndLoadingScreen);

}

void FSimpleScreenLoadingModule::BeginLoadingScreen(const FString& MapName)
{

	FLoadingScreenAttributes LoadingScreenArg;
	// ����������ɼ�֪ͨ����
	LoadingScreenArg.bAutoCompleteWhenLoadingCompletes = false;
	// ����������ɣ��ɵȴ�Ƭͷ������ĳ����֪ͨ����
	LoadingScreenArg.bMoviesAreSkippable = true;
	// ��Ӱ�Ƿ�ѭ��
	LoadingScreenArg.bWaitForManualStop = false;
	LoadingScreenArg.PlaybackType = EMoviePlaybackType::MT_LoadingLoop;
	LoadingScreenArg.WidgetLoadingScreen = SNew(SScreenLoading, MapName);

	GetMoviePlayer()->SetupLoadingScreen(LoadingScreenArg);
	GetMoviePlayer()->PlayMovie();
}

void FSimpleScreenLoadingModule::EndLoadingScreen(UWorld* World)
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSimpleScreenLoadingModule, SimpleScreenLoading)