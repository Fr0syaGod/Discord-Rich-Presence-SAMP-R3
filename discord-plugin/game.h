#pragma once
#include "dllmain.h"
// https://discord.com/developers/applications
// От туда возьмите id вашего приложения
#define APPLICATION_ID "725323590110675015"

extern HMODULE module;

void Initialize();
void Shutdown();
void PluginThread();