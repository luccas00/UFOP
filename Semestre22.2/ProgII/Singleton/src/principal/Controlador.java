package principal;

import auxiliar.ClasseQualquer;
import secundario.Arvore;

public class Controlador {
	
	public static void main(String[] args) {
	
		Arvore a1 = Arvore.GetInstance();
		
		a1.direita.setNome("Luccas");
		a1.direita.setSexo('M');
		a1.direita.setIdade(22);
		
		a1.esquerda.setNome("Gandalf");
		a1.esquerda.setSexo('m');
		a1.esquerda.setIdade(3700);
		
		Arvore a2 = Arvore.GetInstance();
		Arvore a3 = a1;
		
		System.out.println("A1: " + a1.hashCode());
		System.out.println("A2: " + a2.hashCode());
		System.out.println("A3: " + a3.hashCode());
		
		System.out.println("\nArvore a1");
		System.out.println(a1);
		System.out.println("\nArvore a2");
		System.out.println(a2);
		System.out.println("\nArvore a3");
		System.out.println(a3);
		
		a2.direita.setNome("Joao");
		a2.direita.setSexo('M');
		a2.direita.setIdade(30);
		
		a2.esquerda.setNome("Galadriel");
		a2.esquerda.setSexo('f');
		a2.esquerda.setIdade(9700);
		
		System.out.println("\nArvore a1");
		System.out.println(a1);
		System.out.println("\nArvore a2");
		System.out.println(a2);
		
		ClasseQualquer classe = ClasseQualquer.GetInstance();
		
		System.out.println(classe.hashCode());
		
		
	}
}
