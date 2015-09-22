#pragma once

#include "Duck.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck
{
public : 
	MallardDuck(){ flyBehavior = new FlyWithWings();}

	void display() { cout << "I'm a real Mallard duck" << endl; }
};