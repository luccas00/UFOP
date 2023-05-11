package principal;

public class Pessoa {
	
	private String nome;
	private int idade;
	private String sexo;
	
	public Pessoa(String _nome, int _idade)
	{
		setNome(_nome);
		setIdade(_idade);
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public int getIdade() {
		return this.idade;
	}
	
	public String getSexo() {
		return this.sexo;
	}
	
	private void setNome(String nome) {
		this.nome = nome;
	}
	
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public void setSexo(String sexo) {
		this.sexo = sexo;
	}

}
