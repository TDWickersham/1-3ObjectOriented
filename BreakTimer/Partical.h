#pragma once

#include "sfwdraw.h"


class Partical
{
public:

	bool enabled;
	float posX;
	float posY;
	float speedX;
	float speedY;
	Partical();
	Partical(float posx, float posy, float speedx, float speedy);
	void update();
	void draw();
	float lifetime;
};
