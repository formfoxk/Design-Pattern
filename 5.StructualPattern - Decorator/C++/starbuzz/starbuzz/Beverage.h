#pragma once

#include<string>
using namespace std;

class Beverage{

protected:
	string description;

public:
	Beverage():description("Unknown Beverage"){}

	string getDescription() {
		return description;
	}

	virtual double cost() = 0;
};