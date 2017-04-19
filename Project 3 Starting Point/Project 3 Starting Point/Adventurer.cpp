#include "Adventurer.h"



string Adventurer::Attack()
{

	return getName() + " swings their fist.\n";
	
}

Adventurer::Adventurer(string name, string classType): _name(name), _class(classType)
{
}


Adventurer::~Adventurer()
{
}
