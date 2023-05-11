package secundario;

public abstract class Ingredientes {
	
	protected Ingredientes() {
		
	}
	
	private String pao;
	private String queijo;
	private String presunto;
	private String salada;
	
	public String getPao() {
		return this.pao;
	}
	
	public String getQueijo() {
		return this.queijo;
	}
	
	public String getPresunto() {
		return this.presunto;
	}
	
	public String getSalada() {
		return this.salada;
	}
	
	public void setPao(String pao) {
		this.pao = pao;
	}
	
	public void setQueijo(String queijo) {
		this.queijo = queijo;
	}
	
	public void setPresunto(String presunto) {
		this.presunto = presunto;
	}
	
	public void setSalada(String salada) {
		this.salada = salada;
	}
	
	@Override
	public String toString() {
		return "\nPao: " + this.getPao() + "\nQueijo: " + this.getQueijo() +
				"\nPresunto: " + this.getPresunto() + "\nSalada: " + this.getSalada();
	}
}
