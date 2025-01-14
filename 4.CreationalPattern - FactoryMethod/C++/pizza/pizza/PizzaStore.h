#pragma once

#include "Pizza.h"

class PizzaStore
{

public:

	virtual Pizza *createPizza(string type) = 0;

	Pizza *orderPizza(string type){

		Pizza *pizza = createPizza(type);
		cout << "--- Making a " << pizza->getName() + " ---" << endl;
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
	}

};