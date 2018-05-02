#include "stdafx.h"
#include "LevelManager.h"


void LevelManager::levelUp(Player player) {
	if (player.experience >= maxExpPerLevel) {
		player.experience -= maxExpPerLevel;
		player.level++;
		player.health = 100;
		player.mana += 10;
		player.armor += 10;
		player.baseDmg += 10;
	}

		
}

void LevelManager::experienceManagement(Player player) {
	maxExpPerLevel = player.level * 50;


}

