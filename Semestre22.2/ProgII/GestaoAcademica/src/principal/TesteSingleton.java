package principal;

import bancoDeDados.ConexaoSingleton;

public class TesteSingleton {
	
	public static void main(String[] args) {
		
		ConexaoSingleton conection = ConexaoSingleton.GetInstance();
		
		conection.setSenha("9999");
		conection.setUsuario("Luccas");
		
		System.out.println(conection);
		
		ConexaoSingleton nova = ConexaoSingleton.GetInstance();
		
		System.out.println(nova);
		
		System.out.println(nova.hashCode());
		System.out.println(conection.hashCode());
		
		System.out.println(nova.equals(conection));

	}

}
