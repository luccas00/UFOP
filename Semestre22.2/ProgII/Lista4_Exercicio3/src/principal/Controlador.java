package principal;

public class Controlador {
	
	public static void main(String[] args) {
		
		Number n1 = new Number(110);
		Number n2 = new Number(10);
		Number n3 = new Number(110);
		
		//Imprimindo todos os dados e HashCode das instancias
		System.out.println("- - - - -");
		System.out.println("N1 = " + n1);
		System.out.println("Hash Code: " + n1.hashCode());
		
		System.out.println("- - - - -");
		System.out.println("N2 = " + n2);
		System.out.println("Hash Code: " + n2.hashCode());
		
		System.out.println("- - - - -");
		System.out.println("N3 = " + n3);
		System.out.println("Hash Code: " + n3.hashCode());
		
		//Comparando as tres instancias
		System.out.println("N1 equals N2 ? " + n1.equals(n2));
		System.out.println("N1 equals N3 ? " + n1.equals(n3));
		System.out.println("N2 equals N3 ? " + n2.equals(n3));
		
	}

}
