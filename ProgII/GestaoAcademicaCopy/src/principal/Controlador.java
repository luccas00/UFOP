package principal;

import java.util.*;
import pessoas.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		System.out.println("* * * INICIO * * *");
		
		Pessoas p1 = new Aluno("Luccas", "001", "2020");
		Pessoas p2 = new Professor("Gandalf", "555", "1111");
		
		System.out.println("* * * ArrayList * * *");
		List<Pessoas> pessoas = new ArrayList<Pessoas>();
		
		pessoas.add(p1);
		pessoas.add(p2);
		
		System.out.println("* * * LinkedList * * *");
		List<Pessoas> pessoasLinkedList = new LinkedList<Pessoas>();
		pessoasLinkedList.addAll(pessoas);
		for (Pessoas p : pessoasLinkedList) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		System.out.println("* * * PriorityQueue * * *");
		Queue<Pessoas> filaPessoas = new PriorityQueue<Pessoas>(3);
		System.out.println(filaPessoas.isEmpty());
		System.out.println(filaPessoas.add(p1));
		filaPessoas.add(p2);
		
		while (!filaPessoas.isEmpty()) {
		    Pessoas pessoa = filaPessoas.poll();
		    System.out.println(pessoa.getNome());
		}
		
		
		
	}

}
