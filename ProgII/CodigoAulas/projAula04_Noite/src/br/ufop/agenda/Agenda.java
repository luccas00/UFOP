package br.ufop.agenda;

public class Agenda {

	private Contato[] listaDeContatos;
	
	public Agenda(int quantidadeMaximaDeContatos) {
		listaDeContatos = new Contato[quantidadeMaximaDeContatos];
	}
	
	public void adicionaContato(Contato c) {
		if(!jaExiste(c)) {
			for (int i = 0; i < listaDeContatos.length; i++) {
				if(listaDeContatos[i] == null) {
					listaDeContatos[i] = c;
					return;
				}
			}
			System.out.println("Agenda lotada!!!");
		}else {
			System.out.println("Contato já existente!");
		}
		
	}
	
	private boolean jaExiste(Contato c) {
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i] != null && listaDeContatos[i].equals(c)) {
				return true;
			}
		}
		return false;
	}
	
	public Contato removeContato(int indice) {
		Contato contatoRetornado = listaDeContatos[indice];
		listaDeContatos[indice] = null;
		return contatoRetornado;
	}
	
	public boolean estaCheia() {
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i] == null)
				return false;
		}
		return true;
	}
	
	public boolean estaVazia() {
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i] != null)
				return false;
		}
		return true;
	}
	
	public void esvazia() {
		for (int i = 0; i < listaDeContatos.length; i++) {
			listaDeContatos[i] = null;
		}
	}
	
	public void imprimeContatos() {
		
		System.out.println(">>>>>>>>>>>>>>>>>LISTA DE CONTATOS<<<<<<<<<<<<<");
		for (int i = 0; i < listaDeContatos.length; i++) {
			if(listaDeContatos[i] != null)
				listaDeContatos[i].escreveNaTela();
		}
	}
	
	public void alteraContato(Contato contatoAlterado, int indice) {
		if(indice < 0 || indice > listaDeContatos.length) {
			System.out.println("Índice inválido!");
			return;
		}
		listaDeContatos[indice] = contatoAlterado;
	}
	
 
	
	
	
	
}
