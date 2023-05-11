package secundario;

public class LanchoneteRT extends AbstractFactoryLanchonete {

	@Override
	public Sanduiche getSanduiche() {
		Sanduiche novoSanduiche = new Sanduiche();
		novoSanduiche.setPao("Bola");
		novoSanduiche.setQueijo("Cheddar");
		novoSanduiche.setPresunto("De Peru");
		novoSanduiche.setSalada("Sem Verdura");
		return novoSanduiche;
	}
}
