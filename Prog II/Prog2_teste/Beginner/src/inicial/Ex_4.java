package inicial;

import java.util.Scanner;

public class Ex_4 {

	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double salario, qtd;
		final double aux = 1045;
		
		System.out.println("Digite seu salario");
		salario = sc.nextDouble();
		qtd = salario/aux;
		
		System.out.println("Quantidade de salarios minimos = " + qtd);

	}

}
