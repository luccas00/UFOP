package lista_1;

import java.util.Scanner;

public class Ex_3 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num;
		
		System.out.println("Digite um numero inteiro");
		num = sc.nextInt();
		
		System.out.println("Funtion = " + function(num));
		
	}
	
	public static int function(int aux) {
		if (aux <= 2) {
			return aux;
		}
		else {
			return 2*function(aux-1)+3*function(aux-2);
		}
	}
	
}
