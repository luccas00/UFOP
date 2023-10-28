package while_do_while;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main(String[] args) {
		
		final int tam = 100;
		
		Scanner sc = new Scanner(System.in);
		
		double vetor_salarios[] = new double[tam];
		double maior_valor = 0;
		double menor_valor = 0;
		double aux = 1;
		
		int i = 0;
		
		do {
			System.out.println("Digite seu salario");
			aux = sc.nextDouble();
			if (aux != 0) {
				vetor_salarios[i] = aux;
				i++;
			}
		} while (aux != 0);
		
		maior_valor = vetor_salarios[0];
		
		for (int j = 0; j < vetor_salarios.length; j++) {
			if (vetor_salarios[j] > maior_valor) {
				maior_valor = vetor_salarios[j];
			}
		}
		
		System.out.println("Maior salario R$" + maior_valor);
		
	}

}
