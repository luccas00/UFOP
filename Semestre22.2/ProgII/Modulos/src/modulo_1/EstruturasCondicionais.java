package modulo_1;

import java.util.Scanner;

public class EstruturasCondicionais {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a;
		int b;
		int option;
		
		System.out.print("Digite o valor de A: ");
		a = sc.nextInt();
		System.out.print("Digite o valor de B: ");
		b = sc.nextInt();
		
		if (a == b) {
			System.out.println("A = B: " + a + " = " + b);
		} else if (a > b) {
			System.out.println("A > B: " + a + " > " + b);
		} else {
			System.out.println("A < B: " + a + " < " + b);
		}
		
		System.out.print("Digite o valor de Option: ");
		option = sc.nextInt();
		
		switch (option) {
			case 1:
				System.out.println("Option 1 = " + option);
				break;

			case 2:
				System.out.println("Option 2 = " + option);
				break;
			
			case 3:
				System.out.println("Option 3 = " + option);
				break;
			
			default:
				System.out.println("ERROR 404");
				break;
			}
		
	}
	
}
