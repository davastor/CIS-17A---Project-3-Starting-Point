#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

void Guild::AddAdventurer(shared_ptr<Adventurer> adventurer)
{
	_adventurers.push_back(adventurer);
}

/*void Guild::AddMage(std::string name)
{
	auto magePtr = std::make_shared<Mage>(name);
	_mages.push_back(magePtr);
}

void Guild::AddPaladin(std::string name)
{
	auto paladin = std::make_shared<Paladin>(name);
	_paladins.push_back(paladin);
}

void Guild::AddRanger(std::string name)
{
	auto ranger = std::make_shared<Ranger>(name);
	_rangers.push_back(ranger);
}

void Guild::AddWarrior(std::string name)
{
	auto warrior = std::make_shared<Warrior>(name);
	_warriors.push_back(warrior);
}
*/

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	

	
	for (auto adventurers : _adventurers)
	{
		if (adventurers->getClass() == "Warrior")
			warCount++;
		else if (adventurers->getClass() == "Mage")
			mageCount++;
		else if (adventurers->getClass() == "Ranger")
			ranCount++;
		else
			palCount++;
	}

	output += mageCount	> 0 ? to_string(mageCount) + " mages\n" : "No mages!\n";
	output += ranCount	> 0 ? to_string(ranCount) + " rangers\n" : "No rangers!\n";
	output += warCount	> 0 ? to_string(warCount) + " warriors\n" : "No warriors!\n";
	output += palCount	> 0 ? to_string(palCount) + " paladins\n" : "No paladins!\n";
	return output;
}
/*
std::string Guild::AttackWithMages()
{
	std::string output = "You command your mages to attack! \n";
	if (_mages.size() > 0) {
		for (auto mage : _mages) {
			output += mage->Attack() + "\n";
		}
	}
	return output;
}

std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_paladins.size() > 0) {
		for (auto paladin : _paladins) {
			output += paladin->Attack() + "\n";
		}
	}
	return output;
}

std::string Guild::AttackWithRangers()
{
	std::string output = "You command your rangers to attack! \n";
	if (_rangers.size() > 0) {
		for (auto ranger : _rangers) {
			output += ranger->Attack() + "\n";
		}
	}
	return output;
}

std::string Guild::AttackWithWarriors()
{
	string output = "You command your warriors to attack! \n";
	
	if (warCount > 0) {
		for (auto adventurers: _adventurers) {
			output += adventurers->Attack() + "\n";
		}
	}
	return output;
}
*/

std::string Guild::AttackWithAdventurers(int choice)
{
	if (choice == 1)
	{
		string output = "You command your mages to attack! \n";

		if (mageCount > 0) {
			for (auto adventurers : _adventurers) 
			{
				if (adventurers->getClass() == "Mage")
					output += adventurers->Attack() + "\n";
			}
		}
		return output;
	}
	else if (choice == 2)
	{
		string output = "You command your rangerss to attack! \n";

		if (ranCount > 0) {
			for (auto adventurers : _adventurers)
			{
				if (adventurers->getClass() == "Ranger")
					output += adventurers->Attack() + "\n";
			}
		}
		return output;
	}
	else if (choice == 3)
	{
		string output = "You command your warriors to attack! \n";

		if (warCount > 0) {
			for (auto adventurers : _adventurers)
			{
				if (adventurers->getClass() == "Warrior")
					output += adventurers->Attack() + "\n";
			}
		}
		return output;
	}
	else if (choice == 4)
	{
		string output = "You command your paladins to attack! \n";

		if (palCount > 0) {
			for (auto adventurers : _adventurers)
			{
				if (adventurers->getClass() == "Paladin")
					output += adventurers->Attack() + "\n";
			}
		}
		return output;
	}
	else
	{
		string output = "You command everyone to attack! \n";
		
		for (auto adventurers : _adventurers)
			output += adventurers->Attack() + "\n";

		return output;
	}
}
