package bank;

public class PersonnalCustomerDisplay implements Observer, DisplayElement{

	private Subject subject;
	private String kospi, kosdaq;
	
	public PersonnalCustomerDisplay(Subject subject){
		this.subject = subject;
		
		subject.registerObserver(this);
	}
	
	@Override
	public void display() {
		// TODO Auto-generated method stub
		System.out.println("[PersonnalCustomerDisplay] Kospi conditions : " + kospi 
				+ " kosdaq conditions: " + kosdaq);
	}

	@Override
	public void update() {
		// TODO Auto-generated method stub
		AdvertisingData ad = (AdvertisingData)subject;
		this.kospi = ad.getKospi();
		this.kosdaq = ad.getKosdaq();
		
		display();
	}

}
