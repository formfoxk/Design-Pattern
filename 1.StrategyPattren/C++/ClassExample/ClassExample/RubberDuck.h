#pragma once

#include "Duck.h"
#include "FlyNoWay.h"

class RubberDuck : public Duck
{
public : 
	RubberDuck(){ flyBehavior = new FlyNoWay();}

	void display() { cout << "I'm a real RubberDuck duck" << endl; }
};