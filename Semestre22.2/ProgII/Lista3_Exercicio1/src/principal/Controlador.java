package principal;

public class Controlador {
	
	public static void main(String[] args) {
		
		Peixe p1 = new Peixe("Francisco", "Agua Salgada");
		Cachorro c1 = new Cachorro("Thor","PitBull");
	
		p1.setPeso(20);
		c1.setPeso(45);

		System.out.println(p1.toString() + "\n- - - - -");
		System.out.println(c1.toString() + "\n- - - - -");
		
	}

}
