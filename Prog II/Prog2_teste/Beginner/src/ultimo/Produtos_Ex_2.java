package ultimo;

public class Produtos_Ex_2 {
	
	private String nome_item;
	private int estoque_atual;
	private double valor_item;
	private double valor_compra = 1;
	
	public Produtos_Ex_2(String nome, int estoque, double valor) {
		setNome(nome);
		setEstoque(estoque);
		setValor(valor);
	}
	
	public void setValorCompra(int qtd) {
		if (qtd <= 0) {
			qtd = 1;
			this.valor_compra = this.valor_item*qtd;
		}
		else {
			this.valor_compra = this.valor_item*qtd;
		}
	}
	
	public double getValorCompra() {
		return this.valor_compra;
	}
	
	public void setNome(String nome) {
		this.nome_item = nome;
	}
	
	public String getNome() {
		return this.nome_item;
	}
	
	public void setEstoque(int estoque) {
		this.estoque_atual = estoque;
	}
	
	public int getEstoque( ) {
		return this.estoque_atual;
	}
	
	public void setValor(double valor) {
		this.valor_item = valor;
	}
	
	public double getValor() {
		return this.valor_item;
	}
	
}