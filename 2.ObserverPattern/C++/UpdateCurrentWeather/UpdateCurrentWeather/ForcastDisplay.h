#pragma once

#include <iostream>
#include <string>

#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include "WeatherData.h"

using namespace std;

class ForcastDisplay : public Observer, DisplayElement{

private:

	Subject *subject;
	float temp, humidity, windSpeed;

public:

	ForcastDisplay(Subject *subject){
		this->subject = subject;
		
		subject->registerObserver(this);
	}

	void display() {
		cout << "[ForcastDisplay] Current conditions: " << temp
			<< "F degrees and " << humidity
			<< "% humidity WindSeed conditions : " << windSpeed << "km/s" << endl;
	}

	void update(float temp, float humidity, float pressure, float windSpeed){

		this->temp = temp;
		this->humidity = humidity;
		this->windSpeed = windSpeed;

		display();
	}

};