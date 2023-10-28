package laco_de_repeticao;

import java.util.Scanner;

public class Ex_7 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double num, soma = 0;
		double qtd_positivos = 0, qtd_negativos = 0, qtd_total = 0;
		
		do {
			System.out.println("Digite um numero inteiro");
			num = sc.nextInt();
			if (num > 0) {
				qtd_positivos++;
			}
			else if (num < 0) {
				qtd_negativos++;
			}
			soma = soma+num;
			System.out.println("Somatorio = " + soma);
			qtd_total = (qtd_negativos+qtd_positivos);
		} while (num != 0);
		
		System.out.println("Quantidade de numeros positivos: " + qtd_positivos);
		System.out.println("Quantidade de numeros negativos: " + qtd_negativos);

		System.out.println(qtd_total);

		System.out.println("Porcentagem de positivos: " + ((qtd_positivos/qtd_total)*100));
		System.out.println("Porcentagem de negativos: " + ((qtd_negativos/qtd_total)*100));
		
	}

}