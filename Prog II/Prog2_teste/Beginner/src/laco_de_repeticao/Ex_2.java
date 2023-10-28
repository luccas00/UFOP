package laco_de_repeticao;

import java.util.Scanner;

public class Ex_2 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int vetor[] = new int[10];
		int maior_numero;
		int flag = 0;
		
		System.out.println("Complete o Vetor");
		for (int i = 0; i < vetor.length; i++) {
			System.out.println("Posicao N[" + (i+1) + "]");
			vetor[i] = sc.nextInt();
		}
		
		maior_numero = vetor[0];
		
		for (int i = 0; i < vetor.length; i++) {
			if (vetor[i] > maior_numero) {
				maior_numero = vetor[i];
				flag = i;
			}
		}
		
		imprimeVetor(vetor, 10);
		
		System.out.println("Maior valor = " + maior_numero);
		System.out.println("Posicao = N[" + (flag+1) + "]");
	
	}
	
	public static void imprimeVetor(int vet[], int tam) {
		for (int i = 0; i < tam; i++) {
			System.out.println("Vetor posicao N[" + (i+1) + "] = [" + vet[i] + "]");
		}
	}

}
