#include "Mario.h"
#define MAX_JUMP 200
#define GROUND 300
#define MAX_SPEED 20
#define GRAVITY 20
CMario::CMario()
{
	bBig = true;
	bRight = true;
}




void CMario::Stand()
{
	iSpeed = 0;
	if (bRight == true)
	{
		_Index = 0;
	}
	else
	{
		_Index = 41;
	}
}
void CMario::MoveRight()
{
	bRight = true;
	xPos = (xPos + iSpeed) % 800;
	_Index += 1;
	if (iSpeed<MAX_SPEED)
	{
		iSpeed += iAccelerate;
	}
	if (_Index > 3)
	{
		_Index = 1;
	}
}
void CMario::MoveLeft()
{
	bRight = false;
	xPos = (xPos - iSpeed) % 800;
	_Index -= 1;
	if (iSpeed<MAX_SPEED)
	{
		iSpeed += iAccelerate;
	}

	if (_Index < 38)
	{
		_Index = 40;
	}
}
void CMario::Jump()
{
	if (bRight == true)
	{
		_Index = 5;
	}
	else
	{
		_Index = 36;
	}
	if (yPos > MAX_JUMP)
	{
		yPos = yPos - 40;
	}
	// nếu tọa độ bằng độ cao nhảy cực đại thì mario đang rơi
	if (yPos <= MAX_JUMP)
	{
		isFalling = true;
	}
}
void CMario::Gravity()
{
	yPos = (yPos + GRAVITY) % 800;
	if (yPos > GROUND)
	{
		yPos = (yPos - GRAVITY) % 800;
	}
}
void CMario::SlowDown()
{
	if (bRight == true)
	{
		if (iSpeed > 0)
		{
			iSpeed -= iAccelerate;
		}
		xPos = (xPos + iSpeed) % 800;
		_Index += 1;
		if (_Index > 3)
		{
			_Index = 1;
		}
	}
	else
	{
		if (iSpeed > 0)
		{
			iSpeed -= iAccelerate;
		}
		xPos = (xPos - iSpeed) % 800;
		_Index -= 1;
		if (_Index < 38)
		{
			_Index = 40;
		}
	}

	if (iSpeed == 0 && isOnGround == true)
		this->Stand();
}
void CMario::KeyEvent()
{
	if (KeyDown->Right())
	{
		this->MoveRight();
	}
	else if (KeyDown->Left())
	{
		this->MoveLeft();
	}
	else
	{
		this->SlowDown();
	}
	// nhảy với 2 đk: trên mặt đất hoặc không phải là đang rơi
	if (KeyDown->Space())
	{
		if (isOnGround == true)
			this->Jump();
		else if (isFalling == false)
			this->Jump();
	}
	else
		isFalling = true;
}
void CMario::Update()
{
	this->Gravity();
	// nếu tọa độ đứng bằng mặt đất thì mario đang trên mặt đất và không phải đang rơi, ngược lại thì không phải trên mặt đất.
	if (yPos == GROUND)
	{
		isOnGround = true;
		isFalling = false;
	}
	else if (yPos<GROUND)
	{
		if (bRight == true)
		{
			_Index = 5;
		}
		else
		{
			_Index = 36;
		}
		isOnGround = false;
	}
	this->KeyEvent();

}

CMario::~CMario()
{
}
