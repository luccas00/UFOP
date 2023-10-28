package inicial;

import java.util.Scanner;

public class Ex_3 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double valor_conta;
		double gorjeta;
		
		System.out.println("Digite a porcentagem que deseja cobrar\nNumeros reais de 0 a 100");
		gorjeta = sc.nextDouble();		
		
		System.out.println("Digite o valor total da conta");
		valor_conta = sc.nextDouble();
		
		System.out.println("Valor da gorjeta = " + valor_gorjeta(valor_conta, gorjeta));
		
		valor_conta = gorjeta_conta(valor_conta, gorjeta);
		
		System.out.println("Valor final = " + valor_conta);

	}
	
	public static double gorjeta_conta(double qualquer, double num) {
		double aux;
		aux = (qualquer*(num/100))+qualquer; 
		return aux;
	}
	
	public static double valor_gorjeta(double qualquer, double aux) {
		return qualquer*(aux/100);
	}
	
}
