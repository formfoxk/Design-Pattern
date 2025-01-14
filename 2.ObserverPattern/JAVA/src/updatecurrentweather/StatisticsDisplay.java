package updatecurrentweather;

public class StatisticsDisplay implements Observer, DisplayElement {
	
	private float tempSum;
	private float temperature;
	private int numReadings;
	private Subject weatherData; // ��Ż�𡱽� ���

	public StatisticsDisplay(Subject weatherData) {
		this.weatherData = weatherData;
		weatherData.registerObserver(this);
		
		this.tempSum = 0.0f;
		this.numReadings = 0;
	}

	public void update(float t, float h, float p, float w){
		this.temperature = t;
		
		this.tempSum += temperature;
		numReadings++;
				
		display();
	}

	public void display() {
		System.out.println("[StatisticsDisplay] Average conditions : " + (tempSum/numReadings) 
				+ "F Current conditions: " + temperature + "F");
	}
}
