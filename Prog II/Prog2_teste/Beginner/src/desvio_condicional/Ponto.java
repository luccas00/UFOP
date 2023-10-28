package desvio_condicional;

public class Ponto {
	
	public double x, y;
	
	public void quadrante() {
		if (this.x > 0 && this.y > 0) {
			System.out.println("1 Quadrante");
		}
		else if (this.x < 0 && this.y > 0) {
			System.out.println("2 Quadrante");
		}
		else if (this.x < 0 && this.y < 0) {
			System.out.println("3 Quadrante");
		}
		else if (this.x > 0 && this.y < 0) {
			System.out.println("4 Quadrante");
		}
	}
	
}
