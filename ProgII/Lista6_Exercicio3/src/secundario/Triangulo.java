package secundario;

public class Triangulo extends FormaGeometrica {

	private double aresta;
	
	protected Triangulo(double aresta) {
		this.aresta = aresta;
	}
	
	@Override
	public void desenhar() {
		System.out.println("\nTriangulo\nAresta: " + this.aresta);
	}
}
