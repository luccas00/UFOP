package br.ufop.aulas.prog;

public class Carro {

	private String cor;
	private String modelo;
	private String marca;
	private String chassi;
	private int quantidadeDePortas;
	private int ano;
	
	public Carro(String chassi, int anoDeFabricacao) {
		this.chassi = chassi;
		this.cor = "Preto";
		this.setAno(ano);
	}
	
	public Carro(String chassi) {
		this.chassi = chassi;
		this.cor = "Preto";
		this.ano = 2022;
	}

	public String getCor() {
		return this.cor;
	}
	
	public String getModelo() {
		if(this.modelo == null)
			return "Não definido";
		return this.modelo;
	}
	
	public int getQuantidadeDePortas() {
		return this.quantidadeDePortas;
	}
	
	public String getMarca() {
		return this.marca;
	}
	
	public int getAno() {
		return this.ano;
	}
	
	public void setMarca(String marca) {
		this.marca = marca;
	}
	
	public void setAno(int ano) {
		if(ano < 1900) {
			System.out.println("Ano inválido!");
			this.ano = 1900;
			return;
		}
		this.ano = ano;
	}
	
	public void setNumeroDePortas(int numeroDePortas) {
		this.quantidadeDePortas = numeroDePortas;
	}
	
	public void escreveNaTela() {
		System.out.println("Cor: " + this.cor);
		System.out.println("Modelo: " + this.getModelo());
		System.out.println("Marca: " + this.marca);
		System.out.println("Chassi: " + this.chassi);
		System.out.println("Número de portas: " + this.quantidadeDePortas);
		System.out.println("Ano: " + this.ano);
	}
}
