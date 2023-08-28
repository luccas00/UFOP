package secundario;

public class Sanduiche {
	
	private String pao;
	private String queijo;
	private String presunto;
	private String salada;
	
	protected Sanduiche() {	
	
	}

	protected void setPao(String pao) {
		this.pao = pao;
	}

	protected void setQueijo(String queijo) {
		this.queijo = queijo;
	}

	protected void setPresunto(String presunto) {
		this.presunto = presunto;
	}

	protected void setSalada(String salada) {
		this.salada = salada;
	}

	@Override
	public String toString() {
		return "\nPao: " + this.pao + "\nQueijo: " + this.queijo + 
				"\nPresunto: " + this.presunto + "\nSalada: " + this.salada;
	}
	
}
