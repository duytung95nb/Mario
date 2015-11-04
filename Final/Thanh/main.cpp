#include <windows.h>
#include "mariogame.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	CMarioGame game(hInstance,L"Mario Sample - A larger world",GAME_SCREEN_RESOLUTION_800_600_24,0,60);
	
	game.Init();
	game.Run();

	return 0;
}


