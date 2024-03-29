package matrizes;

import java.util.Scanner;

public class Ex_3 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		final int tam = 3;
		
		int matriz[][] = new int[tam][tam];
		
		System.out.println("Complete a Matriz");
		for (int i = 0; i < tam; i++) {
			System.out.println("Linha N[" + (i+1) + "]");
			for (int j = 0; j < tam; j++) {
				matriz[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Matriz");
		for (int i = 0; i < tam; i++) {
			System.out.print("[ ");
			for (int j = 0; j < tam; j++) {
					System.out.print(matriz[i][j] + " ");
			}
			System.out.println("]");
		}
		
		System.out.println("Transposta");
		for (int i = 0; i < tam; i++) {
			System.out.print("[ ");
			for (int j = 0; j < tam; j++) {
					System.out.print(matriz[j][i] + " ");
			}
			System.out.println("]");
		}

	}

}
