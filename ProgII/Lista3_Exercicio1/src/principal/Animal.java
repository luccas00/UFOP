package principal;

public class Animal {

	private String nome;
	private double peso;
	
	public Animal(String _nome)
	{
		setNome(_nome);;
	}
	
	public String getNome() {
		return this.nome;
	}

	public double getPeso() {
		return this.peso;
	}

	private void setNome(String _nome) {
		this.nome = _nome;
	}

	public void setPeso(double _peso) {
		this.peso = _peso;
	}
	
	@Override
	public String toString()
	{
		return "Animal\n[Nome = " + getNome() + "]\n[Peso = " + getPeso() + "]\n";
	}
	
	
	

}
