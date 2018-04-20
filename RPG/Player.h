#if !defined(_PLAYER_H)
#define _PLAYER_H

#include <vector>
#include "stdafx.h"
#include "Character.h"
#include "Items.h"
#include "Npc.h"

class Player : public Character {
public:
	int experience;
	std::vector<Items> inventory;
	std::vector<Items> backpack;
	int money;
	void escape();
	void statsManagement();
	void inventoryManagement();
	void backpackManagement();
	void talkToNpc(Npc npc);
};

#endif
