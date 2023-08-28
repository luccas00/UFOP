package secundario;

public class SanduicheRT extends Ingredientes
implements Sanduiche {
	
	protected SanduicheRT() {
		this.setPao("Bola");
		this.setQueijo("Cheddar");
		this.setPresunto("De Peru");
		this.setSalada("Sem Verdura");
	}
	
	@Override
	public String getDescricao() {
		return "Pao Bola\nQueijo Cheddar\nPresunto de Peru\nSalada Sem Verdura";
	}

	@Override
	public String toString() {
		return super.toString();
	}
	
}
