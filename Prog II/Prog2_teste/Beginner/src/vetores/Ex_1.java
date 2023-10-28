package vetores;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int vetor[] = new int[10];
		
		System.out.println("Complete o Vetor");
		for (int i = 0; i < vetor.length; i++) {
			vetor[i] = sc.nextInt();
		}
		
		for (int i = 0; i < vetor.length; i++) {
			if (i % 2 == 0) {
				System.out.println("Posicao N[" + (i) + "] = " + vetor[i]);
			}
		}
	}

}
