package principal;

import java.util.*;

public class Controlador {
	
	public static void main(String[] args) {
	
		Set<Produto> produtos = new HashSet<Produto>();
		
		Produto p1 = new Produto("Arroz", "111", 10);
		Produto p2 = new Produto("Feijao", "222", 20);
		Produto p3 = new Produto("Carne", "222", 30);
		Produto p4 = new Produto("Ovos", "444", 30);
		
		System.out.println("Adicionando P0");
		produtos.add(new Produto("Milho", "000", 3));
		
		System.out.println("\nAdicionando P1");
		if (!produtos.contains(p1)) {
			produtos.add(p1);
		} else {
			System.out.println("Produto ja existe no sistema");
		}
		
		System.out.println("\nAdicionando P2");
		if (!produtos.contains(p2)) {
			produtos.add(p2);
		} else {
			System.out.println("Produto ja existe no sistema");
		}
		
		System.out.println("\nAdicionando P3");
		if (!produtos.contains(p3)) {
			produtos.add(p3);
		} else {
			System.out.println("Produto ja existe no sistema");
		}
		
		System.out.println("\nAdicionando P4");
		if (!produtos.contains(p4)) {
			produtos.add(p4);
		} else {
			System.out.println("Produto ja existe no sistema");
		}
		
		System.out.println("\nPercorrendo e Exibindo Dados");
		for (Produto p : produtos) {
			System.out.println(p.toString());
		}
		
		
	}

}
