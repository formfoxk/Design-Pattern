#pragma once

#include <string>
using namespace std;

class Window{
	
public:

	virtual void draw() = 0;
	virtual string getDescription() = 0;

};