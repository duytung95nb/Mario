#include <time.h>
#include <d3dx9.h>
#include "mariogame.h"
#include "utils.h"

#define MARIO_IMAGE_RIGHT L"mario_right.png"
#define MARIO_IMAGE_LEFT L"mario_left.png"
#define GROUND_MIDDLE L"World 1.png"
#define MAP L"World 1.png"
#define BRICK L"brick.png"

#define MARIO_SPEED 1.4f
#define GROUND_Y 61

#define BACKGROUND_FILE L"bg.bmp"

#define ANIMATE_RATE 10
#define JUMP_VELOCITY_BOOST 3.0f
#define FALLDOWN_VELOCITY_DECREASE 0.5f
#define VIEW_PORT_Y  600



//#define VIEW_PORT_Y  600


CMarioGame::CMarioGame(HINSTANCE hInstance, LPWSTR Name, int Mode, int IsFullScreen, int FrameRate):
CGame(hInstance,Name,Mode,IsFullScreen, FrameRate)
{
	//mario_right = NULL;
	//mario_left = NULL;
	//Mario = NULL;
}

CMarioGame::~CMarioGame()
{

	delete mario;
	delete brick;
	delete ground_middle;
}

void CMarioGame::LoadResources(LPDIRECT3DDEVICE9 d3ddv)
{
	srand((unsigned)time(NULL));

	// TO-DO: not a very good place to initial sprite handler
	D3DXCreateSprite(d3ddv, &_SpriteHandler);


	//Background = CreateSurfaceFromFile(_d3ddv, BACKGROUND_FILE);

	HRESULT res = D3DXCreateSprite(_d3ddv, &_SpriteHandler);
	mario = new CMario();
	ground_middle = new CSprite();
	brick = new CSprite();
	mario->Init(_SpriteHandler, L"Picture/mario.bmp", 16, 16, 1386, 42);
	brick ->Init(_SpriteHandler, BRICK, 32, 32, 1, 1);
	ground_middle ->Init(_SpriteHandler, GROUND_MIDDLE, 3392, 460, 1, 1);
}

int xc = 0;

void CMarioGame::RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t)
{
	_SpriteHandler->Begin(D3DXSPRITE_ALPHABLEND);
	//int vpx = mario_x - 400;
	//int vpx = xc;
	//if (vpx <= 0) vpx = 0;
	mario->Update();
	int vpx = 0 - 400;
	ground_middle->Draw(16, 16, vpx, VIEW_PORT_Y);
	brick->Draw(100, 47, vpx, VIEW_PORT_Y);
	mario->Draw(xPos, yPos, vpx, VIEW_PORT_Y);
	_SpriteHandler->End();
}

void CMarioGame::ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int t)
{
	
}

void CMarioGame::OnKeyDown(int KeyCode)
{

}


