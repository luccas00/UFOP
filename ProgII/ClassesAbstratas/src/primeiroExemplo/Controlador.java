package primeiroExemplo;

import java.util.ArrayList;

public class Controlador {
	
	public static void main(String[] args) {
		
		Pessoa joao = new PessoaFisica("Joao", 20, "(11)98877-6615", "joao@teste.com.br", "011.022.033-44");
		Pessoa cocaCola = new PessoaJuridica("Coca-Cola", 107, "(11)2511-0101", "cetral@cocacola.com.br", "11.222.333/0001-11");
		Pessoa pepsi = new PessoaJuridica("Pepsi", 102, "(11)2511-0101", "cetral@cocacola.com.br", "11.222.333/0001-11");
		
		ArrayList<Pessoa> pessoas = new ArrayList<>();
		
		pessoas.add(cocaCola);
		pessoas.add(joao);
		pessoas.add(pepsi);
		
		for (Pessoa p : pessoas) {
			p.imprimirDados();
			p.pagarImposto();
		}

	}

}
