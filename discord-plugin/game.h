#pragma once
#include "dllmain.h"
// https://discord.com/developers/applications
// �� ���� �������� id ������ ����������
#define APPLICATION_ID "725323590110675015"

extern HMODULE module;

void Initialize();
void Shutdown();
void PluginThread();