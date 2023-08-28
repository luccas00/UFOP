package secundario;

public class LanchoneteCG implements LanchoneteFactory {
	
	@Override
	public Bebidas criarBebida() {
		return new GuaranaBebida();
	}
	
	@Override
	public Sanduiche criarSanduiche() {
		return new SanduicheCG();
	}

}
