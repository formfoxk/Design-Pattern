#pragma once

#include "FlyBehavior.h"

class Duck
{
protected :
	
	FlyBehavior *flyBehavior;

public :

	virtual void display() = 0;

	void swim(){ cout << "All ducks float, even decoys!" << endl;}
	void performFly(){ flyBehavior->fly(); } 
	void setFlyBehavior(FlyBehavior *fb) { flyBehavior = fb; }
};