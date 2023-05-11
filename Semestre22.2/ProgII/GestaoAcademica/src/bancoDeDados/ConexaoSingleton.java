package bancoDeDados;

public class ConexaoSingleton {
	
	private static ConexaoSingleton instance;
	
	private String usuario;
	private String senha;
	
	private ConexaoSingleton() {
		
	}
	
	public static ConexaoSingleton GetInstance() {
		if (instance == null)
			instance = new ConexaoSingleton();
		return instance;
	}

	public void setUsuario(String usuario) {
		this.usuario = usuario;
	}

	public void setSenha(String senha) {
		this.senha = senha;
	}
	
	@Override
	public String toString() {
		return "Usuario: " + this.usuario + "||" + "Senha: " + this.senha;
	}
	
}
