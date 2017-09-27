#pragma once

#include "sfwdraw.h"
#include "GameObject.h"

class BaseParticle : public GameObject
{
public:
	float speedX;
	float speedY;
	BaseParticle();
	BaseParticle(float posX, float posY, float speedx, float speedy);
	virtual void update() override;
	virtual void draw() override;
	float lifetime;
};

class BoxPartical : public BaseParticle
{
public:
	float Speed;
	int width;
	int height;
	BoxPartical();
	BoxPartical(float posX, float posY, float speed, int w, int h);
	virtual void update() override;
	virtual void draw() override;
};