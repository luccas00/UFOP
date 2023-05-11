package principal;

public class Peixe extends Animal{
	
	private String tipoHabitat;
	
	public Peixe(String _nome, String _tipoHabitat)
	{
		super(_nome);
		setTipoHabitat(_tipoHabitat);
	}

	public String getTipoHabitat() {
		return this.tipoHabitat;
	}

	private void setTipoHabitat(String tipoHabitat) {
		this.tipoHabitat = tipoHabitat;
	}
	
	@Override
	public String toString() {
		return super.toString() + "Peixe\n[Tipo de Habitat = " + getTipoHabitat() + "]";
	}
	
	

}
