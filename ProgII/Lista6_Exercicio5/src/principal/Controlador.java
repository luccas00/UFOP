package principal;

import Factory.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		FabricaDeCarro fiat = new FabricaFiat();
		FabricaDeCarro ford = new FabricaFord();
		
		CarroPopular c1 = fiat.criarCarroPopular("Luccas");
		CarroPopular c2 = ford.criarCarroPopular();
		
		CarroSedan c3 = fiat.criarCarroSedan();
		CarroSedan c4 = ford.criarCarroSedan("Joao");
		
		c1.exibirInfoPopular();
		c2.exibirInfoPopular();
		c3.exibirInfoSedan();
		c4.exibirInfoSedan();

		
	}

}
