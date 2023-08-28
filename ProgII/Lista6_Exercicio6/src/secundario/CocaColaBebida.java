package secundario;

public class CocaColaBebida implements Bebidas {
	
	private String bebida;
	
	protected CocaColaBebida() {
		this.bebida = "Coca Cola";
	}
	
	@Override
	public String getDescricao() {
		return "Bebida Coca Cola";
	}
	
	@Override
	public String toString() {
		return this.bebida;
	}

}
