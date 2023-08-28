package primeiroExemplo;

public class Quadrado implements iFormaDimensional {

	private double aresta;
	
	public Quadrado(double aresta) {
		this.aresta = aresta;
	}
	
	@Override
	public double volume() {
		return Math.pow(this.aresta, 3);
	}

	@Override
	public double area() {
		return Math.pow(this.aresta, 2);
	}

	@Override
	public double perimetro() {
		return 4 * this.aresta;
	}

	public double getAresta() {
		return aresta;
	}

	@Override
	public String toString() {
		return "Aresta = [" + this.getAresta() + "]";
	}
	
}
