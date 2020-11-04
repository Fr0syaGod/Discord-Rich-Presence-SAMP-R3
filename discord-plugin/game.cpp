#include "game.h"

HMODULE module = NULL;

void Initialize()
{
	CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(PluginThread), 0, 0, 0);
}

void Shutdown()
{
	Discord_Shutdown();
}

void PluginThread()
{
	DiscordRichPresence drp;

	drp = { 0 };
	drp.startTimestamp = time(0);

	Discord_Initialize(APPLICATION_ID, 0, 0, 0);

	if (GetModuleHandle("samp.dll"))
	{
		//Icons
		drp.largeImageKey = "ae_large";
		drp.smallImageKey = "ae_largetool";

		// Text детали и стату эти строчки можно просто удалить
		drp.largeImageText = "Funny Game";
		drp.smallImageText = "Yeah";
		drp.details = "details";
		drp.state = "state";

		// Loop
		while (true)
		{
			Discord_UpdatePresence(&drp);
			Sleep(15000);
		}
	}
}
