package factory;

public class Pizza {
	
	private String sabor;
	
	protected Pizza(String sabor) {
		this.sabor = sabor;
	}
	
	public String getSabor() {
		return this.sabor;
	}
	
	@Override
	public String toString() {
		return this.sabor;
	}

}
