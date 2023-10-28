package desvio_condicional;

import java.util.Scanner;

public class Ex_10 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b;
		double media, produto, divisao;
		
		System.out.println("Digite dois numeros inteiros");
		a = sc.nextInt();
		b = sc.nextInt();
		
		if ((a+b) < 8) {
			media = (double)(a+b)/b;
			System.out.println("Media = " + media);
		}
		else if ((a+b) == 8) {
			produto = a*b;
			System.out.println("Produto = " + produto);
		}
		else if ((a+b) > 8) {
			if (a > b) {
				divisao = (double)a/b;
				System.out.println("Divisao = " + divisao);
			}
			else {
				divisao = (double)b/a;
				System.out.println("Divisao = " + divisao);
			}
		}
	}

}
