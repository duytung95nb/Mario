#pragma once
#include<d3dx9.h>
#define KEY_DOWN(vk_code) ( (GetAsyncKeyState(vk_code)&0x8000)?1:0 )
class CKeyDown
{
public:
	CKeyDown();
	~CKeyDown();
	bool Up();
	bool Down();
	bool Right();
	bool Left();
	bool X();
	bool Z();
	bool Space();
	bool Esc();
};

