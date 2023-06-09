package lista_1;

public class Fatura {

	private Item base = new Item();
	private int qtd_comprada;
	private double valor_final, sub_total;
	
	public void setSubTotal() {
		this.sub_total = this.qtd_comprada*this.base.getValor();
	}
	
	public double getSubTotal() {
		setSubTotal();
		return this.sub_total;
	}
	
	public void setValorFinalFatura() {
		this.valor_final = this.qtd_comprada*this.base.getValor();
	}
	
	public double getValorFinalFatura() {
		setValorFinalFatura();
		return this.valor_final;
	}
	
	public void setQtdComprada(int num) {
		this.qtd_comprada = num;
	}
	
	public int getQtdComprada() {
		return this.qtd_comprada;
	}
	
	public void imprimeItem() {
		System.out.println("Nome: " + this.base.getNome());
		System.out.println("Valor R$ " + this.base.getValor());
		System.out.println("Numero do Produto: " + this.base.getNumero());
		System.out.println("Quantidade Comprada: " + this.getQtdComprada());
		System.out.println("Sub-total Item R$ " + this.getSubTotal());
	}
	
	public void setItem(String nome, double valor, int numero, int qtd) {
		this.base.setNome(nome);
		this.setQtdComprada(qtd);
		this.base.setNumero(numero);
		this.base.setValor(valor);
	}
	
	
}

