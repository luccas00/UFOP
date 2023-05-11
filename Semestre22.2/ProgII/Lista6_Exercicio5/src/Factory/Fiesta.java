package Factory;

public class Fiesta extends CarroPopular {
	
	protected Fiesta (String proprietario) {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = proprietario;
	}
	
	protected Fiesta () {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = "Ford";
	}
	
	@Override
	public void exibirInfoPopular() {
		System.out.println("\nCarro Popular\nFiesta\nProprietario: " + this.proprietario + 
				"\nPlaca: " + this.placa + "\nChassi: " + this.chassi);
	}
}
