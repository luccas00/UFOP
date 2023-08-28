package principal;

public class Empregado extends Pessoa{
	
	private double salario;
	private String matricula;
	
	public Empregado(String _nome, int _idade, String _matricula)
	{
		super(_nome, _idade);
		setMatricula(_matricula);
	}
	
	public double valorInss()
	{
		return getSalario() * (0.11);
	}

	public double getSalario() {
		return salario;
	}

	public String getMatricula() {
		return matricula;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}
	

}
