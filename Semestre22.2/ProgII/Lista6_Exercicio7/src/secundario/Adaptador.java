package secundario;

import java.util.ArrayList;
import java.util.List;

public class Adaptador implements SomadorEsperado{
	
	private SomadorExistente somadorExistente;
	
	
	public Adaptador(SomadorExistente somadorExistente) {
		this.somadorExistente = somadorExistente;
	}

	@Override
	public int somaVetor(int[] vetor) {
		List<Integer> list = new ArrayList<>();
		for (int i : vetor) {
			list.add(i);
		}
		return somadorExistente.somaLista(list);
	}
	

}
