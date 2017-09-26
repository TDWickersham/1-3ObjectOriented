#pragma once

#include <string>

using namespace std;

class GameObject
{
protected:
	
public:
	std::string name;
	float positionX;
	float positionY;

	bool enabled;




	//GameObject(std::string InputName);

	virtual void update();
	virtual void draw();
};
