#pragma once
#include "Adventurer.h"
#include <string>
class Mage: public Adventurer
{
private:
	//std::string _name;
public:
	Mage(std::string name);
	~Mage();

	//std::string GetName() const { return _name; }
	std::string Attack() { return getName() + " casts magic missile at the darkness!"; }	
};

