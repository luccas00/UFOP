package segundoExemplo;

public class Gerente extends Funcionario implements Autenticavel{
	
	private String senha = "Gerente";
	
	public Gerente(String nome) {
		super(nome);
	}

	@Override
	public boolean autentica(String senha) {
		// TODO Auto-generated method stub
		return false;
	}

}
