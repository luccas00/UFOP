package vetores;

import java.util.Scanner;

public class Ex_0 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int vetor[] = new int[10];
		double media;
		
		System.out.println("Complete o Vetor");
		for (int i = 0; i < vetor.length; i++) {
			System.out.println("Posicao N[" + (i+1) + "]");
			vetor[i] = sc.nextInt();
		}
		
		media = media(vetor, 10);
		System.out.println("Media do vetor = " + media);
		
	}
	
	public static double media(int vet[], int tam) {
		double aux = 0, media;
		for (int i = 0; i < tam; i++) {
			aux += (double)vet[i];
		}
		media = aux/tam;
		return media;
	}

}
