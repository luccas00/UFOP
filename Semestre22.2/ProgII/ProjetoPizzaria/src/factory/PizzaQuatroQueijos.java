package factory;

public class PizzaQuatroQueijos extends Pizza {
	
	private String processoDeFabricacao;
	
	protected PizzaQuatroQueijos(String processoDeFabricacao) {
		super("Pizza Quatro Queijos");
		this.processoDeFabricacao = processoDeFabricacao;
	}
	
	@Override
	public String toString() {
		return super.toString() + " - " + this.processoDeFabricacao;
	}
}
