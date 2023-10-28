package laco_de_repeticao;

import java.util.Scanner;

public class Ex_8 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num;
		double media_par = 0, media_geral = 0, soma_par = 0, soma_geral = 0;
		double flag_pares = 0, flag_impar = 0, qtd_total = 0;
		
		do {
			System.out.println("Digite um numero inteiro");
			num = sc.nextInt();
			soma_geral += num;
			if (num % 2 == 0 && num != 0) {
				flag_pares++;
				soma_par += num;
			}
			else if (num != 0) {
				flag_impar++;
			}
			qtd_total = flag_impar + flag_pares;
		} while (num != 0);
		
		media_par = soma_par/flag_pares;
		media_geral = soma_geral/qtd_total;
		
		System.out.println("Media dos Numeros Pares: " + media_par);
		System.out.println("Media Geral: " + media_geral);
		
	}

}
