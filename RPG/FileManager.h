#if !defined(_FILEMANAGER_H)
#define _FILEMANAGER_H

#include "stdafx.h"
#include "Player.h"

class FileManager {
public:
	void safeGame(Player player);
	void loadGame(Player player);
};

#endif