#include "stdafx.h"
#include "FileManager.h"


void FileManager::saveGame(Player* player, std::string fileName) {
	std::ofstream save;
	save.open(fileName);

	save << player->getName() << "\n";
	save << player->getLevel() << "\n";
	save << player->getHp() << "\n";
	save << player->getArmor() << "\n";
	save << player->getMana() << "\n";
	save << player->getArmor() << "\n";

	save.close();
}

Player * FileManager::loadGame(std::string fileName) {
	Player *tmp = new Player();

	return tmp;
	delete tmp;
}

