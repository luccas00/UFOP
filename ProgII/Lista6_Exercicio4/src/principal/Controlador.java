package principal;

import secundario.*;

public class Controlador {
	
	public static void main(String[] args) {
				
		AbstractFactoryLanchonete lanchonete1 = new LanchoneteCG();
		AbstractFactoryLanchonete lanchonete2 = new LanchoneteJP();
		AbstractFactoryLanchonete lanchonete3 = new LanchoneteRT();

		Sanduiche s1 = lanchonete1.getSanduiche();
		Sanduiche s2 = lanchonete2.getSanduiche();
		Sanduiche s3 = lanchonete3.getSanduiche();
		
		System.out.println("\nLanchonete CG");
		System.out.println(s1);
		System.out.println("\nLanchonete JP");
		System.out.println(s2);
		System.out.println("\nLanchonete RT");
		System.out.println(s3);
		
	}
	
}
