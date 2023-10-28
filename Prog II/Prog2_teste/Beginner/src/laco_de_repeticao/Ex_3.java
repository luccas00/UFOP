package laco_de_repeticao;

import java.util.Scanner;

public class Ex_3 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double lista[] = new double[6];
		double maior_numero, menor_numero;
		
		System.out.println("Complete o Vetor");
		for (int i = 0; i < lista.length; i++) {
			System.out.println("Posicao N[" + (i+1) + "]");
			lista[i] = sc.nextDouble();
		}
		
		maior_numero = lista[0];
		menor_numero = lista[0];
		
		for (int i = 0; i < lista.length; i++) {
			if (lista[i] > maior_numero) {
				maior_numero = lista[i];
			}
			else if (lista[i] < menor_numero) {
				menor_numero = lista[i];
			}
		}
		
		imprimeVetor(lista, 6);
		System.out.println("Maior numero = " + maior_numero);
		System.out.println("Menor numero = " + menor_numero);
		
	}
	
	public static void imprimeVetor(double vet[], int tam) {
		for (int i = 0; i < tam; i++) {
			System.out.println("Vetor posicao N[" + (i+1) + "] = [" + vet[i] + "]");
		}
	}

}
