package vetores;

import java.util.Scanner;

public class Ex_6 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		final int tam = 5;
		
		int vet_a[] = new int[tam];
		int vet_b[] = new int[tam];
		int vet_c[] = new int[tam*2];
		
		System.out.println("Complete o vetor A");
		for (int i = 0; i < vet_a.length; i++) {
			vet_a[i] = sc.nextInt();
		}
		
		System.out.println("Complete o vetor B");
		for (int i = 0; i < vet_b.length; i++) {
			vet_b[i] = sc.nextInt();
		}
		
		for (int i = 0; i < tam*2; i++) {
			if (i <= 4) {
				vet_c[i] = vet_a[i];
			}
			else {
				vet_c[i] = vet_b[i-5];
			}
		}
		
		for (int i = 0; i < vet_c.length; i++) {
			System.out.print(vet_c[i] + " ");
		}
		
	}
}
