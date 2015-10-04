#pragma once

#include <iostream>
#include <string>

#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include "WeatherData.h"

using namespace std;

class CurrentConditionsDisplay : public Observer, DisplayElement{

private:

	Subject *subject;
	float temp, humidity;

public:

	CurrentConditionsDisplay(Subject *subject){
		this->subject = subject;
		
		subject->registerObserver(this);
	}

	void display() {
		cout << "[CurrentConditionsDisplay] Current conditions : " << temp
			<< "F degrees and " << humidity << endl;
	}

	void update(float temp, float humidity, float pressure, float windSpeed){

		this->temp = temp;
		this->humidity = humidity;

		display();
	}

};