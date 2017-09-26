#include "emitter.h"
#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; ++i)
	{
		particles[i].enabled = false;
	}

	spawnAccumulator = 0.0f;
}

void Emitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();

	if (spawnAccumulator > spawnInterval)
	{
		for (int i = 0; i < 100; ++i)
		{
			if (particles[i].enabled == false)
			{
				BaseParticle& baby = particles[i];

				baby.positionX = 400;
				baby.positionY = 300;

				baby.speedX = 0;
				baby.speedY = 2;

				baby.enabled = true;

				spawnAccumulator = 0.0f;
				break;
			}
		}
	}

	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled == true)
		{
			particles[i].update();
		}
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 100; ++i) 
	{
		if (particles[i].enabled)
		{
			particles[i].draw();
		}
	}
}
