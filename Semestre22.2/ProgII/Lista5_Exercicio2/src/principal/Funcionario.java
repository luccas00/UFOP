package principal;

import java.util.Objects;

public class Funcionario {
	
	private String nome;
	private double salario;
	private String cargo;

	public Funcionario(String nome, double salario, String cargo) {
		setSalario(salario);
		setNome(nome);
		setCargo(cargo);
	}

	public String getNome() {
		return this.nome;
	}

	public double getSalario() {
		return this.salario;
	}

	private void setNome(String nome) {
		this.nome = nome;
	}

	private void setSalario(double salario) {
		this.salario = salario;
	}

	public String getCargo() {
		return this.cargo;
	}

	public void setCargo(String cargo) {
		this.cargo = cargo;
	}

	@Override
	public int hashCode() {
		return Objects.hash(nome);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Funcionario other = (Funcionario) obj;
		return Objects.equals(nome, other.nome);
	}
	
	@Override
	public String toString() {
		return "Nome: " + this.getNome() + "\nSalario $ " + this.getSalario() + "\nCargo: " + this.getCargo();
	}

}
