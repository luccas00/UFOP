package modulo1Componentes;

public class ChassiCarro {
	
	final String chassi = GeradorDeChassi.getAlphaNumericString(12);
	
	public ChassiCarro() {
		
	}
	
	protected String getChassi() {
		return this.chassi;
	}
	
}
