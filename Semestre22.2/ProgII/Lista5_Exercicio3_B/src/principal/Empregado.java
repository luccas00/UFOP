package principal;

import java.text.DateFormat;
import java.util.*;

public class Empregado implements Comparable<Empregado> {
	
	private String id;
	private String nome;
	private double salario;
	private Date contratacao;
	
	public Empregado(String nome, String id, double salario, Date data) {
		setNome(nome);
		setId(id);
		setSalario(salario);
		setContratacao(data);
	}

	public String getId() {
		return this.id;
	}

	public String getNome() {
		return this.nome;
	}

	public double getSalario() {
		return this.salario;
	}

	public Date getContratacao() {
		return this.contratacao;
	}

	private void setId(String id) {
		this.id = id;
	}

	private void setNome(String nome) {
		this.nome = nome;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	private void setContratacao(Date contratacao) {
		this.contratacao = contratacao;
	}
	
	private String saidaData() {
		DateFormat f = DateFormat.getDateInstance(DateFormat.SHORT);
		return f.format(getContratacao());
	}
	
	@Override
	public String toString() {
		return "\nNome: " + getNome() + "\nID: " + getId() + "\nSalario R$ " + this.getSalario() + "\nContratacao: " + saidaData();
	}

	@Override
	public int compareTo(Empregado outro) {
		return this.nome.compareTo(outro.getNome());
	}

}
