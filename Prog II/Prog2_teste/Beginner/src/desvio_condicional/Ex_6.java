package desvio_condicional;

import java.util.Scanner;

public class Ex_6 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double raio, altura, volume;
		final double PI = 3.14159;
		
		System.out.println("Digite o raio da lata");
		raio = sc.nextInt();
		System.out.println("Digite a altura da lata");
		altura = sc.nextInt();
		
		volume = PI*(raio*raio)*altura;
		
		System.out.println("Volume = " + volume);
		
	}

}
