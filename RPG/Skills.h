#if !defined(_SKILLS_H)
#define _SKILLS_H

#include "stdafx.h"
#include <string>

class Skills {
private:
	std::string name;
	std::string type;
	int value;
	int price;
	int skillLevel;
public:
	Skills();
	~Skills();
	void setName(std::string name);
	void setType(std::string type);
	void setValue(int vl);
	void setPrice(int price);
	void setSkillLevel(int lvl);
	std::string getName();
	std::string getType();
	int getValue();
	int getPrice();
	int getSkillLevel();
};

#endif 
