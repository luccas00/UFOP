package secundario;

public class LanchoneteJP extends AbstractFactoryLanchonete {
	
	@Override
	public Sanduiche getSanduiche() {
		Sanduiche novoSanduiche = new Sanduiche();
		novoSanduiche.setPao("Frances");
		novoSanduiche.setQueijo("Mussarela");
		novoSanduiche.setPresunto("De Frango");
		novoSanduiche.setSalada("Com Verdura");
		return novoSanduiche;
	}

}
