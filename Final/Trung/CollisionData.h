#pragma once

enum EObject
{
	MARIO,
	BLOCK
};
enum EDirect
{
	Left,
	Right,
	Top,
	Bottom,
	None
};
enum State
{
	alive
};
class CCollisionData
{
public:
	CCollisionData();
	~CCollisionData();
};

