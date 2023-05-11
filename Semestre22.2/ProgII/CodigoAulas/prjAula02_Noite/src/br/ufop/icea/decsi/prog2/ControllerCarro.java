package br.ufop.icea.decsi.prog2;

public class ControllerCarro {

	public static void main(String[] args) {
		Carro[] lista = Carro.ConstroiCarros(10);
		for (int i = 0; i < lista.length; i++) {
			lista[i].escreveNaTela();
		}
		lista[0].incrementaAnoCarro();
	}
}