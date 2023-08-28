package segundoExemplo;

public class Circulo extends FormaBidimensional{

	private double raio;
	
	public Circulo(double raio)
	{
		this.raio = raio;
	}
	
	@Override
	public String toString()
	{
		return "Raio = " + this.raio;
	}
	
	@Override
	public double calcularArea() {
		return Math.pow(raio, 2)*Math.PI;
	}
	
	@Override
	public double calcularPerimentro() {
		return 2*Math.PI*this.raio;
	}

}
