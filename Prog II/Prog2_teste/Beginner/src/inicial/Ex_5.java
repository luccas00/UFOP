package inicial;

import java.util.Scanner;

public class Ex_5 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double valor_produto, desconto, valor_final;
		
		int k;
		
		System.out.println("Digite o valor do produto");
		valor_produto = sc.nextDouble();
		
		desconto = 0;

		for (k = 0; k < 1; k++) {
			System.out.println("Digite a porcentagem de desconto\nNumeros reais entre 0 a 100");
			desconto = sc.nextDouble();
			if (desconto < 0 || desconto > 100) {
				System.out.println("Numero invalido\nDigite Novamente");
				k--;
			}
			else {
				k++;
			}
		}
		
		valor_final = valor_produto-(valor_produto*(desconto/100));
		
		System.out.println("Valor final do produto = " + valor_final);
		
	}
}