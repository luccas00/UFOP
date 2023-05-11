package secundario;

public class Lanchonete {
	
	private LanchoneteFactory fabrica;
	
	public Lanchonete(LanchoneteFactory fabrica) {
		this.fabrica = fabrica;
	}
	
	public Sanduiche getSanduiche() {
		Sanduiche sanduiche = fabrica.criarSanduiche();
		System.out.println("Trazendo " + sanduiche.getDescricao());
		return sanduiche;
	}
	
	public Bebidas getBebida() {
		Bebidas bebida = fabrica.criarBebida();
		System.out.println("Trazendo " + bebida.getDescricao());
		return bebida;
	}

}
