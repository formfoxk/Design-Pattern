package classexample;

public class RubberDuck extends Duck {
	// 각 오리 객체 생성 時 (생성자에서) 자신의 행동 설정
	public RubberDuck() { flyBehavior = new FlyNoWay(); }

	public void quack() { System.out.println("quack of RubberDuck"); }
	public void display() { System.out.println("I'm a real RubberDuck duck"); }
}