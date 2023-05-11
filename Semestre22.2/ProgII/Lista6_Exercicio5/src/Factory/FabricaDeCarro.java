package Factory;

public abstract class FabricaDeCarro {
	
	public abstract CarroSedan criarCarroSedan(String proprietario);
	public abstract CarroPopular criarCarroPopular(String proprietario);
	
	public abstract CarroSedan criarCarroSedan();
	public abstract CarroPopular criarCarroPopular();

}
