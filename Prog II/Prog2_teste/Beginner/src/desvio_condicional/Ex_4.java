package desvio_condicional;

import java.util.Scanner;

public class Ex_4 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num;
		
		System.out.println("Digite um numero inteiro");
		num = sc.nextInt();
		
		if (num >= 0 && num < 10) {
			System.out.println("Grupo 0 a 10");
		}
		else if (num >= 10 && num < 100) {
			System.out.println("Grupo 10 a 100");
		}
		else if (num >= 100 && num < 1000) {
			System.out.println("Grupo 100 a 1000");
		}
		else if (num >= 1000 && num < 10000) {
			System.out.println("Grupo 1000 a 10000");
		}
		else {
			System.out.println("O numero nao pertence a nenhum grupo");
		}
		
	}
	
}
