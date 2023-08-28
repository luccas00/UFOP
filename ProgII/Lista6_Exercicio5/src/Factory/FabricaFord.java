package Factory;

public class FabricaFord extends FabricaDeCarro {

	@Override
	public CarroSedan criarCarroSedan(String proprietario) {
		return new FiestaSedan(proprietario);
	}

	@Override
	public CarroPopular criarCarroPopular(String proprietario) {
		return new Fiesta(proprietario);
	}
	
	@Override
	public CarroSedan criarCarroSedan() {
		return new FiestaSedan();
	}

	@Override
	public CarroPopular criarCarroPopular() {
		return new Fiesta();
	}
	
}
