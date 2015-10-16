#pragma once

#include "NYStyleCheesePizza.h"
#include "NYStyleVeggiePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"

class NYPizzaStore : public PizzaStore
{
public:

	Pizza *createPizza(string item) {
		if (item == "cheese") {
			return new NYStyleCheesePizza();
		} else if (item == "veggie") {
			return new NYStyleVeggiePizza();
		} else if (item == "clam") {
			return new NYStyleClamPizza();
		} else if (item == "pepperoni") {
			return new NYStylePepperoniPizza();
		} else return nullptr;
	}

};