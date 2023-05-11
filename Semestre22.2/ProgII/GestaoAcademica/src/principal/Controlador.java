package principal;

import java.util.*;
import pessoas.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		System.out.println("* * * INICIO * * *");
		
		Pessoas p0 = new Aluno("Luccas", "2020.02");
		Pessoas p1 = new Professor("Gandalf", "Magia");
	 	Pessoas p2 = new Monitor("Elrond", "2021.01");
	 	Pessoas p3 = new Aluno("Saruman", "2018.02");
		Pessoas p4 = new Professor("Galadriel", "2000.01");
		Pessoas p5 = new Aluno("Joao", "2020.01");
		Pessoas p6 = new Aluno("Marcos", "2020.01");
		Pessoas p7 = new Aluno("Joao", "2020.01");
		
		System.out.println("* * * ArrayList * * *");
		List<Pessoas> pessoas = new ArrayList<Pessoas>();
		
		pessoas.add(p0);
		pessoas.add(p1);
		pessoas.add(p2);
		pessoas.add(p3);
		pessoas.add(p4);
		
		for (Pessoas p : pessoas) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		System.out.println("Esta vazio ? " + pessoas.isEmpty());
		System.out.println(pessoas.size());
		System.out.println(pessoas.contains(p1));
		System.out.println(pessoas.contains(p2));
		
		if (pessoas.contains(p2)) {
			
		} else {
			pessoas.add(p2);
		}
		
		
		System.out.println(pessoas.contains(p2));
		System.out.println(pessoas.size());
		
		
		System.out.println("* * * Collections Shuffe * * *");
		Collections.shuffle(pessoas);
		for (Pessoas p : pessoas) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		
		System.out.println("* * * Collections Reverse * * *");
		Collections.reverse(pessoas);
		for (Pessoas p : pessoas) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		System.out.println("* * * Collections Swap * * *");
		Collections.swap(pessoas, 0, 4);
		for (Pessoas p : pessoas) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		System.out.println("* * * LinkedList * * *");
		List<Pessoas> pessoasLinkedList = new LinkedList<Pessoas>();
		pessoasLinkedList.addAll(pessoas);
		for (Pessoas p : pessoasLinkedList) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		System.out.println("* * * PriorityQueue * * *");
		Queue<Pessoas> filaPessoas = new PriorityQueue<Pessoas>();
		filaPessoas.add(p2);
		filaPessoas.add(p1);
		filaPessoas.add(p1);
		System.out.println(filaPessoas.isEmpty());
		
		while (!filaPessoas.isEmpty()) {
			Pessoas primeiro = filaPessoas.poll();
			primeiro.imprimeObjeto();
		}
		
		System.out.println(filaPessoas.isEmpty());
		
		System.out.println("* * * Set * * *");
		Set<Pessoas> setPessoas = new HashSet<Pessoas>();
		
		setPessoas.add(p1);
		setPessoas.add(p2);
		setPessoas.add(p1);
		System.out.println(setPessoas.isEmpty());
		
		for (Pessoas p : setPessoas) {
			p.imprimeObjeto();
			System.out.println();
		}
		
		System.out.println(setPessoas.size());
		
		System.out.println(p1);
		
		
		
		System.out.println(p7.equals(p5));
		System.out.println(p7.equals(p4));
		System.out.println(p7.equals(p6));
		
		
	}

}
