#include "stdafx.h"
#include "Items.h"

Items::Items(
	std::string name,
	std::string type,
	int price,
	int bonusDmg,
	int bonusHp,
	int bonusMana,
	int bonusArmor,
	int itemLevel) {
	this->name = name;
	this->type = type;
	this->price = price;
	this->bonusArmor = bonusArmor;
	this->bonusDmg = bonusDmg;
	this->bonusHp = bonusHp;
	this->bonusMana = bonusMana;
	this->itemLevel = itemLevel;
}

Items::Items() {
	name = "Nieznany";
	type = "Nieznany";
	price = 0;
	bonusArmor = 0;
	bonusDmg = 0;
	bonusHp = 0;
	bonusMana = 0;
	itemLevel = 0;

}

Items::~Items() {
	name = "Nieznany";
	type = "Nieznany";
	price = 0;
	bonusArmor = 0;
	bonusDmg = 0;
	bonusHp = 0;
	bonusMana = 0;
	itemLevel = 0;
}