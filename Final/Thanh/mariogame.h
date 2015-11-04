#ifndef _MARIO_GAME_H_
#define _MARIO_GAME_H_

#include <d3dx9.h>

#include "game.h"
#include "sprite.h"
#include "Mario.h"
#include "KeyDown.h"


class CMarioGame: public CGame
{
public: 
	CMarioGame(HINSTANCE hInstance, LPWSTR Name, int Mode, int IsFullScreen, int FrameRate);
	~CMarioGame();

	LPD3DXSPRITE _SpriteHandler;

	//int mario_x			// position of kitty
	//int mario_y;		
	int xPosM;
	int yPosM;

	float mario_vx;			// velocity of kitty
	float mario_vy;		

	//float mario_vx_last;	// last vx of mario before stop ( to determine the direction of mario )

	DWORD last_time;		// this is to control the animate rate of kitty

	//LPDIRECT3DSURFACE9 Background;

	CMario * mario;
	CSprite * brick;
//	CSprite * mountain;
//	CSprite * map;
	CSprite *ground_middle;
	CKeyDown * KeyDown;
	CSprite *background;

	int xPos = 20;
	int yPos = 20;
protected:
	LPDIRECT3DSURFACE9 _Background;

	virtual void RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int Delta);
	virtual void ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta);
	virtual void LoadResources(LPDIRECT3DDEVICE9 d3ddv);

	virtual void OnKeyDown(int KeyCode);

	void RenderBackground(int view_port_x, int view_port_y);
};
#endif