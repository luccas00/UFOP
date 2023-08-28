package principal;

import secundario.*;

public class Controlador {
	
	public static void main(String[] args) {
				
		LanchoneteFactory fabrica1 = new LanchoneteJP();
		LanchoneteFactory fabrica2 = new LanchoneteCG();
		LanchoneteFactory fabrica3 = new LanchoneteRT();
		
		Lanchonete l1 = new Lanchonete(fabrica1);
		Lanchonete l2 = new Lanchonete(fabrica2);
		Lanchonete l3 = new Lanchonete(fabrica3);
		
		System.out.println("\nLanchonete 1");
		Sanduiche s1 = l1.getSanduiche();
		Bebidas b1 = l1.getBebida();
		
		System.out.println("\nLanchonete 2");
		Sanduiche s2 = l2.getSanduiche();
		Bebidas b2 = l2.getBebida();
		
		System.out.println("\nLanchonete 3");
		Sanduiche s3 = l3.getSanduiche();
		Bebidas b3 = l3.getBebida();
		
		System.out.println("\n-\n" + s1);
		System.out.println(b1);
		System.out.println("\n-\n" + s2);
		System.out.println(b2);
		System.out.println("\n-\n" + s3);
		System.out.println(b3);
		
			
	}
	
}
