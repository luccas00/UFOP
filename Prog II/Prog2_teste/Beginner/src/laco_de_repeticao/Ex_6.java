package laco_de_repeticao;

import java.util.Scanner;

public class Ex_6 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int op;
		double media = 0;
		
		Pessoa vetor[] = new Pessoa[10];
		for (int i = 0; i < vetor.length; i++) {
			vetor[i] = new Pessoa();
		}
		
		for (int i = 0; i < vetor.length; i++) {
			System.out.println("Digite sua idade");
			vetor[i].setIdade(sc.nextInt());
			if (vetor[i].getIdade() < 30) {
				System.out.println("Idade menor que 30");
				System.out.println("Deseja continuar ?\n1 - SIM\n2 - NAO");
				op = sc.nextInt();
				if (op == 1) {
					System.out.println(" ");
				}
				else if (op == 2) {
					i = 10;
				}
				else {
					System.out.println("Invalido, Continuando...");
					i++;
				}
			}
			else {
				System.out.println("Digite seu peso");
				vetor[i].setPeso(sc.nextDouble());
				media = media+(vetor[i].getPeso());
				System.out.println("Deseja continuar ?\n1 - SIM\n2 - NAO");
				op = sc.nextInt();
				if (op == 1) {
					System.out.println(" ");
				}
				else if (op == 2) {
					i = 10;
				}
				else {
					System.out.println("Invalido, Continuando...");
					i++;
				}
			}
			
		}
		
		System.out.println("Media = " + media);

	}
	
}
