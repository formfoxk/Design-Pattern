#include<iostream>
using namespace std;

#include "Duck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "FlyRocketPowered.h"

int main()
{
	Duck *mallard = new MallardDuck();
	mallard->performFly();

	Duck *rubber = new RubberDuck();
	rubber->performFly();

	rubber->setFlyBehavior(new FlyRocketPowered()); // ���� �� ���� ����
	rubber->performFly();

	return 0;
}