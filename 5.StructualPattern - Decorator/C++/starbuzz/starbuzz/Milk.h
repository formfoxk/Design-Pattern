#pragma once

#include "Beverage.h"
#include "CondimentDecorator.h"

class Milk : public CondimentDecorator{

private:
	Beverage *beverage;

public:
	Milk(Beverage *beverage) {
		this->beverage = beverage;
	}

	string getDescription() {
		return beverage->getDescription() + ", Milk";
	}

	double cost() {
		return .10 + beverage->cost();
	}
};