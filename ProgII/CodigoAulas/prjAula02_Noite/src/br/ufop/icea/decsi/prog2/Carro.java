package br.ufop.icea.decsi.prog2;

public class Carro {

	String marca;
	int ano;
	String modelo;
	String cor;
	double potencia;
	String placa;
	
	public void escreveNaTela() {
		System.out.println("------------------------------");
		System.out.println("Placa: " + this.placa );
		System.out.println("Marca: " + this.marca);
		System.out.println("Modelo: " + this.modelo);
		System.out.println("Ano: " + this.ano);
		System.out.println("Potência: " + this.potencia);
		System.out.println("Cor: " + this.cor);
	}
	
	public void incrementaAnoCarro() {
		this.ano = this.ano + 1;
	}
	
	public static Carro[] ConstroiCarros(int quantidadeDesejada) {
		
		Carro[] listaDeCarros = new Carro[quantidadeDesejada];
		
		for (int i = 0; i < listaDeCarros.length; i++) {
			listaDeCarros[i] = new Carro();
			listaDeCarros[i].marca = "Chevrolet";
			listaDeCarros[i].ano = 2010;
			listaDeCarros[i].modelo = "Celta";
			listaDeCarros[i].placa = "000000" + i;
			listaDeCarros[i].potencia = 78;
			listaDeCarros[i].cor = "Vermelho";
		}
		
		return listaDeCarros;
	}
	
}
