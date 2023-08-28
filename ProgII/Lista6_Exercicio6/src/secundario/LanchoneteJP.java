package secundario;

public class LanchoneteJP implements LanchoneteFactory {
	
	@Override
	public Bebidas criarBebida() {
		return new CocaColaBebida();
	}
	
	@Override
	public Sanduiche criarSanduiche() {
		return new SanduicheJP();
	}

}
