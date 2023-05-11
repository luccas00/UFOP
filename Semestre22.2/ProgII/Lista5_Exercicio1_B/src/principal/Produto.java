package principal;

import java.util.Objects;

public class Produto {
	
	private String id;
	private String nome;
	private double valor;
	
	public Produto(String nome, String id, double valor) {
		setId(id);
		setNome(nome);
		setValor(valor);
	}

	public String getId() {
		return this.id;
	}

	public String getNome() {
		return this.nome;
	}

	public double getValor() {
		return this.valor;
	}

	private void setId(String id) {
		this.id = id;
	}

	private void setNome(String nome) {
		this.nome = nome;
	}

	private void setValor(double valor) {
		this.valor = valor;
	}
	
	@Override
	public String toString() {
		return "Nome: " + getNome() + "\nID: " + getId() + "\nValor R$ " + getValor() + "\n";
	}

	@Override
	public int hashCode() {
		return Objects.hash(id);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Produto other = (Produto) obj;
		return Objects.equals(id, other.id);
	}
	
	
	
	

}
