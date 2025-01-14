package updatecurrentweather;

public class CurrentConditionsDisplay implements Observer, DisplayElement {
	
	private float temperature, humidity;
	private Subject weatherData; // ��Ż�𡱽� ���

	public CurrentConditionsDisplay(Subject weatherData) {
		this.weatherData = weatherData;
		weatherData.registerObserver(this);
	}

	public void update(float t, float h, float p, float w){
		temperature = t;
		humidity = h;
		display();
	}

	public void display() {
		System.out.println("[CurrentConditionsDisplay] Current conditions: " + temperature
				+ "F degrees and " + humidity + "% humidity");
	}
}
