package primeiroExemplo;

import java.util.Scanner;

public abstract class Pessoa {
	
	public Scanner sc = new Scanner(System.in);
	
	private String nome;
	private int idade;
	private String telefone;
	private String email;
	
	public Pessoa(String nome)
	{
		setNome(nome);
	}
	
	public Pessoa(String nome, int idade, String telefone, String email)
	{
		setNome(nome);
		setIdade(idade);
		setEmail(email);
		setTelefone(telefone);
	}
	
	public abstract void pagarImposto();
	
	public void imprimirDados()
	{
		System.out.println("- - - - -");
		System.out.println("Nome: " + this.getNome());
		System.out.println("Idade: " + this.getIdade());
		System.out.println("Telefone: " + this.getTelefone());
		System.out.println("Email: " + this.getEmail());
	}

	public String getNome() {
		return this.nome;
	}

	public int getIdade() {
		return this.idade;
	}

	public String getTelefone() {
		return this.telefone;
	}

	public String getEmail() {
		return this.email;
	}

	private void setNome(String nome) {
		this.nome = nome;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

	public void setEmail(String email) {
		this.email = email;
	}
	
}
