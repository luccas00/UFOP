package prova1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		double aux;
		
		System.out.println("Digite o valor do ingresso Comum: ");
		aux = sc.nextDouble();
		
		Ingresso novo = new Ingresso();
		IngressoVip vip = new IngressoVip();
		
		
		novo.setValor(aux);
		vip.setValor(aux);
		
		System.out.println("Digite o adicional do ingresso Vip: ");
		aux = sc.nextDouble();
		vip.setAdd(aux);
		
		
		System.out.println("Valor do Ingresso Comum R$" + novo.getValor());
		System.out.println("Valor do Ingresso Vip R$" + vip.getValorIngressoVip());

	}

}
