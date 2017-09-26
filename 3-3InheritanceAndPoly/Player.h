#pragma once

#include "GameObject.h"

class player : public GameObject
{
public:
	float x;
	float y;
	
	//player();

	virtual void update() override;
	virtual void draw() override;
};