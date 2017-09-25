#include <iostream>
#include "Television.h"
#include "PiggyBank.h"
#include "servermanger.h"

using namespace std;

int main()
{
	int chn;
	int vol;


	cout << "What channel would you like and at what volume? " << endl;
	cin >> chn;
	cin >> vol;

	Television flatscreen(chn, vol);

	flatscreen.Printchannel();

	flatscreen.increaseChannel();

	flatscreen.Printchannel();


	DigitalPiggyBank piggy;

	piggy.deposit(500.00);

	cout << piggy.withdraw() << endl;



	system("pause");

}