#if !defined(_FILEMANAGER_H)
#define _FILEMANAGER_H

#include "Player.h"
#include "stdafx.h"

class FileManager {
public:
	void safeGame(Player player);
	void loadGame(Player player);
};

#endif