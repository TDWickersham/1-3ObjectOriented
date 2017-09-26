#include <iostream>
#include "Player.h"
#include "sfwdraw.h"

void Player::update()
{
	if (sfw::getKey('W'))
	{
		y ++;
	}

	if (sfw::getKey('S'))
	{
		y--;
	}
	if (sfw::getKey('A'))
	{
		x--;
	}
	if (sfw::getKey('D'))
	{
		x++;
	}
}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}

void Player2::update()
{
	if (sfw::getKey('I'))
	{
		y++;
	}
	if (sfw::getKey('K'))
	{
		y--;
	}
	if (sfw::getKey('J'))
	{
		x--;
	}
	if (sfw::getKey('L'))
	{
		x++;
	}

}

void Player2::draw()
{
	sfw::drawCircle(x, y, 25);
}