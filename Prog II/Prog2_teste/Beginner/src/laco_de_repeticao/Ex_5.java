package laco_de_repeticao;

import java.util.Scanner;

public class Ex_5 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int vetor[] = new int[10];
		int flag_inside = 0, flag_out = 0;
		
		System.out.println("Complete o Vetor");
		for (int i = 0; i < vetor.length; i++) {
			System.out.println("Posicao N[" + (i+1) + "]");
			vetor[i] = sc.nextInt();
		}
		
		for (int i = 0; i < vetor.length; i++) {
			if (vetor[i] >= 10 && vetor[i] <= 20) {
				flag_inside++;
			}
			else {
				flag_out++;
			}
		}
		System.out.print("[");
		for (int i = 0; i < vetor.length; i++) {
			if (i <= ((vetor.length)-2)) {
				System.out.print(" " + vetor[i] + ",");
			}
			else {
				System.out.print(" " + vetor[i]);
			}
		}
		System.out.print("]\n");
		System.out.println("Valores dentro do intervalo = " + flag_inside);
		System.out.println("Valores fora do intervalo = " + flag_out);
		
		
	}

}
