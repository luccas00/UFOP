package secundario;

public class Circulo extends FormaGeometrica {

	private double raio;
	
	protected Circulo(double raio) {
		this.raio = raio;
	}
	
	@Override
	public void desenhar() {
		System.out.println("\nCirculo\nRaio: " + this.raio);
	}
}
