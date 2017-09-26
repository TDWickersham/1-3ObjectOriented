#include "Officer.h"

#include <iostream>

using namespace std;

Officer::Officer()
{
	fullname = "";
	happiness = 50;
	badgeNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNumber)
{
	fullname = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNumber;
}

void Officer::greet()
{
	cout << "Hello, im officer " << fullname << "." << endl;
	cout << "Badge Number #" << badgeNumber << "." << endl;
}