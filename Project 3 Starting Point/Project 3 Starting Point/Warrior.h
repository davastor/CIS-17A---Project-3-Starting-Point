#pragma once
#include "Adventurer.h"
#include <string>

class Warrior : public Adventurer
{
private:
public:
	Warrior(std::string name);
	~Warrior();

	std::string Attack() { return getName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};

