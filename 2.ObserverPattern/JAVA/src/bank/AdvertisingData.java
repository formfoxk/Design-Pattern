package bank;

import java.util.ArrayList;

public class AdvertisingData implements Subject{

	ArrayList<Observer> observers = null;
	String kospi = null;
	String kosdaq = null;
	
	public AdvertisingData() {
		// TODO Auto-generated constructor stub
		
		observers = new ArrayList<Observer>();
	}

	@Override
	public void registerObserver(Observer o) {
		// TODO Auto-generated method stub
		observers.add(o);
	}

	@Override
	public void removeObserver(Observer o) {
		// TODO Auto-generated method stub
		observers.remove(o);
	}

	@Override
	public void notifyObservers() {
		// TODO Auto-generated method stub
		for (Observer observer : observers) 
			observer.update();
	}
	
	public void setMeasurements(String kospi, String kosdaq){
		this.kospi = kospi;
		this.kosdaq = kosdaq;
		
		measurementsChanged();
	}
	
	public void measurementsChanged(){
		notifyObservers();
	}

	public String getKospi() {
		return kospi;
	}

	public String getKosdaq() {
		return kosdaq;
	}
	
}
