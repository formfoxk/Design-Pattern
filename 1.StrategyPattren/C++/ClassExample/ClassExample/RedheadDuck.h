#pragma once

#include "Duck.h"
#include "FlyWithWings.h"

class RedheadDuck : public Duck
{
public : 
	RedheadDuck(){ flyBehavior = new FlyWithWings();}

	void display() { cout << "I'm a real Red head duck" << endl; }
};