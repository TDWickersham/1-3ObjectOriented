#pragma once


#include "Partical.h"

class ParticalEmitter
{
	float spawnAccumulator;

public:
	float posx;
	float posy;
	ParticalEmitter();
	Partical particals[300];

	int particleId;

	float spawnInterval;

	void update();
	void draw();
};