package updatecurrentweather;

public class WeatherStation {

	public static void main(String[] args) {

		// subject 생성
		WeatherData weatherData = new WeatherData();

		// Observers 생성
		CurrentConditionsDisplay currentDisplay = new CurrentConditionsDisplay(weatherData);
		StatisticsDisplay statisticsDisplay = new StatisticsDisplay(weatherData);
		ForcastDisplay ForcastDisplay = new ForcastDisplay(weatherData);
		
		// 기상대 시뮬레이션 weatherData.setMeasurements(80, 65, 30.4f);
		weatherData.setMeasurements(82, 70, 29.2f, 16);
		weatherData.setMeasurements(78, 90, 29.2f, 18);
		 
	}
}
