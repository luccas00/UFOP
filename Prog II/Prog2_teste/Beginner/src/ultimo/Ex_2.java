package ultimo;

import java.util.Scanner;

public class Ex_2 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		String nome;
		double valor, valor_final = 0;
		int qtd;
		
		final int tam = 2;
		int aux[] = new int[tam];
		Produtos_Ex_2 lista[] = new Produtos_Ex_2[tam];
		for (int i = 0; i < lista.length; i++) {
			System.out.println("Digite o valor do item N[" + (i+1) + "]");
			valor = sc.nextDouble();
			System.out.println("Digite o nome do item");
			nome = sc.next();
			System.out.println("Digite a quantidade em estoque");
			qtd = sc.nextInt();
			lista[i] = new Produtos_Ex_2(nome, qtd, valor);
			System.out.println("Digite a quantidade que deseja comprar");
			aux[i] = sc.nextInt();
			lista[i].setValorCompra(aux[i]);
		}
		
		for (int i = 0; i < lista.length; i++) {
			System.out.println("- - - - -");
			System.out.println("Nome: " + lista[i].getNome());
			System.out.println("Valor R$" + lista[i].getValor());
			System.out.println("Estoque Atual: " + lista[i].getEstoque());
			System.out.println("Quantidade Comprada: " + aux[i]);
			System.out.println("Compra desse item R$" + lista[i].getValorCompra());
			valor_final += lista[i].getValorCompra();
		}
		
		System.out.println("\n- - - - -");
		System.out.println("Valor total da compra R$" + valor_final);

	}

}
