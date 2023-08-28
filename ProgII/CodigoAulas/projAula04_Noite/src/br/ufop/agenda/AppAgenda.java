package br.ufop.agenda;

import java.util.Scanner;

public class AppAgenda {

	
	public static void main(String[] args) {
		
		Contato x1 = new Contato("Rafael ALEXANDRE");
		x1.setEndereco("Rua X");
		x1.setEmail("@@@");
		Contato x2 = new Contato("Rafael Alexandre");
		x2.setEndereco("Rua X");
		x2.setEmail("@@@");
		
		
		if(x1.equals(x2))
			System.out.println("Sim");
		else
			System.out.println("Não");
		
		
		
		Agenda agenda = new Agenda(10);

		System.out.println("Está vazia? " + agenda.estaVazia());
		
		Contato c1 = new Contato("Rafael Alexandre");
		c1.setEmail("rfalexandre@ufop.edu.br");
		c1.setEndereco("Rua Fulano de tal, 22");
		agenda.adicionaContato(c1);
		
		Contato c2 = new Contato("Wagner Alexandre");
		c2.setEmail("wagner@ufop.edu.br");
		c2.setEndereco("Rua Fulano de tal, 22");
		agenda.adicionaContato(c2);

		Contato c3 = new Contato("José");
		c3.setEmail("wagner@ufop.edu.br");
		c3.setEndereco("Rua Fulano de tal, 22");
		agenda.adicionaContato(c3);
		
		agenda.imprimeContatos();
		
		Contato maria = new Contato("Maria");
		
		//agenda.alteraContato(maria, 20);
		
		agenda.imprimeContatos();
		
		System.out.println("Está cheia? " + agenda.estaCheia());
		System.out.println("Está vazia? " + agenda.estaVazia());
		
		agenda.removeContato(1);
		
		agenda.imprimeContatos();
		
		
		System.out.println("Está cheia? " + agenda.estaCheia());
		

		Contato jose = new Contato("José");
		c3.setEmail("wagner@ufop.edu.br");
		c3.setEndereco("Rua Fulano de tal, 22");
				
		agenda.adicionaContato(jose);

		agenda.imprimeContatos();
	}
}
