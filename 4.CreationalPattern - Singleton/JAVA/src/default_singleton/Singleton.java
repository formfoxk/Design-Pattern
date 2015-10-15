package default_singleton;

public class Singleton {
	private static final Singleton instance;
	private int n;
	
	static {
		try {
			instance = new Singleton();
		} catch (Exception e) {
			throw new RuntimeException("err or", e);
		}
	}

	public static Singleton getInstance() {
		return instance;
	}

	public int getN(){ return n; } 
	
	private Singleton() {
		n = 100;
	}
}