package jogoDaVelha;

public enum StatusPlace {
	
	VAZIO(" "), JOGADOR_1("X"), JOGADOR_2("O");
	
	private String status;
	
	private StatusPlace(String n) {
		this.status = n;
	}
	
	public String getStatusPlace() {
		return this.status;
	}
}



