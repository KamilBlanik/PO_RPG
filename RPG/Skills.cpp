#include "stdafx.h"
#include "Skills.h"

Skills::Skills() {
	name = "Nieznany";
}

Skills::~Skills() {
	name = "Nieznany";
	damage = 0;
	price = 0;
	skillLevel = 0;
}

void Skills::setName(std::string name) {
	this->name = name;
}

void Skills::setDamge(int dmg) {
	this->damage = dmg;
}

void Skills::setPrice(int price) {
	this->price = price;
}

void Skills::setSkillLevel(int lvl) {
	this->skillLevel = lvl;
}

std::string Skills::getName() {
	return name;
}

int Skills::getDamage() {
	return damage;
}

int Skills::getPrice() {
	return price;
}

int Skills::getSkillLevel() {
	return skillLevel;
}