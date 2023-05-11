package secundario;

public class Arvore {
	
	public static Arvore instance;
	
	public Item esquerda;
	public Item direita;

	private Arvore() {
		if (esquerda == null && direita == null) {
			esquerda = new Item();
			direita = new Item();	
		}
	}
	
	public static Arvore GetInstance() {
		if(instance == null)
			instance = new Arvore();
		return instance;
	}

	@Override
	public String toString() {
		return "Arvore\nEsquerda: " + this.esquerda + "\nDireita: " + this.direita;
	}
	
	

}
