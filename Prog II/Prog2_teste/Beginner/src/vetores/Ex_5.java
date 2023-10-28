package vetores;

import java.util.Scanner;

public class Ex_5 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		final int tam = 3;
		
		int vet_a[] = new int[tam];
		int vet_b[] = new int[tam];
		
		System.out.println("Complete o vetor A");
		for (int i = 0; i < vet_a.length; i++) {
			vet_a[i] = sc.nextInt();
		}
		
		System.out.println("Complete o vetor B");
		for (int i = 0; i < vet_b.length; i++) {
			vet_b[i] = sc.nextInt();
		}
		
		System.out.println("Multiplicando os Vetores");
		for (int i = 0; i < vet_a.length; i++) {
			vet_a[i] = vet_a[i]*vet_b[i];
			System.out.println(vet_a[i]);
		}
		
		
	}

}
