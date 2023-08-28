package segundoExemplo;

import java.util.ArrayList;

public class Controlador {
	
	public static void main(String[] args) {

		ArrayList<FormaBidimensional> formas = new ArrayList<>();
		FormaBidimensional c1 = new Circulo(3);
		FormaBidimensional t1 = new Triangulo(3, 4);
		FormaBidimensional q1 = new Quadrado(4);
		
		System.out.println(c1.calcularArea());
		System.out.println(c1.calcularPerimentro());
		
		System.out.println(t1.calcularArea());
		System.out.println(t1.calcularPerimentro());
		
		System.out.println(q1.calcularArea());
		System.out.println(q1.calcularPerimentro());
		
		formas.add(q1);
		formas.add(t1);
		formas.add(c1);
		
		
		for(FormaBidimensional f : formas)
		{
			System.out.println(f.toString());		
		}
		
		Circulo c2 = new Circulo(4);
		Triangulo t2 = new Triangulo(3, 7);
		Quadrado q2 = new Quadrado(5);
		
		System.out.println(t2.equals(t1));
		System.out.println(q2.equals(q1));
		System.out.println(c2.equals(c1));
		
		
		System.out.println(t1.hashCode());
		System.out.println(t2.hashCode());
		
		System.out.println(c1.hashCode());
		System.out.println(c2.hashCode());
		
		System.out.println(q1.hashCode());
		System.out.println(q2.hashCode());
		
		formas.add(t2);
		formas.add(c2);
		formas.add(q2);
		
		for(FormaBidimensional f : formas) {
			System.out.println("- - - - -");
			System.out.println(f.getClass().getSimpleName());
			System.out.println(f.toString());
		}
	}
}
