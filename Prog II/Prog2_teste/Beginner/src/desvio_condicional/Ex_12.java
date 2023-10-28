package desvio_condicional;

import java.util.Scanner;

public class Ex_12 {
	
	public static void main (String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int chave;
		
		System.out.println("Digite o codigo do cargo");
		chave = sc.nextInt();
		
		switch (chave) {
		case 101:
			System.out.println("Vendedor");
			break;

		case 102:
			System.out.println("Atendente");
			break;
			
		case 103:
			System.out.println("Auxiliar Tecnico");
			break;
			
		case 104:
			System.out.println("Assistente");
			break;

		case 105:
			System.out.println("Coordenador de Grupo");
			break;
			
		case 106:
			System.out.println("Gerente");
			break;
			
		default:
			System.out.println("Invalido");
			break;
		}
		
	}

}
