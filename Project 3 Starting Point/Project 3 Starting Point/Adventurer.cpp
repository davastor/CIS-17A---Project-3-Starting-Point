#include "Adventurer.h"



string Adventurer::Attack()
{

	return getName() + " swings their fist.\n";
	/*if (_class == "Warrior")
		return getName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!";
	else if (_class == "Ranger")
		return getName() + " shoots arrows at his enemies!  PEW PEW PEW";
	else if (_class == "Mage")
		return getName() + " casts magic missle at the darkness!";
	else
		return getName() + " swings a giant maul at his foes!";*/
}

Adventurer::Adventurer(string name, string classType): _name(name), _class(classType)
{
}


Adventurer::~Adventurer()
{
}
