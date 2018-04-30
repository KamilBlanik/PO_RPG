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
			health += 10;
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
	system("cls");
	std::cout << "Aktualnie uzywasz: ";

}

void Player::backpackManagement() {
	bool inBPManagement = true;
	int choice = 0;
	while (inBPManagement)
	{
		system("cls");
		std::cout << "Masz w plecaku " << backpack.size() << " przedmiotow\nOto one:\n";
		for (unsigned int i = 0; i < backpack.size(); i++)
		{
			std::cout << i << ": " << backpack[i] << std::endl;
		}
		std::cout << "\n1. Zniszcz przedmiot\n2. Zaloz przedmiot.\n3. Powrot";
		std::cout << "Podaj wybor: "; std::cin >> choice; std::cout << std::endl;
		switch (choice)
		{
		case 1: {
			int i;
			std::cout << "Podaj numer przedmiotu: "; std::cin >> i;
			deleteItemFromBp(i);
		}
		case 2: {
			//TODO
			std::cout << "Gdzie zalozyc?\n";
		}
				break;
		case 3: {
			inBPManagement = false;
		}
				break;
		default: {
			std::cout << "Podaj poprawny wybor!\n";
			system("cls");
		}
			break;
		}
	}

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
	this->backpack.push_back(item);
}

void Player::addItemToInv(Items *item) {
	this->inventory.push_back(item);
}

void Player::deleteItemFromBp(int i) {

	delete this->backpack[i];
	this->backpack.erase(backpack.begin() + i);

}

void Player::deleteItemFromInv(int i) {

	delete this->inventory[i];
	this->inventory.erase(inventory.begin() + i);

}

int Player::getExp() {
	return this->experience;
}

int Player::getSkillPoints() {
	return this->skillPoints;
}

int Player::getMoney() {
	return this->money;
}

std::vector<Items*> Player::getInventory() {
	return this->inventory;
}

std::vector<Items*> Player::getBp() {
	return this->backpack;
}