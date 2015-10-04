#pragma once

#include <vector>
#include <string>

#include "Subject.h"
#include "Observer.h"

using namespace std;

class AdvertisingData : public Subject{

private:

	vector<Observer*> observers;
	string kospi;
	string kosdaq; 

public:

	void registerObserver(Observer *o) {
		
		observers.push_back(o);
	}

	void removeObserver(Observer *o) {
		
		observers.pop_back();
	}

	void notifyObservers() {
		
		int size = observers.size();
		for(int i = 0; i < size; i++)
			observers[i]->update();
		
	}
	
	void setMeasurements(string kospi, string kosdaq){
		this->kospi = kospi;
		this->kosdaq = kosdaq;
		
		measurementsChanged();
	}
	
	void measurementsChanged(){
		notifyObservers();
	}

	string getKospi() {
		return kospi;
	}

	string getKosdaq() {
		return kosdaq;
	}
};