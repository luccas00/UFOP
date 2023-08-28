package br.ufop.componentes;

public class Carro {

	private String modelo;
	private String marca;
	private String placa;
	private String cor;
	private int numeroDePortas = 5;
	
	public Carro(String placa) {
		this.placa = placa;
		this.cor = "Preto";
	}
	
	public void setNumeroDePortas(int numeroDePortas) {
		if(numeroDePortas < 1) {
			System.out.println("Número de portas inválido!");
			return;
		}
		this.numeroDePortas = numeroDePortas;
	}
	
	public int getNumeroDePortas() {
		return this.numeroDePortas;
	}
	
	public String getModelo() {
		if(this.modelo == null)
			return "Não informado";
		return this.modelo;
	}
	
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public String getPlaca() {
		return placa;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}
	
	public void imprimeCarro() {
		System.out.println("Placa: " + this.getPlaca());
		System.out.println("Modelo: " + this.getModelo());
		System.out.println("Cor: " + this.getCor());
		System.out.println("Número de portas: " + this.getNumeroDePortas());
	}

}
