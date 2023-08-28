package Factory;

public class FabricaFiat extends FabricaDeCarro {

	@Override
	public CarroSedan criarCarroSedan(String proprietario) {
		return new Siena(proprietario);
	}

	@Override
	public CarroPopular criarCarroPopular(String proprietario) {
		return new Palio(proprietario);
	}
	
	@Override
	public CarroSedan criarCarroSedan() {
		return new Siena();
	}

	@Override
	public CarroPopular criarCarroPopular() {
		return new Palio();
	}

}
