package principal;

import java.util.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		String nome1 = "Ana";
		String nome2 = "Maria";
		
		Set<String> nomes = new HashSet<String>();
		String[] nomesPadrao = {"Luccas", "Joao", "Paulo", "Luccas", "Marcos"};
		
		for (String s : nomesPadrao) {
			nomes.add(s);
		}
		
		nomes.add(nome1);
		nomes.add(nome2);
		
		System.out.println("Imprimindo todos os Nomes:");
		System.out.println(nomes);
		
		System.out.println("\nTentando remover 'Alex' ");
		if (!nomes.remove("Alex")) {
			System.out.println("Alex nao esta no conjunto");
		} else {
			System.out.println("Sucesso");
		}
		
		System.out.println("\nTentando remover 'Marcos' ");
		if (!nomes.remove("Marcos")) {
			System.out.println("Marcos nao esta no conjunto");
		} else {
			System.out.println("Sucesso");
		}
		
		System.out.println("\nVerificando se um nome faz parte");
		if (nomes.contains("Luccas")) {
			System.out.println("Luccas faz parte do conjunto");
		}
		
		System.out.println("\nImprimindo todos os Nomes:");
		System.out.println(nomes);
		
		System.out.println("\nLimpando a Set");
		if (!nomes.isEmpty()) {
			nomes.clear();
		}
		
		System.out.println(nomes);
		
	}

}
