package br.ufop.pessoa;

import br.ufop.componentes.Carro;

public class TesteCarro {

	public static void main(String[] args) {
		
		Carro c1 = new Carro("AAA1111");
		c1.setNumeroDePortas(-1);
		//c1.setModelo("Celta");
		c1.imprimeCarro();
	}
	
}
