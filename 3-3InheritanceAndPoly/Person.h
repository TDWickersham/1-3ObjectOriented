#pragma once

#include <string>

class person
{
protected:
	std::string fullname;

	int happiness;

public:
	person();
	person(std::string initialName, int initialHappiness);

	virtual void greet();

	bool isHappy();
};
