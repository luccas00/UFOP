package vetores;

import java.util.Scanner;

public class Ex_4 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int k;
		
		System.out.println("Defina o tamanho do seu vetor");
		k = sc.nextInt();
		
		int vetor[] = new int[k];
		
		System.out.println("Complete o vetor");
		for (int i = 0; i < vetor.length; i++) {
			vetor[i] = sc.nextInt();
		}
		
		System.out.println("Maior valor = " + maiorValor(vetor, k));
		
	}
	
	public static int maiorValor(int vetor[], int tam) {
		int aux;
		aux = vetor[0];
		for (int i = 0; i < tam; i++) {
			if (vetor[i] > aux) {
				aux = vetor[i];
			}
		}
		return aux;
	}

}
