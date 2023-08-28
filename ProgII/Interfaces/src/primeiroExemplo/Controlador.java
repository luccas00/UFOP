package primeiroExemplo;

public class Controlador {

	public static void main(String[] args) {
		
		Quadrado q1 = new Quadrado(4);
		Circulo c1 = new Circulo(3);

		System.out.println(c1.area());
		System.out.println(c1.perimetro());
		System.out.println(c1.volume());
		
		System.out.println(q1.area());
		System.out.println(q1.perimetro());
		System.out.println(q1.volume());
		
		iFormaDimensional[] formas = new iFormaDimensional[5];
		formas[0] = q1;
		formas[1] = c1;
		formas[2] = new Circulo(7);
		formas[3] = new Quadrado(3);
		formas[4] = new Circulo(1);
		printFormas(formas);
		
	}
	
	static void printFormas(iFormaDimensional[] formas) {
		for (iFormaDimensional f : formas) {
			System.out.println("Forma: " + f.getClass().getSimpleName());
			System.out.println(f.toString());
		}
	}
}
