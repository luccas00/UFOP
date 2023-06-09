package lista_1;

import java.util.Scanner;

public class Ex_7 {
	
	public static void main(String[] args) {
		
		String nome;
		int qtd, numero;
		double valor;
		double valor_total;
		
		final int tam;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o tamanho da fatura");
		tam = sc.nextInt();
		
		Fatura principal[] = new Fatura[tam];
		for (int i = 0; i < principal.length; i++) {
			principal[i] = new Fatura();
		}
		
		
		for (int i = 0; i < principal.length; i++) {
			System.out.println("Digite o nome do item");
			nome = sc.next();
			System.out.println("Digite o valor do item [" + (i+1) + "]");
			valor = sc.nextDouble();
			System.out.println("Digite a quantidade comprada");
			qtd = sc.nextInt();
			System.out.println("Digite o numero do produto");
			numero = sc.nextInt();
			principal[i].setItem(nome, valor, numero, qtd);
		}
		
		valor_total = executaFatura(principal);
		
		System.out.println("Valor total da fatura R$" + valor_total);
		
	}
	
	public static double executaFatura(Fatura qualquer[]) {
		double aux = 0;
		for (int i = 0; i < qualquer.length; i++) {
			aux += qualquer[i].getValorFinalFatura();
			qualquer[i].imprimeItem();
			System.out.println("- - - - -");
		}
		return aux;
	}

}
