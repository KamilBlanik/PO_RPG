#include "stdafx.h"
#include "GameManager.h"
#include "FileManager.h"
#include "Skills.h"

int main()
{
	GameManager game;
	game.gameMenu();
	Player* player = new Player();
	Player* player2 = new Player();
	Skills* skill = new Skills();
	Items* i1 = new Items("miecz", "mieczowaty", 10, 11, 31, 11, 5, 66);
	Items* i2 = new Items("kask", "na glowe", 1, 1, 1, 1, 1, 11);
	skill->setName("Lamacz obojczykow");
	skill->setValue(123);
	player->addSkill(skill);
	player->setName("Rudy");
	player->addItemToInv(i2);
	player->addItemToBp(i1);
	player->addItemToBp(i2);
	FileManager file;
	file.saveGame(player, "test4.txt");
	player2 = file.loadGame("test4.txt");
	file.saveGame(player2, "test5.txt");
	while (game.isGameRunning()) {
		
	}
	return 0;
}

