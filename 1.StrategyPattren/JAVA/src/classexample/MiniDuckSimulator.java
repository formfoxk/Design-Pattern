package classexample;

public class MiniDuckSimulator {

	public static void main(String[] args) {

		Duck mallard = new MallardDuck();
		mallard.quack();
		mallard.performFly();
		
		Duck rubber = new RubberDuck();
		rubber.quack();
		rubber.performFly();

		rubber.setFlyBehavior(new FlyRocketPowered()); // 실행 중 행위 변경
		rubber.performFly();

	}
}
