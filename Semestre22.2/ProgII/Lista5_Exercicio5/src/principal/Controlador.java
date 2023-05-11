package principal;

import java.util.Scanner;

public class Controlador {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		double a = 0, b = 0, result;
		boolean flagA = false;
		boolean flagB = false;
		
		System.out.println("Eu sei Dividir");
		
		do {
			System.out.println("Digite o primeiro valor");
			try {
				a = sc.nextDouble();
				flagA = true;
			} catch (Exception e) {
				System.out.println("Invalido, Digite novamente");
				sc.next();
			}
		} while (!flagA);
		
		do {
			System.out.println("Digite o segundo valor");
			try {
				b = sc.nextDouble();
				flagB = true;
			} catch (Exception e) {
				System.out.println("Invalido, Digite novamente");
				sc.next();
			}
		} while (!flagB);
		
		try {
			result = divisao(a, b);
			System.out.println("Resultado A/B = " + result);
			System.out.println("Valor de A = " + a);
			System.out.println("Valor de B = " + b);
		} catch (Exception e) {
			System.out.println("Divisao Invalida");
		}

	}
	
	public static double divisao(double a, double b) throws Exception{
		return a/b;
	}

}
