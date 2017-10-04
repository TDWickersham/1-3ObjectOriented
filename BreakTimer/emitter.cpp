#include "emitter.h"
#include <iostream>
#include "sfwdraw.h"
#include <random>

ParticalEmitter::ParticalEmitter()
{
	posx = 400;
	posy = 300;
	spawnInterval = 1;
	spawnAccumulator = 0;
	for (int i = 0; i < 300; ++i)
	{
		particals[i].enabled = false;
	}
}

void ParticalEmitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();
	if (spawnAccumulator > spawnInterval)
	{
		for (int i = 0; i < 300; ++i)
		{
			if (particals[i].enabled == false)
			{
				Partical& baby = particals[i];

				baby.posX = posx;
				baby.posY = posy;

				baby.speedX = rand() % 6 + 1;
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
		if (particals[i].enabled == true)
		{
			particals[i].update();
		}
	}
}

void ParticalEmitter::draw()
{
	for (int i = 0; i < 300; ++i)
	{
		if (particals[i].enabled == true)
		{
			particals[i].draw();
		}
	}
}
