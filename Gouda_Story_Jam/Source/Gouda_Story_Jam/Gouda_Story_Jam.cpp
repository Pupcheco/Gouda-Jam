// Fill out your copyright notice in the Description page of Project Settings.

#include "Gouda_Story_Jam.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"


void Gouda_StoryJamModule::StartupModule()
{
#if(ENGINE_MINOR_VERSION >= 21)
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
#endif
}

void Gouda_StoryJamModule::ShutdownModule()
{
	ResetAllShaderSourceDirectoryMappings();
}

IMPLEMENT_PRIMARY_GAME_MODULE(Gouda_StoryJamModule, Gouda_Story_Jam, "Gouda_Story_Jam");