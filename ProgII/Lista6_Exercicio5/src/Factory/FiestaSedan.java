package Factory;

public class FiestaSedan extends CarroSedan {

	protected FiestaSedan (String proprietario) {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = proprietario;
	}
	
	protected FiestaSedan () {
		this.placa = Componentes.geradorDePlaca();
		this.chassi = Componentes.geradorDeChassi();
		this.proprietario = "Ford";
	}
	
	@Override
	public void exibirInfoSedan() {
		System.out.println("\nCarro Sedan\nFiesta Sedan\nProprietario: " + this.proprietario + 
				"\nPlaca: " + this.placa + "\nChassi: " + this.chassi);
	}
}
