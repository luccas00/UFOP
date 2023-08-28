package modulo_1;

public class Metodos {
	
	public static void main(String[] args) {
		
		double x = 1, y = 3;

		fazAlgo();
		System.out.println("O valor da soma e: " + soma(x, y));
		
	}
	
	public static void fazAlgo() {
		System.out.println("Passei por aqui");
	}
	
	public static double soma(double a, double b) {
		return a+b;
	}

}
