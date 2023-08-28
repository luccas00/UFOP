package principal;

public class TesteIncremental {
	
	public static void main(String[] args) {
		
		for (int i = 0; i < 10; i++) {
			Incremental inc = Incremental.GetInstance();
			System.out.println(inc);
		}
	}
}
