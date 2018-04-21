#if !defined(_COMBATMANAGER_H)
#define _COMBATMANAGER_H

#include "stdafx.h"
#include "Player.h"
#include "Enemy.h"

class CombatManager {
public:
	Player player;
	Enemy enemy;
	void combat(Player player, Enemy enemy);
};

#endif
