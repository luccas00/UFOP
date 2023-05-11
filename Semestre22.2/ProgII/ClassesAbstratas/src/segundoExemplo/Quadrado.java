package segundoExemplo;

public class Quadrado extends FormaBidimensional {

	private double lado;
	
	public Quadrado(double lado)
	{
		this.lado = lado;
	}
	
	@Override
	public String toString()
	{
		return "Lado = " + this.lado;
	}
	
	@Override
	public double calcularArea() {
		return lado*lado;
	}

	@Override
	public double calcularPerimentro() {
		return lado*4;
	}

}
