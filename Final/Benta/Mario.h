#pragma once
#include "Sprite.h"
#include "KeyDown.h"

class CMario :public CSprite
{
private:
	bool bBig;
	bool bRight;
	int xPos;
	int yPos;
	int iSpeed = 0;
	const int iAccelerate = 5;
	bool isFalling = false;
	bool isOnGround;
	CKeyDown *KeyDown = new CKeyDown();
public:
	~CMario();
	CMario();
	// Advance to next sprite in the list
	void Stand();//hello
	void Gravity();//whatup
	void MoveRight();//hey
	void MoveLeft();//
	void Jump();//
	void SlowDown();//
	void KeyEvent();//
	virtual void Update();//

	// Render current sprite at location (X,Y) at the target surface

};

