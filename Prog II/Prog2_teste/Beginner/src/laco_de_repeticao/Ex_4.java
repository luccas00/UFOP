package laco_de_repeticao;

import java.util.Scanner;

public class Ex_4 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num;
		
		System.out.println("Digite um numero inteiro qualquer");
		num = sc.nextInt();
		
		for (int i = 1; i <= 10; i++) {
			System.out.println(i + " * " + num + " = " + (num*i));
		}
		
	}

}
