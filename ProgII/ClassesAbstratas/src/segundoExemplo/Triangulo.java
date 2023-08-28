package segundoExemplo;

import java.util.Objects;

public class Triangulo extends FormaBidimensional {

	private double base;
	private double altura;
	
	public Triangulo(double base, double altura)
	{
		this.base = base;
		this.altura = altura;
	}
	
	@Override
	public String toString()
	{
		return "Base = " + this.base + "\nAltura = " + this.altura;
	}
	
	@Override
	public double calcularArea() {
		return (base*altura)/2;
	}

	@Override
	public double calcularPerimentro() {
		double hipotenusa;
		hipotenusa = Math.sqrt(Math.pow(this.base, 2) + Math.pow(this.altura, 2));
		return hipotenusa + this.altura + this.base;
	}

	@Override
	public int hashCode() {
		return Objects.hash(altura, base);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Triangulo other = (Triangulo) obj;
		return Double.doubleToLongBits(altura) == Double.doubleToLongBits(other.altura)
				&& Double.doubleToLongBits(base) == Double.doubleToLongBits(other.base);
	}
	
	

}
