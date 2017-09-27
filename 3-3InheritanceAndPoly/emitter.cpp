#include "emitter.h"
#include "sfwdraw.h"
#include <random>

Emitter::Emitter()
{
	for (int i = 0; i < 300; ++i)
	{
		particles[i].enabled = false;
	}

	spawnAccumulator = 0.0f;
}

void Emitter::update(player p)
{
	spawnAccumulator += sfw::getDeltaTime();

	if (spawnAccumulator > spawnInterval)
	{
		for (int i = 0; i < 300; ++i)
		{
			if (particles[i].enabled == false)
			{
				BaseParticle& baby = particles[i];

				baby.positionX = p.x;
				baby.positionY = p.y;

				baby.speedX = rand()%6+1;
				baby.speedY = 2;
				baby.lifetime = 6;
				baby.enabled = true;

				spawnAccumulator = 0.0f;
				break;
			}
		}
	}

	for (int i = 0; i < 300; ++i)
	{
		if (particles[i].enabled == true)
		{
			particles[i].update();
		}
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 300; ++i) 
	{
		if (particles[i].enabled)
		{
			particles[i].draw();
		}
	}
}
