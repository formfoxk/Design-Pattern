package singleton_pattern_having_n_number_of_objects;


public class TestSingleton {
	
	public static void main(String[] args){
		
		Singleton s = Singleton.getInstance();
		System.out.println(s.getN());
		
		s = Singleton.getInstance();
		System.out.println(s.getN());
		
		s = Singleton.getInstance();
		System.out.println(s.getN());
		
		s = Singleton.getInstance();
		System.out.println(s.getN());
		
	}
}
