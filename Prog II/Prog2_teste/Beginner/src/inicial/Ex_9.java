package inicial;

import java.util.Scanner;

public class Ex_9 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double montante, capital, taxa, tempo, juros;
		
//		montante = 0;
		taxa = 0;
//		tempo = 0;
//		juros = 0;
		
		System.out.println("Digite o Capital inicial");
		capital = sc.nextDouble();
		
		System.out.println("Digite a taxa em porcentagem");
		System.out.println("Numeros de 0 a 100 apenas");
		
		
		for (int k = 0; k < 2; k++) {
			taxa = sc.nextDouble();
			if (taxa < 0 || taxa > 100) {
				System.out.println("Numero invalido");
				System.out.println("Digite novamente");
				k--;
			}
			else {
				k++;
			}
		}
		
		taxa = taxa/100;
		
		System.out.println("Digite o tempo em meses");
		tempo = sc.nextDouble();
		
		juros = capital*taxa*tempo;
		
		montante = capital+juros;
		
		System.out.println("Montante final = " + montante);
		
	}

}