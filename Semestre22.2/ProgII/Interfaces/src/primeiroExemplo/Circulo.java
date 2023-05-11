package primeiroExemplo;

public class Circulo implements iFormaDimensional {

	private double raio;
	
	public Circulo(double raio) {
		this.raio = raio;
	}
	
	@Override
	public double area() {
		return Math.PI*Math.pow(this.raio, 2);
	}

	@Override
	public double perimetro() {
		return Math.PI*this.raio*2;
	}

	@Override
	public double volume() {
		return (4*Math.PI*Math.pow(this.raio, 3))/3;
	}

	public double getRaio() {
		return raio;
	}
	
	@Override
	public String toString() {
		return "Raio = [" + this.getRaio() + "]";
	}

}
