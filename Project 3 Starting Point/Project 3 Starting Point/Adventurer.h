#pragma once
#include <string>
using namespace std;

class Adventurer
{
private:
	string _name;
	string _class;
public:
	string getName() { return _name; }
	string getClass() { return _class; }
	virtual string Attack();

	//string Attack() { return _name; }

	Adventurer(string name, string classType);
	~Adventurer();
};

