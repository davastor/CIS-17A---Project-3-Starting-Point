#pragma once
#include "Adventurer.h"
#include <string>
class Warrior : public Adventurer
{
private:
	//std::string _name;
public:
	Warrior(std::string name);
	~Warrior();

	//std::string GetName() const { return _name; }
	//std::string Attack() { return getName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};

