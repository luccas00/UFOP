package modulo_1;

import modulo1Auxiliar.ForaPacote;

public class OrganizandoClassesEPacotes {

	public static void main(String[] args) {
		
		DentroPacote aux = new DentroPacote();
		
		aux.idade = 5;
		aux.peso = 63.4;

		System.out.println("Idade = " + aux.idade);
		System.out.println("Peso = " + aux.peso);
		
		ForaPacote demo = new ForaPacote();
		
		demo.conceito = 'A';
		demo.nome = "Luccas";
		demo.nota[0] = 7;
		demo.nota[1] = 9;
		demo.nota[2] = 8;
		
		System.out.println("Nome: " + demo.nome);
		System.out.println("Conceito: " + demo.conceito);
		System.out.println("Nota 1 = " + demo.nota[0]);
		System.out.println("Nota 2 = " + demo.nota[1]);
		System.out.println("Nota 3 = " + demo.nota[2]);
		
		DentroPacote.EscreveNaTela();
		ForaPacote.RealizaAlgo();

	}

}
