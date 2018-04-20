#if !defined(_ENEMY_H)
#define _ENEMY_H

#include <vector>
#include "stdafx.h"
#include "Character.h"
#include "Items.h"

class Enemy : public Character {
public:
	std::vector<Items> loot;
	void dropItem(Items loot);
};

#endif
