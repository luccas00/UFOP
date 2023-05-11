package lista_1;

public class Plantas_Ex_2 {
	
	private String nome_planta;
	private int estoque_ideal;
	private int quatidade_estoque;

	public void setNome(String nome) {
		this.nome_planta = nome;
	}
	
	public void setEstoqueIdeal(int num) {
		this.estoque_ideal = num;
	}
	
	public void setQuantidadeEstoque(int num) {
		this.quatidade_estoque = num;
	}
	
	public String getNome() {
		return this.nome_planta;
	}
	
	public int getEstoqueIdeal() {
		return this.estoque_ideal;
	}
	
	public int getQuantidadeEstoque() {
		return this.quatidade_estoque;
	}
	
}
