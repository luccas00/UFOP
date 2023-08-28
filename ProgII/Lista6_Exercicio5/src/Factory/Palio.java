package Factory;

public class Palio extends CarroPopular {
	
	protected Palio (String proprietario) {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = proprietario;
	}
	
	protected Palio () {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = "Fiat";
	}
	
	@Override
	public void exibirInfoPopular() {
		System.out.println("\nCarro Popular\nPalio\nProprietario: " + this.proprietario + 
				"\nPlaca: " + this.placa + "\nChassi: " + this.chassi);
	}

}
