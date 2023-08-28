package modulo1Componentes;

public class Carro extends ChassiCarro{
	
	private String placa;
	public String cor;
	private double valor;
	private String modelo;
	private String marca;
	
	private boolean estadoCarro = false;
	
	public Carro() {
		setPlaca(GeradorDePlacas.getPlacaGerada(3, 4));
		this.cor = "Branco";
	}
	
	private void setPlaca(String x) {
		this.placa = x;
	}
	
	public String getPlaca() {
		return this.placa;
	}

	public void setValor(double x) {
		this.valor = x;
	}
	
	public double getValor() {
		return this.valor;
	}
	
	public void setMarca(String x) {
		this.marca = x;
	}
	
	public String getMarca() {
		return this.marca;
	}
	
	public void setModelo(String x) {
		this.modelo = x;
	}
	
	public String getModelo() {
		return this.modelo;
	}
	
	public void ligarCarro() {
		this.estadoCarro = true;
	}
	
	public void desligarCarro() {
		this.estadoCarro = false;
	}
	
	public boolean estaLigado() {
		return this.estadoCarro;
	}
	
	public void imprimeCarro() {
		System.out.println("Placa: " + getPlaca());
		System.out.println("Numero do Chassi: " + getChassi());
		System.out.println("Modelo: " + this.modelo);
		System.out.println("Modelo: " + this.marca);
		System.out.println("Cor: " + this.cor);
		System.out.println("Valor: " + this.valor);
		if (estadoCarro) {
			System.out.println("Carro Ligado !\n");
		} else {
			System.out.println("Carro Desligado\n");
		}
	}
	
	

}
