#include "Partical.h"
#include "sfwdraw.h"
#include "Player.h"



BaseParticle::BaseParticle()
{
}

BaseParticle::BaseParticle(float posX, float posY, float speedx, float speedy)
{
	positionX = posX;
	positionY = posY;
	speedX = speedx;
	speedY = speedy;
	lifetime = 6;
}

void BaseParticle::update()
{
	positionX = positionX + speedX;
	positionY = positionY + speedY;
	if (positionX < 0)
	{
		positionX = 800;
	}
	if (positionY < 0)
	{
		positionY = 600;
	}
	if (positionX > 800)
	{
		positionX = 0;
	}
	if (positionY > 600)
	{
		positionY = 0;
	}
	lifetime -= sfw::getDeltaTime();
	if (lifetime < 0)
	{
		enabled = false;
	}
}

void BaseParticle::draw()
{
	sfw::drawCircle(positionX, positionY, 2);

}



BoxPartical::BoxPartical()
{
}

BoxPartical::BoxPartical(float posX, float posY, float speed, int w, int h)
{
	positionX = posX;
	positionY = posY;
	Speed = speed;
	width = w;
	height = h;
}

void BoxPartical::update()
{
	positionX = positionX + Speed;
	positionY = positionY + Speed;
}

void BoxPartical::draw()
{
	sfw::drawLine(positionX - width / 2, positionY - height / 2, positionX - width / 2, positionY + height / 2);
	sfw::drawLine(positionX - width / 2, positionY + height / 2, positionX + width / 2, positionY + height / 2);
	sfw::drawLine(positionX - width / 2, positionY - height / 2, positionX + width / 2, positionY - height / 2);
	sfw::drawLine(positionX + width / 2, positionY - height / 2, positionX + width / 2, positionY + height / 2);
}
