package principal;

public class Controlador {
	
	public static void main(String[] args) {
		
		Conta c1 = new Conta("111", "Luccas");
		c1.deposita(100);
		System.out.println(c1);
		
		try {
			c1.saque(1000);
		} catch (ContaException e) {
			System.out.println(e.getMensage());
		}
	}
}
