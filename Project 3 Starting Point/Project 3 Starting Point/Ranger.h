#pragma once
#include "Adventurer.h"
#include <string>
class Ranger: public Adventurer
{
private:
public:
	Ranger(std::string name);
	~Ranger();

	std::string Attack() { return getName() + " shoots arrows at his enemies!  PEW PEW PEW"; }
};

