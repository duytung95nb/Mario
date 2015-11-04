#include "Collision.h"
#include <math.h>


CCollision::CCollision()
{

}
//EDirect CCollision::GetCollisionDir(CRECT _rect1, CRECT _rect2)
//{
//
//	if (_rect1.IsCollistion(_rect2))
//	{
//		float top = abs(_rect1.Top - _rect2.Bottom);
//		float botom =abs(_rect1.Bottom - _rect2.Top);
//		float left = abs(_rect1.Left - _rect2.Right);
//		float right = abs(_rect1.Right - _rect2.Left);
//		float rs = min(min(right, left), min(top,botom));
//		/*if (rs == top)
//		{
//			return EDirect
//		}
//		if (rs == botom)
//		{
//			return EDirect.Bottom;
//		}
//		if (rs == left)
//		{
//			return EDirect.Left;
//		}
//		if (rs == right)
//		{
//			return EDirect.Right;
//		}*/
//	}
//	return EDirect;
//}

CCollision::~CCollision()
{
}
