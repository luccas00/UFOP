package secundario;

public class LanchoneteCG extends AbstractFactoryLanchonete {
	
	@Override
	public Sanduiche getSanduiche() {
		Sanduiche novoSanduiche = new Sanduiche();
		novoSanduiche.setPao("Integral");
		novoSanduiche.setQueijo("Prato");
		novoSanduiche.setPresunto("De Frango");
		novoSanduiche.setSalada("Sem Verdura");
		return novoSanduiche;
	}
}
