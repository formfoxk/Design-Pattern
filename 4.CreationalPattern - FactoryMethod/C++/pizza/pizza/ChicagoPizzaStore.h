#pragma once

#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStyleVeggiePizza.h"
#include "ChicagoStylePepperoniPizza.h"

class ChicagoPizzaStore : public PizzaStore
{

public:

	Pizza *createPizza(string item) {
        	if (item == "cheese") {
            		return new ChicagoStyleCheesePizza();
        	} else if (item == "veggie") {
        	    	return new ChicagoStyleVeggiePizza();
        	} else if (item == "clam") {
        	    	return new ChicagoStyleClamPizza();
        	} else if (item == "pepperoni") {
            		return new ChicagoStylePepperoniPizza();
        	} else return nullptr;
	}

};