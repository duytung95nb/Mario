#include "KeyDown.h"

CKeyDown::CKeyDown()
{
}
bool CKeyDown::Up()
{
	return KEY_DOWN(VK_UP);
}
bool CKeyDown::Down()
{
	return KEY_DOWN(VK_DOWN);
}
bool CKeyDown::Right()
{
	return KEY_DOWN(VK_RIGHT);
}
bool CKeyDown::Left()
{
	return KEY_DOWN(VK_LEFT);
}
bool CKeyDown::X()
{
	return KEY_DOWN(0x58);
}
bool CKeyDown::Z()
{
	return KEY_DOWN(0x5A);
}
bool CKeyDown::Space()
{
	return KEY_DOWN(VK_SPACE);
}
bool CKeyDown::Esc()
{
	return KEY_DOWN(VK_ESCAPE);
}


CKeyDown::~CKeyDown()
{
}
