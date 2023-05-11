package modulo_1;

import java.util.Scanner;

public class VetoresMatrizes {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
//		int numbers[] = new int[5];
//		for (int i = 0; i < numbers.length; i++) {
//			numbers[i] = sc.nextInt();
//		}
//		
//		for (int i = 0; i < numbers.length; i++) {
//			System.out.println("Numbers[" + i + "] = " + numbers[i]);
//		}
		
		
		int matrix[][] = new int[5][3];
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				matrix[i][j] = i+j;
			}
		}
		
		for (int i = 0; i < matrix.length; i++) {
			System.out.print("[");
			for (int j = 0; j <  matrix[i].length; j++) {
				System.out.print(matrix[i][j] + " ");
			}
			System.out.println("]");
		}
		
		
	}

}
