package laco_de_repeticao;

import java.util.Scanner;

public class Fibonacci {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num, aux;
		
		System.out.println("Digite um numero inteiro");
		num = sc.nextInt();
		
		for (int i = 1; i <= num; i++) {
			aux = fibo(i);
			System.out.print(" " + aux);
		}
		
	}
	
	public static int fibo(int num) {
		
		if (num == 1 || num == 2) {
			return 1;
		}
		else {
			return fibo(num-1) + fibo(num-2);
		}
		
	}
	
}
