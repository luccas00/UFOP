package modulo_1;

import java.util.Scanner;

public class EstruturaDeRepeticao {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a = 10;
		int contador = 0;
		
		/*While*/
		while (contador <= a) {
			System.out.println(contador);
			contador++;
		}
		
		/*Do While*/
		contador = 100;
		do {
			System.out.println(contador);
			contador++;
		} while (contador < a);
		
		/*For*/
		for (int i = 0; i < a; ++i) {
			System.out.println("I = " + i);
		}
		
		
	}

}
