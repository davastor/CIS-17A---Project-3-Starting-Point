#pragma once
#include "Adventurer.h"
#include <string>
class Paladin: public Adventurer
{
private:
	//std::string _name;
public:
	Paladin(std::string name);
	~Paladin();

	//std::string GetName() const { return _name; }
	std::string Attack() { return getName() + " swings a giant maul at his foes!"; }
};

