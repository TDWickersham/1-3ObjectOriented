#include "Timer.h"

void timer::tickDown(float dt)
{
	float RetVal;
	StartTimer -= dt;
}

void timer::Reset(float time)
{
	StartTimer = time;
	return;
}
