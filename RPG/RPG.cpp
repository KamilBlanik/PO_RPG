#include "stdafx.h"
#include "GameManager.h"
#include "FileManager.h"

int main()
{
	GameManager game;
	game.gameMenu();
	Player* player = new Player();
	player->setName("Ziomal");
	FileManager file;
	file.saveGame(player, "test2.txt");
	while (game.isGameRunning()) {
		
	}
	return 0;
}

