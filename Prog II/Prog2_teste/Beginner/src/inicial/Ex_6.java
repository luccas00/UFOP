package inicial;

import java.util.Scanner;

public class Ex_6 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b, aux;
		
		System.out.println("Digite o valor de A");
		a = sc.nextInt();
		System.out.println("Digite o valor de B");
		b = sc.nextInt();
		
		aux = a;
		a = b;
		b = aux;
		
		System.out.println("Valor de A = " + a);
		System.out.println("Valor de B = " + b);
		
	}
}
