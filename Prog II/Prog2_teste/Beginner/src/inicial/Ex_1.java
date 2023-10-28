package inicial;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num, proximo, anterior;
		
		System.out.println("Digite um numero inteiro");
		num = sc.nextInt();
		
		proximo = num+1;
		anterior = num-1;
		
		System.out.println("Antecessor = " + anterior);
		System.out.println("Sucessor = " + proximo);
		
	}

}
