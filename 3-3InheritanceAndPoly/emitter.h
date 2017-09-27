#pragma once
#include "GameObject.h"
#include "Partical.h"
#include "Player.h"

class Emitter : public GameObject
{
	float spawnAccumulator;

public:
	Emitter();
	BaseParticle particles[300];

	int particleId;

	float spawnInterval;

	virtual void update(player p);
	virtual void draw();
};