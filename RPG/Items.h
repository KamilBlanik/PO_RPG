#if !defined(_ITEMS_H)
#define _ITEMS_H

#include <string>
#include "stdafx.h"

class Items {
private:
	std::string name;
	std::string type;
	int price;
	int bonusDmg;
	int bonusHp;
	int bonusMana;
	int bonusArmor;
	int itemLevel;
public:
	Items(
		std::string name, 
		std::string type, 
		int price,
		int bonusDmg,
		int bonusHp,
		int bonusMana,
		int bonusArmor,
		int itemLevel);
	Items();
	~Items();

};

#endif
