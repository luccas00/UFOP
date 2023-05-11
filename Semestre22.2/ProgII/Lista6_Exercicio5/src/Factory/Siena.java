package Factory;

public class Siena extends CarroSedan {
	
	protected Siena(String proprietario) {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = proprietario;
	}
	
	protected Siena() {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = "Fiat";
	}
	
	@Override
	public void exibirInfoSedan() {
		System.out.println("\nCarro Sedan\nSiena\nProprietario: " + this.proprietario + 
				"\nPlaca: " + this.placa + "\nChassi: " + this.chassi);
	}
}
