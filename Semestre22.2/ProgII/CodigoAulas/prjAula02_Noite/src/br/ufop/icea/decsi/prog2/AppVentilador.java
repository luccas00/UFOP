package br.ufop.icea.decsi.prog2;

public class AppVentilador {

	public static void main(String[] args) {
		
		Ventilador v1 = new Ventilador();
		
		System.out.println(v1.estaLigado());
		
		v1.liga();
		
		System.out.println(v1.estaLigado());
		System.out.println(v1.velocidade);
		
		v1.aumentaVelocidade();
		System.out.println(v1.velocidade);
		
		v1.desliga();
		System.out.println(v1.estaLigado());
		System.out.println(v1.velocidade);
	}
}
