package principal;

public class Gerente extends Empregado{
	
	private String nomeGerencia;
	
	public Gerente(String _nome, int _idade, String _matricula, String _nomeGerencia)
	{
		super(_nome, _idade, _matricula);
		setNomeGerencia(_nomeGerencia);;
	}

	public String getNomeGerencia() {
		return nomeGerencia;
	}

	public void setNomeGerencia(String nomeGerencia) {
		this.nomeGerencia = nomeGerencia;
	}
	
	@Override
	public String toString()
	{
		return "\nNome: " + super.getNome() + "\nIdade: " + super.getIdade() + 
				"\nMatricula: " + super.getMatricula() + "\nNome da Gerencia: " + getNomeGerencia() + "\nValor do INSS R$ " + super.valorInss();
	}
	
	

}
