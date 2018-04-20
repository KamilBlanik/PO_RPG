#if !defined(_CHARACTER_H)
#define _CHARACTER_H

#include <vector>
#include <string>
#include "stdafx.h"
#include "Skills.h"


class Character {
public:
	std::string name;
	int level;
	void attack(int damage);
	void defend(int incraseArmor);
	void useSkill(Skills skill);
protected:
	int health;
	int mana;
	int armor;
	int baseDmg;
	std::vector<Skills> skill;
};

#endif
