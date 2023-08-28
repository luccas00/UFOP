package secundario;

public class Quadrado extends FormaGeometrica {

	private double lado;
	
	protected Quadrado(double lado) {
		this.lado = lado;
	}
	
	@Override
	public void desenhar() {
		System.out.println("\nQuadrado\nLado: " + this.lado);
	}
	
}
