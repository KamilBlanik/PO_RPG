#if !defined(_CHARACTER_H)
#define _CHARACTER_H

#include <vector>
#include <string>
#include "stdafx.h"
#include "Skills.h"


class Character {
public:
	Character();
	virtual ~Character();
	std::string name;
	int level;
	int attack();
	int defend();
	void getHitted(int damage);
	bool checkAlive();
	void useSkill(Skills skill);
protected:
	bool isAlive;
	int health;
	int mana;
	int armor;
	int bonusArmor;
	int baseDmg;
	int bonusDmg;
	std::vector<Skills> skill;
};

#endif
