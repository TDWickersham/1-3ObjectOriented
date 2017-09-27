#include <iostream>
#include "Person.h"
#include "Officer.h"
#include "GameObject.h"
#include "Player.h"
#include "sfwdraw.h"
#include "Partical.h"
#include "emitter.h"
#include <ctime>


using namespace std;


int main()
{
	/*person me("Caleb Seay", 78);
	
	me.greet();
	me.isHappy();

	Officer Caleb("Caleb Seay", 25, 179067);*/

	string name;
	cout << "Enter a name to being the game" << endl;
	cin >> name;
	GameObject you;
	you.name = name;
	/*you.update();
	you.draw();*/

	sfw::initContext(800, 600, "My Game");
	srand(time(NULL));
	BaseParticle pew(100, 100, 5, 5);
	BoxPartical zoom(50, 50, 5, 10, 20);


	sfw::setBackgroundColor(BLACK);

	player it;
	it.x = 400;
	it.y = 300;

	Emitter wee;
	wee.spawnInterval = .2f;
	while (sfw::stepContext())
	{
		it.update();
		it.draw();

		pew.update();
		pew.draw();

		zoom.update();
		zoom.draw();

		wee.update(it);
		wee.draw();
		if (it.x < 0)
		{
			it.x = 800;
		}
		if (it.y < 0)
		{
			it.y = 600;
		}
		if (it.x > 800)
		{
			it.x = 0;
		}
		if (it.y > 600)
		{
			it.y = 0;
		}
	}

	sfw::initContext();
	system("pause");
}