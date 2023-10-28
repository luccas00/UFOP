package laco_de_repeticao;

import java.util.Scanner;

public class Fatorial {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num, aux;
		
		System.out.println("Digite um numero inteiro");
		num = sc.nextInt();
		
		for (int i = 1; i <= num; i++) {
			aux = fatorial(i);
			System.out.print(" " + aux);
		}
		
	}
	
	public static int fatorial(int num) {
		if (num < 2) {
			return 1;
		}
		else {
			return num * fatorial(num-1);
		}
		
	}

}
