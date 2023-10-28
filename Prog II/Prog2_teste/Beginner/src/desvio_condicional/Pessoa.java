package desvio_condicional;

public class Pessoa {
	
	private int idade;
	private double peso;
	private String nome;
	
	public void aptidao() {
		if (this.idade >= 18 && this.idade <= 67) {
			if (this.peso >= 50) {
				System.out.println("Voce esta apto para doar sangue");
			}
			else {
				System.out.println("Nao esta apto");
			}
		}
		else {
			System.out.println("Nao esta apto");
		}
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public void setPeso(double peso) {
		this.peso = peso;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public int getIdade() {
		return this.idade;
	}
	
	public double getPeso() {
		return this.peso;
	}
	
	public String getNome() {
		return this.nome;
	}

}



