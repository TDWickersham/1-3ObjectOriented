#pragma once

#include <iostream>
#include "Television.h"

using namespace std;

Television::Television(int chn, int vol)
{
	currentChannel = chn;
	currentVolume = vol;
}

void Television::Printchannel()
{
	cout << currentChannel << endl;
	cout << currentVolume << endl;
}

void Television::increaseVolume()
{
	currentVolume = currentVolume + 1;
}

void Television::decreaseVolume()
{
	currentVolume = currentVolume - 1;
}

void Television::increaseChannel()
{
	currentChannel = currentChannel + 1;
}

void Television::decreaseChannel()
{
	currentChannel = currentChannel - 1;
}
