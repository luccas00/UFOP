package br.ufop.agenda;

public class Contato {

	public static int CONTADOR = 1;
	
	private int identificador;
	private String nome;
	private String telefone;
	private String email;
	private String endereco;
	
	
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
	
	public void alteraNome(String nome) {
		this.nome = nome;
	}
	
	public String getEndereco() {
		if(this.endereco == null)
			return "Não definido.";
		return this.endereco;
	}
	
	public void setEndereco(String end) {
		this.endereco = end;
	}
	
	public String getTelefone() {
		if(this.telefone == null)
			return "Não definido";
		return this.telefone;
	}
	
	public void setTelefone(String tel) {
		this.telefone = tel;
	}
	
	public String getEmail() {
		if(this.email == null)
			return "Não definido.";
		return this.email;
	}
	
	public void setEmail(String email) {
		this.email = email;
	}
	
	@Override
	public boolean equals(Object obj) {
		Contato c = (Contato)obj;
		
		if(!this.nome.toUpperCase().equals(c.getNome().toUpperCase()))
			return false;
		if(!this.getEndereco().equals(c.getEndereco()))
			return false;
		if(!this.getEmail().equals(c.getEmail()))
			return false;
			
		return true;
	}
	
	public void escreveNaTela() {
		System.out.println("-----------------------------");
		System.out.println("IDENTIFICADOR: " + this.identificador);
		System.out.println("NOME: " + this.getNome());
		System.out.println("ENDEREÇO: " + this.getEndereco());
		System.out.println("EMAIL:" + this.getEmail());
	}
}
