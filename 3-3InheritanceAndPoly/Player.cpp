#include "Player.h"
#include "sfwdraw.h"

//player::player()
//{
//	name = "Player";
//}

void player::update()
{
	if (sfw::getKey('W'))
	{
		y++;
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

void player::draw()
{
	sfw::drawCircle(x, y, 25);
}
