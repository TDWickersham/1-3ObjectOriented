#pragma once

#include <iostream>
#include "PiggyBank.h"

void DigitalPiggyBank::deposit(float net)
{
	currentBalance = currentBalance + net;
}

float DigitalPiggyBank::withdraw()
{
	float dummy;

	dummy = currentBalance;

	currentBalance = 0;

	return dummy;
}

float DigitalPiggyBank::balance() const
{
	return currentBalance;
}
