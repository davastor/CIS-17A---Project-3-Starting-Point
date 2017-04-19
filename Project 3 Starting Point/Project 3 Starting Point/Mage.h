#pragma once
#include "Adventurer.h"
#include <string>
class Mage: public Adventurer
{
private:
public:
	Mage(std::string name);
	~Mage();

	std::string Attack() { return getName() + " casts magic missile at the darkness!"; }	
};

