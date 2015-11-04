#ifndef __SURFACE_H__
#define __SURFACE_H__

#include <d3d9.h>


//Lớp bao chứa 1 LPDIRECT3DSURFACE9
//Quản lý các thông tin khác của LPDIRECT3DSURFACE9 đó
class SURFACE{
public:
	char* FileName;
	RECT Size;
	LPDIRECT3DSURFACE9 Surface;

	
};




#endif