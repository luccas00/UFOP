package principal;

import factory.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		AbstractFactoryPizzaria place1 = new PizzariaItaliana();
		AbstractFactoryPizzaria place2 = new PizzariaMineira();
		
		Pizza p1 = place1.FactoryPizza("Pizza Quatro Queijos");
		Pizza p2 = place2.FactoryPizza("Pizza Quatro Queijos");
		
		System.out.println(p1);
		System.out.println(p2);
		
		
		
		
	}

}
