package modulo1Parte2;

import modulo1Componentes.Carro;
import java.util.Scanner;

public class TestaCarro {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		Carro carroDoLuccas = new Carro();
		Carro carroDoLuan = new Carro();
		
		carroDoLuan.imprimeCarro();
		carroDoLuccas.imprimeCarro();
		
	}
	
}
