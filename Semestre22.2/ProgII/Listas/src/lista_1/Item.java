package lista_1;

public class Item {
	
	private int numero_item;
	private String nome_item;
	private double valor_item;
	
	public void setNumero(int num) {
		this.numero_item = num;
	}
	
	public int getNumero() {
		return this.numero_item;
	}

	public void setNome(String nome) {
		this.nome_item = nome;
	}
	
	public String getNome() {
		return this.nome_item;
	}
	
	public void setValor(double valor) {
		this.valor_item = valor;
	}
	
	public double getValor() {
		return this.valor_item;
	}
	
}
