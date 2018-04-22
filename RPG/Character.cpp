#include "stdafx.h"
#include "Character.h"


Character::Character() {
	name = "Bezimienny";
	isAlive = true;
	level = 0;
	health = 100;
	mana = 0;
	armor = 0;
	baseDmg = 10;
	bonusDmg = 0;

}

Character::~Character() {
	name = "Bezimienny";
	isAlive = false;
	level = 0;
	health = 0;
	mana = 0;
	armor = 0;
	baseDmg = 0;
	bonusDmg = 0;
}

int Character::attack() {
	return baseDmg + bonusDmg;
}

int Character::defend() {
	return armor = armor + bonusArmor;
}

void Character::getHit(int damage) {
	health = health - int(damage-(damage*(armor/100)));
	
}

bool Character::checkAlive() {
	if (health > 0) {

		return true;
	}
	else
	{
		return false;
	}
}

void Character::useSkill(Skills skill) {

}

