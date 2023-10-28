package while_do_while;

import java.util.Iterator;
import java.util.Scanner;

public class Ex_3 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		final int tam = 100;
		double valores[] = new double[tam];
		
		double aux;
		
		int i = 0;
		double flag_positivo = 0;
		double flag_negativo = 0;
		double flag_total = 0;
		double per_cent_negativo = 0;
		double per_cent_positivo = 0;
		double media;
		
		do {
			System.out.println("Digite um valor real");
			aux = sc.nextDouble();
			if (aux == 0) {
				
			}
			else if (aux > 0) {
				flag_positivo++;
				flag_total++;
				valores[i] = aux;
				i++;
			}
			else if (aux < 0) {
				flag_negativo++;
				flag_total++;
				valores[i] = aux;
				i++;
			}
		} while (aux != 0);
		
		System.out.println("Quantidade total digitada: " + flag_total);
		System.out.println("Qtd positiva: " + flag_positivo);
		System.out.println("Qtd negativa: " + flag_negativo);
		
		per_cent_positivo = (flag_positivo/flag_total)*100;
		per_cent_negativo = (flag_negativo/flag_total)*100;
		
		System.out.println("Negativos: " + per_cent_negativo + "%");
		System.out.println("Positivos: " + per_cent_positivo + "%");
		
		media = somaVetor(valores)/flag_total;
		System.out.println("Media dos valores: " + media);
		
	}
	
	public static double somaVetor(double vet[]) {
		double aux = 0;
		for (int i = 0; i < vet.length; i++) {
			aux += vet[i];
		}
		return aux;
	}
	
}
