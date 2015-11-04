#pragma once
#include <vector>
using namespace std;
class CResourceManager
{
private:
	CResourceManager();
	static CResourceManager* _instance;
	//List of surface
	//vector<SURFACE*> _listSurface;

	//List of texture
	//vector<TEXTURE*> _listTexture;
public:
	void Release();
	~CResourceManager();
	//get the unique instance
	static CResourceManager* GetInstace();

	//get surface
	//SURFACE* GetSurface(char* fileName);

	//get texture
	//TEXTURE* GetTexture(char* fileName);
};

