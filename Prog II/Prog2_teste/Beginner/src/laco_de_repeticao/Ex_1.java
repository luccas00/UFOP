package laco_de_repeticao;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int soma = 0;
		int num = 0;
		
		System.out.println("Digite um numero inteiro");
		num = sc.nextInt();
		
		System.out.println("Somatorio = [" + num + "]");
		
		for (int i = 0; i <= num; i++) {
			
			soma = soma+i;
		
		}
		
		System.out.println("Somatorio = [" + soma + "]");
		
	}

}
