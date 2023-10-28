package inicial;

import java.util.Scanner;

public class Ex_10 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int hora = 0, minutos = 0, total;
		
		System.out.println("Digite as horas");
		for (int i = 0; i < 1; i++) {
			hora = sc.nextInt();
			if (hora >= 24 || hora < 0) {
				System.out.println("Invalido, Digite novamente");
				i--;
			}
			else {
				i++;
			}
		}
		
		System.out.println("Digite os minutos");
		for (int i = 0; i < 1; i++) {
			minutos = sc.nextInt();
			if (minutos >= 60 || minutos < 0) {
				System.out.println("Invalido, Digite novamente");
				i--;
			}
			else {
				i++;
			}
		}
		
		total = minutos+hora*60;
		
		System.out.println("Total de minutos passados: [" + total + "]");
		
	}

}
