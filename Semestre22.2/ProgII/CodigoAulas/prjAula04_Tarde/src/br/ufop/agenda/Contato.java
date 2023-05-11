package br.ufop.agenda;

public class Contato {

	private static int CONTADOR;
	
	private int identificador;
	private String nome;
	private String telefone;
	private String endereco;
	private boolean estaAtivo = true;
	
	
	public Contato(String nome) {
		this.identificador = Contato.CONTADOR;
		Contato.CONTADOR++;
		this.nome = nome;
	}
	
	public int getIdentificador() {
		return this.identificador;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public void alteraNomeDoContato(String nome) {
		this.nome = nome;
	}
	
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	
	public String getTelefone() {
		if(this.telefone == null)
			return "Não definido.";
		return this.telefone;
	}
	
	public void setEndereco(String end) {
		this.endereco = end;
	}
	
	public String getEndereco() {
		if(this.endereco == null)
			return "Não definido.";
		return this.endereco;
	}
	
	public void desabilitaContato() {
		this.estaAtivo = false;
	}
	
	public void escreveNaTela() {
		if(this.estaAtivo) {
			System.out.println("------------------------------------");
			System.out.println("Nome: " + this.identificador);
			System.out.println("Nome: " + this.getNome());
			System.out.println("Telefone: " + this.getTelefone());
			System.out.println("Endereço: " + this.getEndereco());
		}
	}
	
	public static Contato Cria() {
		Contato c = new Contato("Rafael Alexandre");
		c.alteraNomeDoContato("Wagner");
		c.setEndereco("Rua fulano de tal");
		c.setTelefone("(31)99999-9999");
		return c;
	}
	
}
