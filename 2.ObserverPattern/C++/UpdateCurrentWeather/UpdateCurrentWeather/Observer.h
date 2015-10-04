#pragma once

class Observer{
	
public:
	Observer(){};

	virtual void update(float temp, float humidity, float pressure, float windSpeed) = 0;

};