package principal;

import java.util.*;

public class Controlador {
	
	public static void main(String[] args) {
		System.out.println("Inicio do Main");
		metodo1();
		System.out.println("Fim do Main");
	}
	
	public static void metodo1() {
		System.out.println("Inicio Metodo 1");
		try {
			metodo2();
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println(e.getMessage());
		} finally {
			System.out.println("Bloco Finally Metodo 1");
		}
		System.out.println("Fim Metodo 1");
	}
	
	public static void metodo2() {
		System.out.println("Inicio Metodo 2");
		int[] vetor = new int[3];
		try {
			System.out.println("Preencha o vetor com inteiros: ");
			Scanner sc = new Scanner(System.in);
			for (int i = 0; i < 3; i++) {
				vetor[i] = sc.nextInt();
			}
			
			for (int i = 0; i < 5; i++) {
				System.out.println(vetor[i]);
			}
			
		} catch (InputMismatchException e) {
			System.out.println("Foi digitado um caractere");
			e.printStackTrace();
		} finally {
			System.out.println("Bloco Finally Metodo 2");
		}
		System.out.println("Fim Metodo 2");
	}

}
