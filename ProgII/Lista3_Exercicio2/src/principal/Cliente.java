package principal;

public class Cliente extends Pessoa{
	
	private double valorDivida;
	private int anoNascimento;
	
	public Cliente(String _nome, int _idade, String _sexo)
	{
		super(_nome, _idade);
		super.setSexo(_sexo);
	}

	public double getValorDivida() {
		return valorDivida;
	}

	public int getAnoNascimento() {
		return anoNascimento;
	}

	public void setValorDivida(double valorDivida) {
		this.valorDivida = valorDivida;
	}

	public void setAnoNascimento(int anoNascimento) {
		this.anoNascimento = anoNascimento;
	}
	
	@Override
	public String toString()
	{
		return "\nNome: " + super.getNome() + "\nIdade: " + super.getIdade() + "\nSexo: " + super.getSexo() + "\nValor da Divida R$ " + getValorDivida() + "\nAno de Nascimento " + getAnoNascimento();
	}
	
	
	
	

}
