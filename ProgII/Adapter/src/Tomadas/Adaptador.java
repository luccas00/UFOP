package Tomadas;

public class Adaptador extends TomadaDoisPinos {
	
	private TomadaTresPinos tomadaTresPinos;
	
	public Adaptador(TomadaTresPinos tomada) {
		this.tomadaTresPinos = tomada;
	}
	
	@Override
	public void ligarNaTomadaDeDoisPinos() {
		tomadaTresPinos.ligarNaTomadaDeTresPinos();
	}

}
