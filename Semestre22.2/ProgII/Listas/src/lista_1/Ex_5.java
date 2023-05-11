package lista_1;

import java.util.Scanner;

public class Ex_5 {
	
	public static void main(String[] args) {
		
		 Scanner sc = new Scanner(System.in);
		 
		 int matriz[][] = new int[3][3];
		 
		 System.out.println("Complete a Matriz");
			for (int i = 0; i < 3; i++) {
				System.out.println("Linha N[" + (i+1) + "]");
				for (int j = 0; j < 3; j++) {
					matriz[i][j] = sc.nextInt();
				}
			}
			
			System.out.println("Matriz");
			for (int i = 0; i < 3; i++) {
				System.out.print("[ ");
				for (int j = 0; j < 3; j++) {
						System.out.print(matriz[i][j] + " ");
				}
				System.out.println("]");
			}
			
			System.out.println("Girando a matriz");
			
			gira_matriz(matriz);
			
			System.out.println("Matriz");
			for (int i = 0; i < 3; i++) {
				System.out.print("[ ");
				for (int j = 0; j < 3; j++) {
						System.out.print(matriz[i][j] + " ");
				}
				System.out.println("]");
			}
		 
	}
	
	public static void gira_matriz(int matriz_qualquer[][]) {
		
		int aux[][] = new int[3][3];
		
		aux[0][0] = matriz_qualquer[2][0];
		aux[0][1] = matriz_qualquer[1][0];
		aux[0][2] = matriz_qualquer[0][0];
		
		aux[1][0] = matriz_qualquer[2][1];
		aux[1][1] = matriz_qualquer[1][1];
		aux[1][2] = matriz_qualquer[0][1];

		aux[2][0] = matriz_qualquer[2][2];
		aux[2][1] = matriz_qualquer[1][2];
		aux[2][2] = matriz_qualquer[0][2];
		
		matriz_qualquer[0][0] = aux[0][0];
		matriz_qualquer[0][1] = aux[0][1];
		matriz_qualquer[0][2] = aux[0][2];
		
		matriz_qualquer[1][0] = aux[1][0];
		matriz_qualquer[1][1] = aux[1][1];
		matriz_qualquer[1][2] = aux[1][2];
		
		matriz_qualquer[2][0] = aux[2][0];
		matriz_qualquer[2][1] = aux[2][1];
		matriz_qualquer[2][2] = aux[2][2];
		
	}

}
