#pragma once
#include "RECT.h"
class CMyObject
{
public:
	CMyObject();
	~CMyObject();
	void GetCollisionDirection(CRECT r1, CRECT r2);
};

