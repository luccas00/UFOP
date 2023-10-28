package desvio_condicional;

import java.util.Scanner;

public class Ex_13 {

	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double nota;
		
		System.out.println("Digite a nota do aluno");
		nota = sc.nextDouble();
		
		if (nota == 10 || nota == 9) {
			System.out.println("Conceito A");
		}
		else if (nota == 8 || nota == 7) {
			System.out.println("Conceito B");
		}
		else if (nota == 6 || nota == 5) {
			System.out.println("Conceito C");
		}
		else if (nota < 5 && nota >= 0) {
			System.out.println("Conceito D");
		}
		else if (nota > 10 || nota < 0) {
			System.out.println("Nota invalida");
		}
	}
	
}
