package singleton_pattern_having_n_number_of_objects;

public class Singleton {
	private volatile static Singleton uniqueInstance;
	private final static int size = 3;
	private static int newCount = 0;
	private int n = 100;
	
	private Singleton() {
	}

	public static Singleton getInstance() {
						
		if (uniqueInstance == null) {
			synchronized (Singleton.class) { // 맨 처음 한 번만 실행(동기화)
				if (uniqueInstance == null) {
					uniqueInstance = new Singleton();
				}
				else{
					uniqueInstance = null;
				}
			}
		}
		
		if(uniqueInstance != null && newCount >= size)
			uniqueInstance = null;
		
		synchronized (Singleton.class){
			newCount++;
		}
		
		return uniqueInstance;
	}
	
	public int getN() { return n; }
}