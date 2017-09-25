#pragma once

class DigitalPiggyBank
{
private:
	float currentBalance = 0;
public:
	void deposit(float net);

	float withdraw();

	float balance() const;
};