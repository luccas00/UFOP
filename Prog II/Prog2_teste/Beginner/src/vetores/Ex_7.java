package vetores;

import java.util.Scanner;

public class Ex_7 {

	 public static void main(String[] args) {
		
		 Scanner sc = new Scanner(System.in);
		 
		 int vet_a[] = new int[5];
		 int vet_b[] = new int[5];
		 
		 System.out.println("Complete o Vetor A");
		 for (int i = 0; i < vet_a.length; i++) {
			vet_a[i] = sc.nextInt();
		}
		 
		 System.out.println("Complete o Vetor B");
		 for (int i = 0; i < vet_b.length; i++) {
			vet_b[i] = sc.nextInt();
		}
		 
		 for (int i = 0; i < vet_a.length; i++) {
			 vet_a[i] = vet_a[i]+vet_b[i];
		}
		 
		 for (int i = 0; i < vet_a.length; i++) {
			System.out.print(vet_a[i] + " ");
		}

	}

}
