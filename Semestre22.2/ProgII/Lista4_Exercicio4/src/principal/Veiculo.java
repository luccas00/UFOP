package principal;

public abstract class Veiculo {
	
	private String nome;
	
	public Veiculo(String nome)
	{
		this.setNome(nome);
	}
	
	public abstract void listarVerificacoes();
	public abstract void ajustar();
	public abstract void limpar();
	
	public String getNome() {
		return this.nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	@Override
	public String toString() {
		return this.getNome() + "\n";
	}
	
	

	
	
}
