package br.ufop.agenda;

import java.util.Scanner;

public class Agenda {

	private static int INDICE = 0;
	private Contato[] listaDeContatos;
	
	public Agenda(int limiteMaximoContatos) {
		listaDeContatos = new Contato[limiteMaximoContatos];
	}
	
	public void adicionaContato(Contato c) {
		listaDeContatos[Agenda.INDICE] = c;
		Agenda.INDICE++;
	}
	
	public void removeContato(int indice) {
		listaDeContatos[indice].desabilitaContato();
	}
	
	public Contato pesquisaContato(String nome) {
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i].getNome().equals(nome)) {
				return listaDeContatos[i]; 
			}
		}
		return null;
	}
	
	public void alteraContato(Contato contatoAlterado, int indice) {
		listaDeContatos[indice] = contatoAlterado;
	}
	
	public void imprimeContatos() {
		System.out.println(">>>>>>>>>>>>>>IMPRIMINDO AGENDA<<<<<<<<<<<<<<<<<");
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i] != null)
				listaDeContatos[i].escreveNaTela();
		}
	}
	
	public boolean estaCheia() {
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i] == null)
				return false;
		}
		return true;
	}
	
	public void executa() {
		Scanner sc = new Scanner(System.in);
		int opcao = 6;
		do {
			System.out.println(">>>>>>>>>>>>>>MENU<<<<<<<<<<<<<<<<");
			System.out.println("1) Adiciona Contato");
			System.out.println("2) Altera Contato");
			System.out.println("3) Apaga Contato");
			System.out.println("4) Pesquisar Contato");
			System.out.println("5) Imprime Contatos");
			System.out.println("6) Sair");

			opcao = sc.nextInt();
			switch (opcao) {
			case 1:
				Contato c = Contato.Cria();
				adicionaContato(c);
				break;
			case 2:
				alteraContato();
				break;
			case 3:
				apagaContato();
				break;
			case 4:
				pesquisaContato();
				break;
			case 5:
				this.imprimeContatos();
				break;
			case 6:
				return;
			default:
				System.out.println("---------OPÇÃO INVÁLIDA!-------------");
				break;
			}
		}while(opcao != 6);
	}
	
	private void alteraContato() {
		//Pesquiso os contatos
		//Dado um contato identificado, faça a sua alteração
	}
	
	private void apagaContato() {
		//Pesquisa os contatos
		//Dado um contato identificado, chama o método desabilitaContato() de contato
	}
	
	private void pesquisaContato() {
		//Lê um valor do teclado (nome, ....)
		//Assim que econtrar, apresenta o dado na tela
	}
	
}
