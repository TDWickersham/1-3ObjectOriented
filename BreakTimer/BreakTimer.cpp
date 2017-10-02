#include "sfwdraw.h"
#include <iostream>
#include "Timer.h"
#include <string>

int main()
{
	float timeSec;
	std::cout << "how long do you want your timer? (this will be in seconds)" << std::endl;

	std::cin >> timeSec;


	sfw::initContext(800, 600, "BreakTimer");

	unsigned int imgFont = sfw::loadTextureMap("res/fontmap.png", 16, 16);
	

	timer beep;

	sfw::setBackgroundColor(BLACK);

	float DT;
	beep.Reset(timeSec);
	beep.StartTimer = timeSec;
	while (sfw::stepContext())
	{

		DT = sfw::getDeltaTime();

		beep.tickDown(DT);



		if (beep.StartTimer <= 0)
		{
			std::string CurrentTime = std::to_string(beep.StartTimer);
			sfw::drawString(imgFont, "Times Up ", 100, 400, 20, 20);
		}
		else
		{
			std::cout << beep.StartTimer << std::endl;
		}

		std::string CurrentTime = std::to_string(beep.StartTimer);
		sfw::drawString(imgFont, CurrentTime.c_str(), 100, 400, 20, 20);

	}
	sfw::initContext();
	system("pause");
}