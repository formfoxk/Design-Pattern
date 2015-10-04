#pragma once

#include <vector>
#include <string>

#include "Subject.h"
#include "Observer.h"

using namespace std;

class WeatherData : public Subject{

private:

	vector<Observer*> observers;
	float temp, humidity, pressure, windSpeed;

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
			observers[i]->update(temp, humidity, pressure, windSpeed);
		
	}
	
	void setMeasurements(float temp, float humidity, float pressure, float windSpeed){
		this->temp = temp;
		this->humidity = humidity;
		this->pressure = pressure;
		this->windSpeed = windSpeed;

		measurementsChanged();
	}
	
	void measurementsChanged(){
		notifyObservers();
	}
};