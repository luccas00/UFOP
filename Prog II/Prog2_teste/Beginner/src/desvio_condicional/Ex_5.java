package desvio_condicional;

import java.util.Scanner;

public class Ex_5 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int triangulo[] = new int[3];
		
		System.out.println("Digite os 3 lados do triangulo");
		triangulo[0] = sc.nextInt();
		triangulo[1] = sc.nextInt();
		triangulo[2] = sc.nextInt();
		
		if (triangulo[0] == triangulo[1] && triangulo[1] == triangulo[2]) {
			System.out.println("Triangulo Equilatero");
		}
		else if (triangulo[0] != triangulo[1] && triangulo[1] != triangulo[2] && triangulo[2] != triangulo[0]) {
			System.out.println("Triangulo Escaleno");
		}
		else {
			System.out.println("Triangulo Isosceles");
		}
		
	}
	
}
