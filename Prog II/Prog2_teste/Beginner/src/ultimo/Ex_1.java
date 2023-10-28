package ultimo;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x = 0, y = 0;
		int aux;
		
		System.out.println("Digite os valores de X e Y, respectivamente");
		x = sc.nextInt();
		y = sc.nextInt();
		
		System.out.println("Valor de X = " + x);
		System.out.println("Valor de Y = " + y);
		
		aux = x;
		x = y;
		y = aux;
		
		System.out.println("Valor de X = " + x);
		System.out.println("Valor de Y = " + y);
		
	}
	
}
