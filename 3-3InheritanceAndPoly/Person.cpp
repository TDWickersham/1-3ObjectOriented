#include "Person.h"
#include <iostream>
using namespace std;

person::person()
{
	fullname = "";
	happiness = 50;
}

person::person(std::string initialName, int initialHappiness)
{
	fullname = initialName;
	happiness = initialHappiness;
}

void person::greet()
{
	cout << "Hello. My name is " << fullname << "." << endl;
}

bool person::isHappy()
{
	return happiness > 70;
}