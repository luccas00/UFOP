package secundario;

public class SanduicheCG extends Ingredientes
implements Sanduiche {
	
	protected SanduicheCG() {
		this.setPao("Integral");
		this.setQueijo("Prato");
		this.setPresunto("De Frango");
		this.setSalada("Sem Verdura");
	}
	
	@Override
	public String getDescricao() {
		return "Pao Integral\nQueijo Prato\nPresunto de Frango\nSalada Sem Verdura";
	}
	
	@Override
	public String toString() {
		return super.toString();
	}

}
