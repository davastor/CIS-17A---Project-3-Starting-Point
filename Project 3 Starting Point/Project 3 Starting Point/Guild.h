#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
#include "Adventurer.h"
using namespace std;

class Guild
{
private:
	int mageCount=0;
	int warCount=0;
	int palCount=0;
	int ranCount=0;

	vector <shared_ptr<Adventurer>> _adventurers;
	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddAdventurer(shared_ptr<Adventurer> adventurer);


	std::string GetInfo();


	std::string AttackWithAdventurers(int choice);
};

