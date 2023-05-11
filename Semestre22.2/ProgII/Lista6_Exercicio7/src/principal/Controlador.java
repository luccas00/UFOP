package principal;

import secundario.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		SomadorExistente somadorExistente = new SomadorExistente();
		SomadorEsperado adaptador = new Adaptador(somadorExistente);
				
		Cliente cliente = new Cliente(adaptador);
		cliente.executar();

	}

}
