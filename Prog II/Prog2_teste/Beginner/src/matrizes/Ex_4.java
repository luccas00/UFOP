package matrizes;

import java.util.Scanner;

public class Ex_4 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		final int tam = 3;
		int maior_valor = 0;
		int menor_valor = 0;
		
		int matriz[][] = new int[tam][tam];
		
		System.out.println("Complete a Matriz");
		for (int i = 0; i < tam; i++) {
			System.out.println("Linha N[" + (i+1) + "]");
			for (int j = 0; j < tam; j++) {
				matriz[i][j] = sc.nextInt();
			}
		}
		
		maior_valor = matriz[0][0];
		menor_valor = matriz[0][0];
		
		System.out.println("Matriz");
		for (int i = 0; i < tam; i++) {
			System.out.print("[ ");
			for (int j = 0; j < tam; j++) {
				System.out.print(matriz[i][j] + " ");
				if (matriz[i][j] > maior_valor) {
					maior_valor = matriz[i][j];					
				}
				else if (matriz[i][j] < menor_valor) {
					menor_valor = matriz[i][j];
				}
			}
			System.out.println("]");
		}
		
		System.out.println("Menor valor = " + menor_valor);
		System.out.println("Maior valor = " + maior_valor);
	
	}

}
