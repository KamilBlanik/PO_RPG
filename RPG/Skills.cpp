#include "stdafx.h"
#include "Skills.h"

Skills::Skills() {
	name = "Nieznany";
	value = 0;
	price = 0;
	skillLevel = 0;
}

Skills::~Skills() {
	name = "Nieznany";
	value = 0;
	price = 0;
	skillLevel = 0;
}

void Skills::setName(std::string name) {
	this->name = name;
}

void Skills::setType(std::string type) {
	this->type = type;
}

void Skills::setValue(int val) {
	this->value = val;
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

std::string Skills::getType() {
	return type;
}

int Skills::getValue() {
	return value;
}

int Skills::getPrice() {
	return price;
}

int Skills::getSkillLevel() {
	return skillLevel;
}