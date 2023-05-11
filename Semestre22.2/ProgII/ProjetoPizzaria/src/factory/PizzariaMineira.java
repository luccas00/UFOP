package factory;

public class PizzariaMineira  extends AbstractFactoryPizzaria {

	@Override
	public Pizza FactoryPizza(String sabor) {
		if (sabor.equals("Pizza Mussarela")) {
			return new PizzaMussarela();
		} else if (sabor.equals("Pizza Quatro Queijos")) {
			return new PizzaQuatroQueijos("Mineira");
		} else if (sabor.equals("Pizza Calabresa")) {
			return new PizzaCalabresa();
		} else {
			return new Pizza(sabor);
		}
	}
}
