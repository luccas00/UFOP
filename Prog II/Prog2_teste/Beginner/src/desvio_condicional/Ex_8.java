package desvio_condicional;

import java.util.Scanner;

public class Ex_8 {

	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Pessoa novo = new Pessoa();
		
		System.out.println("Digite seu Nome");
		novo.setNome(sc.next());
		
		System.out.println("Digite sua Idade");
		novo.setIdade(sc.nextInt());
		
		System.out.println("Digite seu Peso");
		novo.setPeso(sc.nextDouble());
	
		System.out.println("Nome: " + novo.getNome());
		System.out.println("Idade: " + novo.getIdade());
		System.out.println("Peso: " + novo.getPeso());
		
		novo.aptidao();
		
	}
	
}