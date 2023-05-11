package br.ufop.icea.decsi.prog2;

public class Ventilador {

	double preco;
	String marca;
	String modelo;
	boolean ligado;
	int velocidade;
	int voltagem;
	
	public boolean estaLigado() {
		return this.ligado;
	}
	
	public void liga() {
		if(this.ligado) {
			System.out.println("O ventilador já está ligado!");
			return;
		}
		this.ligado = true;
		this.velocidade = 1;
	}
	
	public void desliga() {
		if(!this.ligado) {
			System.out.println("O ventilador já está desligado!");
			return;
		}
		this.ligado = false;
		this.velocidade = 0;
	}
	
	public void aumentaVelocidade() {
		if(this.velocidade < 10)
			this.velocidade++;
		else
			System.out.println("O ventilador já está no máximo!");
	}
	
	public void reduzVelocidade() {
		if(this.velocidade > 1)
			this.velocidade--;
		else
			System.out.println("O ventilador está na velocidade mínima!");
	}
	
	public void valoriza(double percentual) {
		this.preco = this.preco*percentual;
	}
}
