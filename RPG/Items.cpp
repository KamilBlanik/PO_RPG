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

void Items::setName(std::string name) {
	this->name = name;
}

void Items::setType(std::string type) {
	this->type = type;
}

void Items::setPrice(int price) {
	this->price = price;
}

void Items::setDmg(int dmg) {
	this->bonusDmg = dmg;
}

void Items::setHp(int hp) {
	this->bonusHp = hp;
}

void Items::setMana(int mana) {
	this->bonusMana = mana;
}

void Items::setArmor(int arm) {
	this->bonusArmor = arm;
}

void Items::setItemLvl(int lvl) {
	this->itemLevel = lvl;
}

std::string Items::getName() {
	return name;
}

std::string Items::getType() {
	return type;
}

int Items::getPrice() {
	return price;
}

int Items::getDmg() {
	return bonusDmg;
}

int Items::getHp() {
	return bonusHp;
}

int Items::getMana() {
	return bonusMana;
}

int Items::getArmor() {
	return bonusArmor;
}

int Items::getItemLvl() {
	return itemLevel;
}
