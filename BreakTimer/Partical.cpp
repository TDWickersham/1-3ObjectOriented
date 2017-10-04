#include "Partical.h"
#include <iostream>
#include "sfwdraw.h"

Partical::Partical()
{

}

Partical::Partical(float posx, float posy, float speedx, float speedy)
{
	posX = posx;
	posY = posy;
	speedX = speedx;
	speedY = speedy;
}

void Partical::update()
{
	posX += speedX;
	posY += speedY;
	if (posX < 0)
	{
		posX = 800;
	}
	if (posY < 0)
	{
		posY = 600;
	}
	if (posX > 800)
	{
		posX = 0;
	}
	if (posY > 600)
	{
		posY = 0;
	}
}

void Partical::draw()
{
	sfw::drawCircle(posX, posY, 2);
}
