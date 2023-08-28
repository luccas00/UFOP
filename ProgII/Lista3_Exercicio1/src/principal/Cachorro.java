package principal;

public class Cachorro extends Animal{
	
	private String raca;
	
	public Cachorro(String _nome, String _raca) {
		super(_nome);
		setRaca(_raca);
	}

	public String getRaca() {
		return raca;
	}

	private void setRaca(String raca) {
		this.raca = raca;
	}
	
	@Override
	public String toString() {
		return super.toString() + "Cachorro\n[Raca = " + getRaca() + "]";
	}
	
	

}
