package secundario;

public class GuaranaBebida implements Bebidas {
	
private String bebida;
	
	protected GuaranaBebida() {
		this.bebida = "Guarana";
	}
	
	@Override
	public String getDescricao() {
		return "Bebida Guarana";
	}
	
	@Override
	public String toString() {
		return this.bebida;
	}

}
