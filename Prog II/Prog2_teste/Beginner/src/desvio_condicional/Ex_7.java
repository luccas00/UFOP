package desvio_condicional;

import java.util.Scanner;

public class Ex_7 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		final double PI = 3.14159;
		int option;
		double lado, raio_interno, area_1, perimetro_1;
		
		System.out.println("Digite um numero inteiro");
		option = sc.nextInt();

		if (option == 1 || option == 2) {
			System.out.println("Digite o lado do quadrado");
			lado = sc.nextInt();
			raio_interno = lado/2;
			area_1 = PI*(raio_interno*raio_interno);
			perimetro_1 = 2*PI*raio_interno;
			System.out.println(area_1);
			System.out.println(perimetro_1);
		}
		else if (option >= 3 && option <=5) {
			
			System.out.println("Do option 2");
			
		}
		else {
			
			System.out.println("Do option 3");
			
		}
		
	}

}