package class_adapter_pattern;

public class TurkeyAdapter extends WildTurkey implements Duck {

	@Override
	public void quack() {
		// TODO Auto-generated method stub
		super.gobble();
	}
	
	public void fly() {
		for(int i=0; i < 5; i++) {
			super.fly();
		}
	}
}
