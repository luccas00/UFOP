package secundario;

import java.util.Objects;

public class MaquinaDeEscrever {
	
	private static MaquinaDeEscrever instance;

	private String usuario;
	private String senha;
	private int codigo;
	
	private MaquinaDeEscrever() {
		
	}
	
	public static MaquinaDeEscrever GetInstance() {
		if (instance == null)
			instance = new MaquinaDeEscrever();
		return instance;
	}
	
	public String getUsuario() {
		return this.usuario;
	}

	public String getSenha() {
		return this.senha;
	}

	public int getCodigo() {
		return this.codigo;
	}

	public void setUsuario(String usuario) {
		this.usuario = usuario;
	}

	public void setSenha(String senha) {
		this.senha = senha;
	}

	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}

	@Override
	public String toString() {
		return "Usuario: " + this.getUsuario() + "||" + "Senha: " + this.getSenha() + 
				"\nCodigo: " +this.getCodigo();
	}

	@Override
	public int hashCode() {
		return Objects.hash(codigo, senha, usuario);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		MaquinaDeEscrever other = (MaquinaDeEscrever) obj;
		return codigo == other.codigo && Objects.equals(senha, other.senha) && Objects.equals(usuario, other.usuario);
	}
	
}
