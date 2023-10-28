package desvio_condicional;

import java.util.Scanner;

public class Ex_9 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Ponto vet[] = new Ponto[4];
		for (int i = 0; i < vet.length; i++) {
			vet[i] = new Ponto();
		}
		
		for (int i = 0; i < vet.length; i++) {
			System.out.println("Digite as cordenadas do ponto N[" + (i+1) + "] :");
			vet[i].x = sc.nextDouble();
			vet[i].y = sc.nextDouble();
		}
		
		for (int i = 0; i < vet.length; i++) {
			vet[i].quadrante();			
		}
		
	}

}
