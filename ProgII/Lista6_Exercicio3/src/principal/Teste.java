package principal;

import secundario.*;

public class Teste {
	
	public static void main(String[] args) {
		
		FactoryFormaGeometrica fabrica = new FactoryFormaGeometrica();
		
		FormaGeometrica f1 = fabrica.getForma("Quadrado", 10);
		FormaGeometrica f2 = fabrica.getForma("Triangulo", 7);
		FormaGeometrica f3 = fabrica.getForma("Circulo", 99);
		FormaGeometrica f4 = fabrica.getForma("Quadrado", 1);
		FormaGeometrica f5 = fabrica.getForma("Triangulo", 50);
		FormaGeometrica f6 = fabrica.getForma("Circulo", 20);
		
		f1.desenhar();
		f2.desenhar();
		f3.desenhar();
		f4.desenhar();
		f5.desenhar();
		f6.desenhar();
		
		FactoryFormaGeometrica fabrica2 = new FactoryFormaGeometrica();
		FormaGeometrica f7 = fabrica2.getForma("Quadrado", 100);
		FormaGeometrica f8 = fabrica2.getForma("Triangulo", 500);
		FormaGeometrica f9 = fabrica2.getForma("Circulo", 200);
		f7.desenhar();
		f8.desenhar();
		f9.desenhar();
		
	}

}
