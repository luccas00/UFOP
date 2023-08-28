package pessoas;

import java.util.Random;
import java.util.Scanner;

public abstract class Pessoas implements iPessoa, Comparable<Pessoas>{
	
	Scanner sc = new Scanner(System.in);
	
	private String nome;
	private String cpf;
	private int anoNascimento;
	private int mesNascimento;
	private int diaNascimento;
	
	public Pessoas(String nome, String cpf) {
		setNome(nome);
		setCpf(cpf);
		setNascimento();
	}
	
	public void imprimeObjeto() {
		System.out.println("Nome: " + getNome());
		System.out.println("CPF: " + getCpf());
		System.out.println("Data de Nascimento: " + getDiaNascimento() + "/" + getMesNascimento() + "/" + getAnoNascimento());
	}
	
	private void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public String getCpf() {
		return this.cpf;
	}
	
	private void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public int getAnoNascimento() {
		return anoNascimento;
	}

	public int getMesNascimento() {
		return mesNascimento;
	}

	public int getDiaNascimento() {
		return diaNascimento;
	}

	private void setNascimento() {
		Random rand = new Random();
		this.anoNascimento = rand.nextInt(1980, 2002);
		this.mesNascimento = rand.nextInt(1, 13);
		if (this.mesNascimento == 2) {
			this.diaNascimento =  rand.nextInt(1, 29);
		} else {
			this.diaNascimento =  rand.nextInt(1, 32);
		}
	}
	
	@Override
    public int compareTo(Pessoas other) {
        return this.nome.compareTo(other.getNome());
    }
	
}
