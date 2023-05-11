package lista_1;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		Servico_Ex_1 valor = new Servico_Ex_1();

		int manicures[][] = new int[5][3];
		double valor_final[] = new double[5];
		
		System.out.println("Digite o valor do servico para, Pe");
		valor.setPe(sc.nextDouble());
		System.out.println("Digite o valor do servico para, Mao");
		valor.setMao(sc.nextDouble());
		System.out.println("Digite o valor do servico para, Podologia");
		valor.setPodologia(sc.nextDouble());
		
		System.out.println("Digite a quantidade de servicos de cada manicure");
		for (int i = 0; i < 5; i++) {
			System.out.println("Manicure N[" + (i+1) + "]");
			for (int j = 0; j < 3; j++) {
				if (j == 0) {
					System.out.println("Servicos de Pe");
					manicures[i][j] = sc.nextInt();
				}
				else if (j == 1) {
					System.out.println("Servicos de Mao");
					manicures[i][j] = sc.nextInt();
				}
				else if (j == 2) {
					System.out.println("Servicos de Podologia");
					manicures[i][j] = sc.nextInt();					
				}
			}
		}
		
		for (int i = 0; i < valor_final.length; i++) {
			valor_final[i] = ((manicures[i][0]*valor.getPe())+(manicures[i][1]*valor.getMao())+(manicures[i][2]*valor.getPodologia()))/2;
		}
		
		for (int i = 0; i < valor_final.length; i++) {
			System.out.println("Valor a receber, manicure[" + (i+1) + "] = R$" + valor_final[i]);
		}
		
	}

}
