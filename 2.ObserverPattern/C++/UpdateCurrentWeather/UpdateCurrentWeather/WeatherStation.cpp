#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForcastDisplay.h"

int main(){

	// subject ����
	WeatherData *weatherData = new WeatherData();

	// Observers ����
	CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);
	StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
	ForcastDisplay *forcastDisplay = new ForcastDisplay(weatherData);
		
	// ���� �ùķ��̼� weatherData.setMeasurements(80, 65, 30.4f);
	weatherData->setMeasurements(82, 70, 29.2f, 16);
	weatherData->setMeasurements(78, 90, 29.2f, 18);

	return 0;
}