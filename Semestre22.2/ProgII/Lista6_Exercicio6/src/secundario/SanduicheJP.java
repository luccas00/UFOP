package secundario;

public class SanduicheJP extends Ingredientes
implements Sanduiche {
	
	protected SanduicheJP() {
		this.setPao("Frances");
		this.setQueijo("Mussarela");
		this.setPresunto("De Frango");
		this.setSalada("Com Verdura");
	}
	
	@Override
	public String getDescricao() {
		return "Pao Frances\nQueijo Mussarela\nPresunto de Frango\nSalada Com Verdura";
	}
	
	@Override
	public String toString() {
		return super.toString();
	}

}
