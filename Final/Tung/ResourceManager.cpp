#include "ResourceManager.h"
#include <string.h>

CResourceManager* CResourceManager::_instance = NULL;
CResourceManager* CResourceManager::GetInstace()
{
	if (_instance != NULL)
		_instance = new CResourceManager();
	return _instance;
}


CResourceManager::CResourceManager()
{
}


CResourceManager::~CResourceManager()
{
}
