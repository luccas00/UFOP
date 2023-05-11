package secundario;

public class FactoryFormaGeometrica {
	
	public FormaGeometrica getForma(String tipo, double value) {
		if (tipo.equals("Triangulo")) {
			return new Triangulo(value);
		} else if (tipo.equals("Circulo")) {
			return new Circulo(value);
		} else if (tipo.equals("Quadrado")) {
			return new Quadrado(value);
		} else {
			return null;
		}
	}
}
