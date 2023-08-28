package principal;

import java.util.ArrayList;

public class Oficina {

	ArrayList<Veiculo> veiculos = new ArrayList<>();
	
	public Oficina()
	{
		
	}
	
	public Veiculo proximo() {
		if (!veiculos.isEmpty()) {
			int randomIndex = (int)(Math.random() * veiculos.size());
			return this.veiculos.get(randomIndex);
		} else {
			System.out.println("Oficina Vazia");
			return null;
		}
	}
	
	public void Manutencao(Veiculo v) {
		v.listarVerificacoes();
		v.ajustar();
		v.limpar();
	}
	
}
