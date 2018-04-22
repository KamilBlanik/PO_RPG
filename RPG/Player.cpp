#include "stdafx.h"
#include "Player.h"

Player::Player() {
	experience = 0;
	skillPoints = 0;
	money = 0;
	inventory.clear();
	backpack.clear();
	

}

Player::~Player() {
	experience = 0;
	skillPoints = 0;
	money = 0;
	inventory.clear();
	backpack.clear();
	
}

void Player::escape() {

}

void Player::statsManagement() {

}

void Player::inventoryManagement() {

}

void Player::backpackManagement() {

}

void Player::talkToNpc(Npc *npc) {

}

void Player::setExp(int exp) {
	this->experience = exp;
}

void Player::setSkillPoints(int sp) {
	this->skillPoints = sp;
}

void Player::setMoney(int money) {
	this->money = money;
}

void Player::addItemToBp(Items *item) {
	backpack.push_back(item);
}

void Player::addItemToInv(Items *item) {
	inventory.push_back(item);
}

void Player::deleteItemFromBp(Items *item) {
	for (int i = 0; i < backpack.size()	; i++)
	{
		if (backpack[i] == item) {
			delete backpack[i];
			backpack.erase(backpack.begin() + i);
			break;
		}
	}
}

void Player::deleteItemFromInv(Items *item) {
	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory[i] == item) {
			delete inventory[i];
			inventory.erase(inventory.begin() + i);
			break;
		}
	}
}

int Player::getExp() {
	return experience;
}

int Player::getSkillPoints() {
	return skillPoints;
}

int Player::getMoney() {
	return money;
}

std::vector<Items*> Player::getInventory() {
	return inventory;
}

std::vector<Items*> Player::getBp() {
	return backpack;
}