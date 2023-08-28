package modulo_1;

import java.util.Scanner;

import modulo1Auxiliar.ManipulandoStringsAuxiliar;

public class ManipulandoStrings {
	
	public static void main(String[] args) {
		
		String nome, sobrenome, novoNome;
		
		Scanner sc = new Scanner(System.in);
		
		nome = "Luccas";
		sobrenome = "CARNEIRO";
		novoNome = sc.nextLine();
		
		ManipulandoStringsAuxiliar teste = new ManipulandoStringsAuxiliar();
		
		teste.nome = "Elrond";
		teste.idade = 6340;
		teste.setSobrenome("Of Rivendel");		
		teste.nomeVertical();
		
		System.out.println(nome);
		ManipulandoStringsAuxiliar.nomeMaiusculo(nome);
		ManipulandoStringsAuxiliar.nomeVertical(nome);
		StringsAuxiliar.NomeMinusculo(nome);
		modulo_1.StringsAuxiliar.NomeMinusculo(sobrenome);
		
		System.out.println(teste.getNomeCompleto());
	
	}

}
