#if !defined(_SKILLS_H)
#define _SKILLS_H

#include "stdafx.h"
#include <string>

class Skills {
private:
	std::string name;
	int damage;
	int price;
	int skillLevel;
public:
	Skills();
	~Skills();
	void setName(std::string name);
	void setDamge(int dmg);
	void setPrice(int price);
	void setSkillLevel(int lvl);
	std::string getName();
	int getDamage();
	int getPrice();
	int getSkillLevel();
};

#endif 
