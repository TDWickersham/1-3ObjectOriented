#pragma once
#include "sfwdraw.h"

class timer
{
public:
	float StartTimer;
	void tickDown(float dt);
	void Reset(float time);
};
