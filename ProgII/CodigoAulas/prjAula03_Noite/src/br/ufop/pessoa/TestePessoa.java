package br.ufop.pessoa;

import java.util.Scanner;

import br.ufop.componentes.Pessoa;

public class TestePessoa {

	public static void main(String[] args) {
		
		Pessoa p = new Pessoa("Rafael", "Conceição");
		Pessoa p2 = new Pessoa("Wagner");
		
		
		//p.setNome("Rafael Alexandre");
		
		
		System.out.println(p.getNome());
		System.out.println(p.getNomeDaMae());
	}
}
