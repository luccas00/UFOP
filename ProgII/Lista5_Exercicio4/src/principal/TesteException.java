package principal;

public class TesteException {
	
	public static void main(String[] args) {
		System.out.println("Inicio do main");
		metodo1();
		System.out.println("Fim do main");
	}
	
	static void metodo1() {
		System.out.println("Inicio metodo1");
		metodo2();
		System.out.println("Fim metodo1");
	}
	
	static void metodo2() {
		System.out.println("Inicio metodo2");
		int[] array = new int[10];
		try {
			for (int i = 0; i <= 15; i++) {
				array[i] = i;
				System.out.println(i);
			}
		} catch (Exception e) {
			System.out.println("Tratamendo de Excecao: " + e.getMessage());
		}
		System.out.println("Fim metodo2");
	}

}
