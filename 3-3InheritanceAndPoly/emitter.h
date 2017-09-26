#pragma once
#include "GameObject.h"
#include "Partical.h"

class Emitter : public GameObject
{
	float spawnAccumulator;

public:
	Emitter();
	BaseParticle particles[100];

	int particleId;

	float spawnInterval;

	virtual void update();
	virtual void draw();
};