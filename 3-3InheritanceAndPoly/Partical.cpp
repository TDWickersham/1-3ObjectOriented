#include "Partical.h"
#include "sfwdraw.h"



BaseParticle::BaseParticle()
{
}

BaseParticle::BaseParticle(float posX, float posY, float speedx, float speedy)
{
	positionX = posX;
	positionY = posY;
	speedX = speedx;
	speedY = speedy;
}

void BaseParticle::update()
{
	positionX = positionX + speedX;
	positionY = positionY + speedY;

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
