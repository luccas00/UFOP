package secundario;

public class LanchoneteRT implements LanchoneteFactory {
	
	@Override
	public Bebidas criarBebida() {
		return new GuaranaBebida();
	}
	
	@Override
	public Sanduiche criarSanduiche() {
		return new SanduicheRT();
	}

}
