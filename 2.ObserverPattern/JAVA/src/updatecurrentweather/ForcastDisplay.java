package updatecurrentweather;

public class ForcastDisplay implements Observer, DisplayElement {
	
	private float temperature, humidity, windSpeed;
	private Subject weatherData; // ��Ż�𡱽� ���

	public ForcastDisplay(Subject weatherData) {
		this.weatherData = weatherData;
		weatherData.registerObserver(this);
	}

	public void update(float t, float h, float p, float w){
		temperature = t;
		humidity = h;
		windSpeed = w;
		display();
	}

	public void display() {
		System.out.println("[ForcastDisplay] Current conditions: " + temperature
				+ "F degrees and " + humidity + "% humidity WindSeed conditions : " + windSpeed + "km/s");
	}
}
