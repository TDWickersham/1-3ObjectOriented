#pragma once

#include <string>

using namespace std;

class GameObject
{
protected:
	float positionX;
	float positionY;
public:
	std::string name;


	bool enabled;




	//GameObject(std::string InputName);

	virtual void update();
	virtual void draw();
};
