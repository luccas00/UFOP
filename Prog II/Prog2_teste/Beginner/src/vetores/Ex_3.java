package vetores;

import java.util.Scanner;

public class Ex_3 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int vetor[] = new int[5];
		
		System.out.println("Complete o vetor");
		for (int i = 0; i < vetor.length; i++) {
			System.out.println("Posicao N[" + (i+1) +"]");
			vetor[i] = sc.nextInt();
		}
		
		for (int i = (vetor.length-1); i >= 0; i--) {
			System.out.print(vetor[i] + " ");
		}
		
	}

}
