package principal;

import java.util.ArrayList;

import Tomadas.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		TomadaDoisPinos t1 = new TomadaDoisPinos();
		t1.ligarNaTomadaDeDoisPinos();
		
		TomadaTresPinos t2 = new TomadaTresPinos();
		t2.ligarNaTomadaDeTresPinos();
		
		ArrayList<TomadaDoisPinos> equipamentos = new ArrayList<>();
		Adaptador adptador = new Adaptador(t2);
		
		equipamentos.add(t1);
		equipamentos.add(adptador);
		
		System.out.println("\nLigando todos os equipamentos na tomada");
		for (TomadaDoisPinos t : equipamentos) {
			t.ligarNaTomadaDeDoisPinos();
		}
		
	}

}
