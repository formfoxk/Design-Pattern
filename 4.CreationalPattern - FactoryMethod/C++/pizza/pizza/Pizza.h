#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Pizza
{
protected:

	string name;
	string dough;
	string sauce;
	vector<string> *toppings;

public:

	Pizza(){

		toppings = new vector<string>();

	}

	void prepare(){

		cout << "Prepare " << name << endl;
		cout << "Tossing dough..." << endl;
		cout << "Adding sauce..." << endl;
		cout << "Adding toppings: " << endl;
		
		for (vector<int>::size_type i = 0; i < toppings->size(); i++) 
			cout << toppings->at(i) << endl;

	}

	void bake(){

		cout << "Bake for 25 minutes at 350" << endl;

	}

	void cut(){

		cout << "Cut the pizza into diagonal slices" << endl;

	}

	void box() {
		cout << "Place pizza in official PizzaStore box" << endl;
	}

	string getName(){ return name; }

	string toString() {

		string result;

		result = "---- " + name + " ----\n"
			+ dough + "\n"
			+ sauce + "\n";

		for (vector<int>::size_type i = 0; i < toppings->size(); i++)
			result += toppings->at(i) + "\n";

		return result;

	}

};