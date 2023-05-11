package lista_1;

import java.util.Scanner;

public class Ex_4 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double total_ano = 0;
		double vendas_mes[] = new double[12];
		double vendas_loja[][] = new double[12][4];
		
		System.out.println("Bem vindo ao calculo de vendas anual");
		
		for (int i = 0; i < 12; i++) {
			if (i == 0) {
				System.out.println("Vendas Janeiro");
			}
			else if (i == 1) {
				System.out.println("Vendas Fevereiro");
			}
			else if (i == 2) {
				System.out.println("Vendas Marco");
			}
			else if (i == 3) {
				System.out.println("Vendas Abril");
			}
			else if (i == 4) {
				System.out.println("Vendas Maio");
			}
			else if (i == 5) {
				System.out.println("Vendas Junho");
			}
			else if (i == 6) {
				System.out.println("Vendas Julho");
			}
			else if (i == 7) {	
				System.out.println("Vendas Agosto");
			}
			else if (i == 8) {
				System.out.println("Vendas Setembro");
			}
			else if (i == 9) {
				System.out.println("Vendas Outubro");
			}
			else if (i == 10) {
				System.out.println("Vendas Novembro");
			}
			else if (i == 11) {
				System.out.println("Vendas Dezembro");
			}
			for (int j = 0; j < 4; j++) {
				System.out.println("Semana N[" + (j+1) + "]");
				vendas_loja[i][j] = sc.nextDouble();
			}
		}
		
		for (int i = 0; i < 12; i++) {
			vendas_mes[i] = vendas_loja[i][0]+vendas_loja[i][1]+vendas_loja[i][2]+vendas_loja[i][3];
			total_ano += vendas_mes[i];
		}
		
		for (int i = 0; i < 12; i++) {
			System.out.println("Vendas mes N[" + (i+1) + "]: " + vendas_mes[i]);
		}
		
		System.out.println("Vendas total do ano R$" + total_ano);
		
	}
	
}
