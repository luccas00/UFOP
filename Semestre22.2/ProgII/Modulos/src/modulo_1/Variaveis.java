package modulo_1;

import java.util.Scanner;

public class Variaveis {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a = 5;
		int b = 20;
		int x;
		int idadeJoao;
		
		double w = 0.1;
		double z = 15.75;
		
		float k = 2;
		
		char aux = 'a';
		char aux1 = 98;
		
		boolean testeA;
		boolean maioridade;
		boolean isTrue = true;
		
		x = -2;
		
		System.out.println("Valor da variavel A = " + a);
		System.out.println("Valor da variavel B = " + b);
		System.out.println("Valor da variavel X = " + x);
		
		System.out.println("Valor da variavel W = " + w);
		System.out.println("Valor da variavel Z = " + z);
		
		System.out.println("Valor da variavel K = " + k);
		
		System.out.println("Valor da variavel Aux = " + aux);
		System.out.println("Valor da variavel Aux1 = " + aux1);
		
		if (a < 10) {
			testeA = false;
		} else {
			testeA = true;
		}
		System.out.println("Valor da variavel Booleana Teste = " + testeA);

		if (isTrue)
			System.out.println("Status True: " + isTrue);
			else 
			System.out.println("Status False: " + isTrue);
		
		
		System.out.println("Digite a idade de Joao");
		idadeJoao = sc.nextInt();
		if (idadeJoao >= 18)
			maioridade = true;
			else 
			maioridade = false;
		
		System.out.println("Idade de Joao: " + idadeJoao);
		System.out.println("Joao e maior de idade: " + maioridade);

	}

}
