package while_do_while;

import java.util.Scanner;

public class Ex_2 {
	
	public static void main(String[] args) {
		 
		final int tam = 100;
		Scanner sc = new Scanner(System.in);
		int valores[] = new int[tam];
		
		int flag_media = 0;
		int i = 0;
		int aux = 0;
		double media = 0;
		
		do {
			System.out.println("Digite um inteiro");
			aux = sc.nextInt();
			if (aux <= 0) {
				
			}
			else {
				valores[i] = aux;
				flag_media++;
				i++;
			}
		} while (aux > 0);
		
		System.out.println("Quantidade digitada: " + flag_media);
		media = somaVetor(valores)/flag_media;
		System.out.println("Media dos valores: " + media);
	
	}
	
	public static double somaVetor(int vet[]) {
		double aux = 0;
		for (int i = 0; i < vet.length; i++) {
			aux += vet[i];
		}
		return aux;
	}

}