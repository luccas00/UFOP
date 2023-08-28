package segundoExemplo;

public class Diretor extends Funcionario implements Autenticavel{
	
	public Diretor(String nome) {
		super(nome);
	}

	@Override
	public boolean autentica(String senha) {
		// TODO Auto-generated method stub
		return false;
	}

}
