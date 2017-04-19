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

	if (adventurer->getClass() == "Warrior")
		warCount++;
	else if (adventurer->getClass() == "Mage")
		mageCount++;
	else if (adventurer->getClass() == "Ranger")
		ranCount++;
	else
		palCount++;
}


std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	

	output += mageCount	> 0 ? to_string(mageCount) + " mage(s).\n" : "No mages!\n";
	output += ranCount	> 0 ? to_string(ranCount) + " ranger(s).\n" : "No rangers!\n";
	output += warCount	> 0 ? to_string(warCount) + " warrior(s).\n" : "No warriors!\n";
	output += palCount	> 0 ? to_string(palCount) + " paladin(s).\n" : "No paladins!\n";

	return output;
}

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
		else
			output = "You have no mages to attack with!\n";

		return output;
	}
	else if (choice == 2)
	{
		string output = "You command your rangers to attack! \n";

		if (ranCount > 0) {
			for (auto adventurers : _adventurers)
			{
				if (adventurers->getClass() == "Ranger")
					output += adventurers->Attack() + "\n";
			}
		}
		else
			output = "You have no rangers to attack with!\n";

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
		else
			output = "You have no warriors to attack with!\n";

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
		else
			output = "You have no paladins to attack with!\n";

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
