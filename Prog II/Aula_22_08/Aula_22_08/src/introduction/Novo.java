package introduction;

import java.util.Scanner;

public class Novo {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Hello \nHello");
		
		int idade = 0;
		
		int x = 10;
		int y = 20;
		
		
		System.out.println("Valor de X: " + x);
		System.out.println("Valor de Y: " + y);
		System.out.println("Digite a Idade");
		
		idade = sc.nextInt();
		
		boolean menorDeIdade = idade < 18;
		
		if (menorDeIdade == true) {
			System.out.println("O individuo e Menor de Idade");
		}
		else {
			System.out.println("Maioridade");
		}
		
		System.out.println("Hello There !, Obi Wan Said");
		System.out.println((idade < 18) ? "Menor de Idade" : "Maior De Idade");
		
		
		
	}

}
