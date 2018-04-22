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
	int choice = 0;
	bool inStatsManagement = true;
	while (inStatsManagement) {
		system("cls");
		std::cout << "Masz " << getSkillPoints() << " punktow umjejetnosci do rozdania.\n";
		std::cout << "1. Dodaj 10 pkt do HP(1PU)\n2. Dodaj 5 pkt do many(1PU)\n3. Dodaj 2 pkt do ataku(1PU)\n4. Dodaj 2 pkt do obrony(1PU)\n5. Powrot\n";
		std::cout << "Podaj wybor: "; std::cin >> choice;

		switch (choice)
		{
		case 1: {
			if (getSkillPoints() == 0) {
				std::cout << "Nie mozesz sie rozwijac, masz za malo PU\n";
				system("pause");
				break;
			}
			skillPoints--;
			health+=10;
		}
				break;
		case 2: {
			if (getSkillPoints() == 0) {
				std::cout << "Nie mozesz sie rozwijac, masz za malo PU\n";
				system("pause");
				break;
			}
			skillPoints--;
			mana += 5;

		}
				break;
		case 3: {
			if (getSkillPoints() == 0) {
				std::cout << "Nie mozesz sie rozwijac, masz za malo PU\n";
				system("pause");
				break;
			}
			skillPoints--;
			baseDmg += 2;

		}
				break;
		case 4: {
			if (getSkillPoints() == 0) {
				std::cout << "Nie mozesz sie rozwijac, masz za malo PU\n";
				system("pause");
				break;
			}
			skillPoints--;
			armor += 2;

		}
				break;
		case 5: {
			inStatsManagement = false;

		}
				break;
		default: {
			std::cout << "Podaj popawny wybor!\n";
			system("pause");
		}
				break;
		}

	}

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
	for (int i = 0; i < backpack.size(); i++)
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