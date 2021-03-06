﻿#ifndef __SPRITE_H__
#define __SPRITE_H__

#include <d3d9.h>
#include <d3dx9.h>

class CSprite {
protected: 
	LPDIRECT3DTEXTURE9 _Image;				// The container of all the sprites
	LPD3DXSPRITE _SpriteHandler;			


	int _Index;								// Current sprite index
	int _Width;								// Sprite width
	int _Height;							// Sprite height
	int _Count;								// Number of sprites
	int _SpritePerRow;						// Number of sprites per row
public: 
	CSprite();
	int _posX;
	int _posY;
	virtual void Init(LPD3DXSPRITE SpriteHandler, LPWSTR FilePath, int Width, int Height, int Count, int SpritePerRow);
	void Next();
	void Reset();

	virtual void Update();
	// Render current sprite at location (X,Y)
	virtual void Draw(int xPostion, int yPostion, int vpx, int vpy);	
	~CSprite();
};

#endif
