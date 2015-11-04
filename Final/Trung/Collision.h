#pragma once
#include "CollisionData.h"
#include "RECT.h"
#include <wingdi.h>

class CCollision
{
public:
	CCollision();
	~CCollision();
	//Rectangle rec = new Rectangle();
	EDirect GetCollisionDir(CRECT _rec1, CRECT _rec2);
};

