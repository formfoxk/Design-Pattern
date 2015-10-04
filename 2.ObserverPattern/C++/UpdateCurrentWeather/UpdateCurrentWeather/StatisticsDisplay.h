#pragma once

#include <iostream>
#include <string>

#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include "WeatherData.h"

using namespace std;

class StatisticsDisplay : public Observer, DisplayElement{

private:

	Subject *subject;
	float tempSum, temp;
	int numReadings;

public:

	StatisticsDisplay(Subject *subject){
		this->subject = subject;
		
		subject->registerObserver(this);
		this->tempSum = 0.0f;
		this->numReadings = 0;
	}

	void display() {
		cout << "[StatisticsDisplay] Average conditions : " << (tempSum/numReadings) 
				<< "F Current conditions: " << temp << "F"<< endl;
	}

	void update(float temp, float humidity, float pressure, float windSpeed){

		this->temp = temp;
		this->tempSum += temp;
		numReadings++;

		display();
	}

};