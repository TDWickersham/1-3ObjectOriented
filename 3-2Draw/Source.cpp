#include <iostream>

#include "sfwdraw.h"
#include "Player.h"

int main()
{
	sfw::initContext(800, 600, "SFW");

	sfw::setBackgroundColor(BLUE);

	Player me;
	me.x = 400;
	me.y = 300;
	Player2 you;
	you.x = 350;
	you.y = 250;
	while (sfw::stepContext())
	{
		//sfw::drawCircle(400, 300, 70);
		me.update();
		me.draw();

		you.update();
		you.draw();

		if (me.x < 0)
		{
			me.x = 800;
		}
		if (me.y < 0)
		{
			me.y = 600;
		}
		if (me.x > 800)
		{
			me.x = 0;
		}
		if (me.y > 600)
		{
			me.y = 0;
		}
		if (you.x < 0)
		{
			you.x = 800;
		}
		if (you.y < 0)
		{
			you.y = 600;
		}
		if (you.x > 800)
		{
			you.x = 0;
		}
		if (you.y > 600)
		{
			you.y = 0;
		}
	}

	sfw::termContext();
}